`timescale 1ns / 1ps

module SixBitEqual(
	 input a5,
    input a4,
    input a3,
    input a2,
    input a1,
    input a0,
	 input b5,
    input b4,
    input b3,
    input b2,
    input b1,
    input b0,
	 output equal
    );

wire check5, check4, check3, check2, check1, check0;
xnor(check5, a5, b5);
xnor(check4, a4, b4);
xnor(check3, a3, b3);
xnor(check2, a2, b2);
xnor(check1, a1, b1);
xnor(check0, a0, b0);
and(equal, check5, check4, check3, check2, check1, check0);

endmodule
