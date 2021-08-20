from sre_constants import GROUPREF
import sys, getopt
import re

def main(argv):
    synopsis = 'main.py -i <inputfile> -o <outputfile>'
    inputfile = ''
    outputfile = ''

    try:
        opts, args = getopt.getopt(argv,"hi:o:",["help", "input=", "output="])
    except getopt.GetoptError:
        print (synopsis)
        sys.exit(2)
    
    for opt, arg in opts:
        if opt in ("-h", "--help"):
            print (synopsis)
            sys.exit()
        elif opt in ("-i", "--input"):
            inputfile = arg
        elif opt in ("-o", "--output"):
            outputfile = arg
    
    count = dataflow2behavioral(inputfile, outputfile)
    print(f'{count} assign statements converted.\n')


def dataflow2behavioral(inputfile, outputfile):
    implicit_assign_pattern = 'wire\s*(?P<delay>#\d+)?\s*(?P<size>\[\d+:\d+\])?\s*(?P<name>\w+)\s*=\s*(?P<rhs>[a-zA-Z0-9\[\]\(\)!~&|^\+\-\{\}*/%<>=\?:\s]+);'
    assign_pattern = 'assign\s*(?P<delay>#\d+)?\s*(?P<lhs>[\w\[\]{},:]+)\s*=\s*(?P<rhs>[a-zA-Z0-9\[\]\(\)!~&|^\+\-\{\}*/%<>=\?:\s,]+);'
    output_pattern = 'output\s*(?P<size>\[\d+:\d+\])?\s*(?P<name>\w+)'
    net_pattern = 'wire\s*(?P<size>\[\d+:\d+\])?\s*(?P<name>\w+)'

    inf = open(inputfile, 'r')
    verilog_code = inf.read()
    inf.close()

    assignments_count = 0

    match_implicit_assigns = re.finditer(implicit_assign_pattern, verilog_code)

    # this loop is for implicit assign to explicit conversion
    for match_implicit_assign in match_implicit_assigns:
        size = match_implicit_assign.group('size')
        name = match_implicit_assign.group('name')
        delay = match_implicit_assign.group('delay')
        rhs = match_implicit_assign.group('rhs')
        explicit_assign = implicit2explicit_assign(size, name, delay, rhs)
        verilog_code = verilog_code.replace(match_implicit_assign.group(0), explicit_assign)
        
    match_assigns = re.finditer(assign_pattern, verilog_code)

    # this loop is for assign statements
    for match_assign in match_assigns:
        delay = match_assign.group('delay')
        rhs = match_assign.group('rhs')
        lhs = match_assign.group('lhs')
        always_block = assign2always(delay, rhs, lhs)
        verilog_code = verilog_code.replace(match_assign.group(0), always_block)
        assignments_count += 1

    match_outputs = re.finditer(output_pattern, verilog_code)

    # this loop is for output to reg conversion
    for match_output in match_outputs:
        size = match_output.group('size')
        name = match_output.group('name')
        verilog_code = verilog_code.replace(match_output.group(0), output2outputreg(size, name))

    match_nets = re.finditer(net_pattern, verilog_code)

    # this loop is for net to reg conversion
    for match_net in match_nets:
        size = match_net.group('size')
        name = match_net.group('name')
        verilog_code = verilog_code.replace(match_net.group(0), wire2reg(size, name))
        
    outf = open(outputfile, 'w+')
    outf.write(verilog_code)
    outf.close()

    return assignments_count
    

def implicit2explicit_assign(size, name, delay, rhs):
    explicit_assignment = f'''
    wire {"" if size is None else size+" "}{name};
    assign {'' if delay is None else delay+' '}{name} = {rhs};
    '''
    return explicit_assignment


def assign2always(delay, rhs, lhs):
    always_block = f'''
    always @ ({rhs}) begin
        {lhs} <= {'' if delay is None else delay+' '}{rhs};
    end\n\n'''
    return always_block


def output2outputreg(size, name):
    return f'output reg {"" if size is None else size+" "}{name}'


def wire2reg(size, name):
    return f'reg {"" if size is None else size+" "}{name}'


if __name__ == "__main__":
   main(sys.argv[1:])