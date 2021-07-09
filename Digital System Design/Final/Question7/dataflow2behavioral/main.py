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
    assign_pattern = 'assign\s*(?P<delay>#\d+)?\s*(?P<lhs>\w+)\s*=\s*(?P<rhs>[a-zA-Z0-9\[\]\(\)!~&|^\+\-\{\}*/%<>=\?:\s]+);'
    output_pattern = 'output (\w+)'
    inf = open(inputfile, 'r')
    verilog_code = inf.readlines()
    inf.close()
    outf = open(outputfile, 'w+')
    assignments_count = 0

    for line in verilog_code:
        match_assign = re.search(assign_pattern, line)
        match_output = re.search(output_pattern, line)
        if (match_assign):
            delay = match_assign.group('delay')
            rhs = match_assign.group('rhs')
            lhs = match_assign.group('lhs')
            outf.write(assign2always(delay, rhs, lhs))
            assignments_count += 1
        elif (match_output):
            output_wire = match_output.group(1)
            outf.write(line.replace('output', 'output reg', 1))
        else:
            outf.write(line)

    outf.close()

    return assignments_count
    

def assign2always(delay, rhs, lhs):
    print(delay)
    always_block = f'''
    always @ ({lhs}) begin
        {rhs} <= {'' if delay is None else delay+' '}{lhs};
    end\n\n'''
    return always_block


if __name__ == "__main__":
   main(sys.argv[1:])