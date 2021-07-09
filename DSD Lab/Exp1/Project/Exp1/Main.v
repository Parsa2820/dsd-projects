`timescale 1ns / 1ps

module Main(
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
    output result
    );

wire threeResult;
ThreeBcdDividerChecker tbdc(a3, a2, a1, a0, b3, b2, b1, b0, c3, c2, c1, c0, d3, d2, d1, d0, threeResult);
wire elevenResult;
ElevenBcdDividerChecker ebdc(a3, a2, a1, a0, b3, b2, b1, b0, c3, c2, c1, c0, d3, d2, d1, d0, elevenResult);
or(result, threeResult, elevenResult);

endmodule
