`timescale 1ns / 1ps

module FullAdder(
    input a,
    input b,
    input carryIn,
    output sum,
    output carryOut
    );

wire firstCarry;
wire firstSum;
HalfAdder hf1(a, b, firstSum, firstCarry);
wire secondCarry;
HalfAdder hf2(carryIn, firstSum, sum, secondCarry);
or(carryOut, firstCarry, secondCarry);

endmodule
