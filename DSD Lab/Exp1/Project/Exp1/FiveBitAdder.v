`timescale 1ns / 1ps

module FiveBitAdder(
    input a4,
    input a3,
    input a2,
    input a1,
    input a0,
    input b4,
    input b3,
    input b2,
    input b1,
    input b0,
    input m,
    output s4,
    output s3,
    output s2,
    output s1,
    output s0,
    output carryOut
    );

wire b0Prime;
xor(b0Prime, b0, m);
wire carryOut0;
FullAdder fa0(a0, b0Prime, m, s0, carryOut0);

wire b1Prime;
xor(b1Prime, b1, m);
wire carryOut1;
FullAdder fa1(a1, b1Prime, carryOut0, s1, carryOut1);

wire b2Prime;
xor(b2Prime, b2, m);
wire carryOut2;
FullAdder fa2(a2, b2Prime, carryOut1, s2, carryOut2);

wire b3Prime;
xor(b3Prime, b3, m);
wire carryOut3;
FullAdder fa3(a3, b3Prime, carryOut2, s3, carryOut3);

wire b4Prime;
xor(b4Prime, b4, m);
FullAdder fa4(a4, b4Prime, carryOut3, s4, carryOut);

endmodule
