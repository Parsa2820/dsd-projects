`timescale 1ns / 1ps

module OneBitComparator(
    output g,
    output e,
    output l,
    input a,
    input b
    );

assign g = a & ~b;
assign e = ~(a ^ b);
assign l = ~a & b;

endmodule
