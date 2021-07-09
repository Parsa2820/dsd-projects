import os

print('enter multiplier dimensions(eg. 4x4): ', end='')

line = input().split('x')
n = int(line[0])
m = int(line[1])
module_name = f'array_multiplier_{n}x{m}'
multiplier_file = open(f'{module_name}.v', 'w+')

fa_module = '''module fa(a, b, c, s, cout);
    input a, b, c;
    output s, cout;
    wire a1, a2, a3;
    xor g1(a1,a,b);
    and g2(a2,a,b);
    and g3(a3,a1,c);
    or g4(cout,a2,a3);
    xor g5(s,a1,c); 
endmodule\n
'''

multiplier_file.write(fa_module)

part_module = '''module part(a, b, c, cin, s, cout);
    input a, b, c, cin;
    output cout, s;
    wire w;
    and g0(w, a, b);
    fa fa0(w, c, cin, s, cout);
endmodule\n
'''

multiplier_file.write(part_module)

net_list = []
structure = ''

for i in range(0, n):
    for j in range(0, m):
        c = ''
        cin = ''
        s = ''
        cout = f'cout{i}{j}'
        net_list.append(cout)

        if i == 0:
            c = '0'
            cin = '0'
        elif j == 0:
            c = f's{i-1}{j+1}'
            cin = '0'
        elif j == m-1:
            if i == 1:
                c = '0'
            else:
                c = f'cout{i-1}{m-1}'
            cin = f'cout{i}{j-1}'
        else:
            c = f's{i-1}{j+1}'
            cin = f'cout{i}{j-1}'

        if i == n-1:
            s = f'ans[{n+j-1}]'
            if j == m-1:
                cout = f'ans[{n+m-1}]'
        elif j == 0:
            s = f'ans[{i}]'
        else:
            s = f's{i}{j}'
            net_list.append(s)

        structure += f'\tpart p{i}{j}(a[{j}], b[{i}], {c}, {cin}, {s}, {cout});\n'
    structure += '\n'


multiplier_code = f'''module {module_name}(a, b, ans);
    input[{n-1}:0] a;
    input[{m-1}:0] b;
    output[{m+n-1}:0] ans;

    wire {', '.join(net_list)};

{structure}
endmodule\n
'''

multiplier_file.write(multiplier_code)
multiplier_file.close()

print(f'{module_name}.v successfully generated')
