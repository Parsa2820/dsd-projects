`timescale 1ns / 1ps

module ElevenBcdDividerChecker(
    input a3,
    input a2,
    input a1,
    input a0,
    input b3,
    input b2,
    input b1,
    input b0,
    input c3,
    input c2,
    input c1,
    input c0,
    input d3,
    input d2,
    input d1,
    input d0,
    output isDivider
    );
	 
wire s00, s01, s02, s03, s04;
wire carryOut0;
FiveBitAdder fba1(0, b3, b2, b1, b0, 0, d3, d2, d1, d0, 0, s04, s03, s02, s01, s00, carryOut0);	 

wire s10, s11, s12, s13, s14;
wire carryOut1;
FiveBitAdder fba0(0, a3, a2, a1, a0, 0, c3, c2, c1, c0, 0, s14, s13, s12, s11, s10, carryOut1);

wire s20, s21, s22, s23, s24;
wire carryOut2;
FiveBitAdder fba2(s04, s03, s02, s01, s00, s14, s13, s12, s11, s10, 1, s24, s23, s22, s21, s20, carryOut2);

wire is0, is11, isMinus11;
SixBitEqual sbe0(0, s24, s23, s22, s21, s20, 0, 0, 0, 0, 0, 0, is0);
SixBitEqual sbe1(0, s24, s23, s22, s21, s20, 0, 0, 1, 0, 1, 1, is11);
SixBitEqual sbe2(0, s24, s23, s22, s21, s20, 0, 1, 0, 1, 0, 1, isMinus11);

or(isDivider, is0, is11, isMinus11);

endmodule
