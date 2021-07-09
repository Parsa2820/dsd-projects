import sys, getopt
import json

CPU_ADDRESS_LEN = 16
CPU_WORD_LEN = 16

def main(argv):
    synopsis = 'assembler.py [-d | --data] [-v | --verilog] -i <inputfile> -o <outputfile>'
    inputfile = ''
    outputfile = ''
    data = False
    verilog = False
    try:
        opts, args = getopt.getopt(argv,"hdvi:o:",["help", "data", "verilog", "input=","output="])
    except getopt.GetoptError:
        print (synopsis)
        sys.exit(2)
    
    arg_count = 0
    for opt, arg in opts:
        if opt in ("-h", "--help"):
            print (synopsis)
            sys.exit()
        if opt in ("-d", "--data"):
            data = True
        if opt in ("-v", "--verilog"):
            verilog = True
        elif opt in ("-i", "--input"):
            inputfile = arg
            arg_count += 1
        elif opt in ("-o", "--output"):
            outputfile = arg
            arg_count += 1
    
    if (arg_count != 2):
        print (synopsis)
        sys.exit(2)

    assemble(inputfile, outputfile, data, verilog)


def assemble(in_path, out_path, data, verilog):
    in_file = open(in_path, "r")
    in_program = json.loads(in_file.read())
    in_file.close()
    out_file = open(out_path, 'w+')
    identifier2address, address2value = process_data(in_program)

    if verilog:
        out_file.write(dic_verilog_array(assemble_code(in_program['code'], identifier2address)))
        if data:
            out_file.write('\n')
            out_file.write(dic_verilog_array(address2value))       
    else:
        out_file.write(dic_table(assemble_code(in_program['code'], identifier2address)))
        if data:
            out_file.write('\n')
            out_file.write(dic_table(address2value))

    out_file.close()


def process_data(program):
    data_addr = 1
    data = program['data']
    identifier2address = {'ZERO': decimal2binary_signed('0', CPU_WORD_LEN)}
    address2value = {decimal2binary_signed('0', CPU_ADDRESS_LEN): decimal2binary_signed('0', CPU_ADDRESS_LEN)}

    for instruction in program['code']:

        if instruction['instruction'] == 'subleq':
            if instruction['label'] != '':
                binary_addr = decimal2binary_signed(str(data_addr), CPU_ADDRESS_LEN)
                identifier2address[instruction['label']] = binary_addr
            data_addr += 3
        elif instruction['instruction'] == 'comment':
            pass
        else:
            raise Exception(f"Unknown instruction {instruction[instruction]}")

    for identifier in data.keys():
        binary_addr = decimal2binary_signed(str(data_addr), CPU_ADDRESS_LEN)
        identifier2address[identifier] = binary_addr
        if (isint(data[identifier])):
            address2value[binary_addr] = decimal2binary_signed(data[identifier], CPU_WORD_LEN)
        else:
            address2value[binary_addr] = identifier2address[data[identifier]]
        data_addr += 1

    return (identifier2address, address2value)


def assemble_code(code, i2a):
    machine_code = {}
    code_addr = 1

    for instruction in code:
        if instruction['instruction'] == 'subleq':
            op1addr = ''
            if instruction['op1'].startswith('++'):
                new_addr = binary2decimal_signed(i2a[instruction['op1'][2:]]) + 1
                op1addr = decimal2binary_signed(str(new_addr), CPU_ADDRESS_LEN)
            else:
                op1addr = i2a[instruction['op1']]
            machine_code[decimal2binary_signed(str(code_addr), CPU_ADDRESS_LEN)] = op1addr
            code_addr += 1

            op2addr = ''
            if instruction['op2'].startswith('++'):
                new_addr = binary2decimal_signed(i2a[instruction['op2'][2:]]) + 1
                op2addr = decimal2binary_signed(str(new_addr), CPU_ADDRESS_LEN)
            else:
                op2addr = i2a[instruction['op2']]
            machine_code[decimal2binary_signed(str(code_addr), CPU_ADDRESS_LEN)] = op2addr
            code_addr += 1

            if (instruction['jaddr'] == ''):
                machine_code[decimal2binary_signed(str(code_addr), CPU_ADDRESS_LEN)] = decimal2binary_signed('0', CPU_ADDRESS_LEN)
            elif (isint(instruction['jaddr'])):
                jaddr = decimal2binary_signed(instruction['jaddr'], CPU_ADDRESS_LEN)
                machine_code[decimal2binary_signed(str(code_addr), CPU_ADDRESS_LEN)] = jaddr
            else:
                jaddr = i2a[instruction['jaddr']]
                machine_code[decimal2binary_signed(str(code_addr), CPU_ADDRESS_LEN)] = jaddr

            code_addr += 1
        elif instruction['instruction'] == 'comment':
            pass
        else:
            raise Exception(f"Unknown instruction {instruction[instruction]}")

    return machine_code
         

def dic_table(dic):
    result = ''

    for key in dic.keys():
        result += str(key) + ": " + dic[key] + '\n'

    return result


def dic_verilog_array(dic):
    result = ''

    for key in dic.keys():
        result += '#2\n' + f"in_address = {CPU_ADDRESS_LEN}'b{key};" + '\n' + f"in_word = {CPU_WORD_LEN}'b{dic[key]};" + '\n'

    return result


def binary2decimal_signed(num):
    if (num[0] == '1'):
        binary2decimal_signed(calculate_twos_complement(num, len(num)))
    else:
        res = 0
        for i in range(0, len(num)):
            if num[len(num)-i-1] != '0':
                res += 2**i
    return res
                

def decimal2binary_signed(num, n):
    if (num[0] == '-'):
        return calculate_twos_complement(decimal2binary_signed(num[1:], n))
    else:
        res = []
        numint = int(num)

        for i in range(n-1, -1, -1):
            if numint >= 2**i:
                numint -= 2**i
                res.append('1')
            else:
                res.append('0')

        return ''.join(res)            


def calculate_twos_complement(num):
    res = []
    i = 0
    
    for i in range(len(num)-1, -1, -1):
        res.insert(0, num[i])
        if num[i] == '1':
            break
    
    for j in range(i-1, -1, -1):
        res.insert(0, '0' if num[j] == '1' else '1')

    return "".join(res)

def isint(str):
    try:
        int(str)
    except:
        return False
    return True

if __name__ == "__main__":
   main(sys.argv[1:])



