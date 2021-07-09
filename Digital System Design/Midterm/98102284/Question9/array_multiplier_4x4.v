module fa(a, b, c, s, cout);
    input a, b, c;
    output s, cout;
    wire a1, a2, a3;
    xor g1(a1,a,b);
    and g2(a2,a,b);
    and g3(a3,a1,c);
    or g4(cout,a2,a3);
    xor g5(s,a1,c); 
endmodule

module part(a, b, c, cin, s, cout);
    input a, b, c, cin;
    output cout, s;
    wire w;
    and g0(w, a, b);
    fa fa0(w, c, cin, s, cout);
endmodule

module array_multiplier_4x4(a, b, ans);
    input[3:0] a;
    input[3:0] b;
    output[7:0] ans;

    wire cout00, cout01, s01, cout02, s02, cout03, s03, cout10, cout11, s11, cout12, s12, cout13, s13, cout20, cout21, s21, cout22, s22, cout23, s23, cout30, cout31, cout32, cout33;

	part p00(a[0], b[0], 0, 0, ans[0], cout00);
	part p01(a[1], b[0], 0, 0, s01, cout01);
	part p02(a[2], b[0], 0, 0, s02, cout02);
	part p03(a[3], b[0], 0, 0, s03, cout03);

	part p10(a[0], b[1], s01, 0, ans[1], cout10);
	part p11(a[1], b[1], s02, cout10, s11, cout11);
	part p12(a[2], b[1], s03, cout11, s12, cout12);
	part p13(a[3], b[1], 0, cout12, s13, cout13);

	part p20(a[0], b[2], s11, 0, ans[2], cout20);
	part p21(a[1], b[2], s12, cout20, s21, cout21);
	part p22(a[2], b[2], s13, cout21, s22, cout22);
	part p23(a[3], b[2], cout13, cout22, s23, cout23);

	part p30(a[0], b[3], s21, 0, ans[3], cout30);
	part p31(a[1], b[3], s22, cout30, ans[4], cout31);
	part p32(a[2], b[3], s23, cout31, ans[5], cout32);
	part p33(a[3], b[3], cout23, cout32, ans[6], ans[7]);


endmodule

