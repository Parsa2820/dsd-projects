`timescale 1ns / 1ps

module ThreeBcdDividerChecker(
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
FiveBitAdder fba0(0, a3, a2, a1, a0, 0, b3, b2, b1, b0, 0, s04, s03, s02, s01, s00, carryOut0);

wire s10, s11, s12, s13, s14;
wire carryOut1;
FiveBitAdder fba1(0, c3, c2, c1, c0, 0, d3, d2, d1, d0, 0, s14, s13, s12, s11, s10, carryOut1);

wire s20, s21, s22, s23, s24;
wire carryOut2;
FiveBitAdder fba2(s04, s03, s02, s01, s00, s14, s13, s12, s11, s10, 0, s24, s23, s22, s21, s20, carryOut2);

wire is0, is3, is6, is9, is12, is15, is18, is21, is24, is27, is30, is33, is36;
SixBitEqual sbe0(carryOut2, s24, s23, s22, s21, s20, 0, 0, 0, 0, 0, 0, is0);
SixBitEqual sbe1(carryOut2, s24, s23, s22, s21, s20, 0, 0, 0, 0, 1, 1, is3);
SixBitEqual sbe2(carryOut2, s24, s23, s22, s21, s20, 0, 0, 0, 1, 1, 0, is6);
SixBitEqual sbe3(carryOut2, s24, s23, s22, s21, s20, 0, 0, 1, 0, 0, 1, is9);
SixBitEqual sbe4(carryOut2, s24, s23, s22, s21, s20, 0, 0, 1, 1, 0, 0, is12);
SixBitEqual sbe5(carryOut2, s24, s23, s22, s21, s20, 0, 0, 1, 1, 1, 1, is15);
SixBitEqual sbe6(carryOut2, s24, s23, s22, s21, s20, 0, 1, 0, 0, 1, 0, is18);
SixBitEqual sbe7(carryOut2, s24, s23, s22, s21, s20, 0, 1, 0, 1, 0, 1, is21);
SixBitEqual sbe8(carryOut2, s24, s23, s22, s21, s20, 0, 1, 1, 0, 0, 0, is24);
SixBitEqual sbe9(carryOut2, s24, s23, s22, s21, s20, 0, 1, 1, 0, 1, 1, is27);
SixBitEqual sbe10(carryOut2, s24, s23, s22, s21, s20, 0, 1, 1, 1, 1, 0, is30);
SixBitEqual sbe11(carryOut2, s24, s23, s22, s21, s20, 1, 0, 0, 0, 0, 1, is33);
SixBitEqual sbe12(carryOut2, s24, s23, s22, s21, s20, 1, 0, 0, 1, 0, 0, is36);

or(isDivider, is0, is3, is6, is9, is12, is15, is18, is21, is24, is27, is30, is33, is36);

endmodule
