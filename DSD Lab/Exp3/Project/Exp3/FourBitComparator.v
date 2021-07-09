`timescale 1ns / 1ps

module FourBitComparator(
    output g,
    output e,
    output l,
    input [3:0] a,
    input [3:0] b
    );

wire [3:0] gs;
wire [3:0] es;
wire [3:0] ls;

OneBitComparator obc0(gs[0], es[0], ls[0], a[0], b[0]);
OneBitComparator obc1(gs[1], es[1], ls[1], a[1], b[1]);
OneBitComparator obc2(gs[2], es[2], ls[2], a[2], b[2]);
OneBitComparator obc3(gs[3], es[3], ls[3], a[3], b[3]);

assign g = (gs[0] & es[1] & es[2] & es[3]) | (gs[1] & es[2] & es[3]) | (gs[2] & es[3]) | gs[3];
assign e = es[0] & es[1] & es[2] & es[3];
assign l = ~g & ~e;

endmodule
