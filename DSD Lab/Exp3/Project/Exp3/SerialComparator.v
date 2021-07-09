`timescale 1ns / 1ps

module SerialComparator(
    output gd,
    output ed,
    output ld,
    input clk,
    input resetBar,
    input a,
    input b
    );

wire gTmp0;
wire gTmp1;
wire gTmp2;
wire gTmp3;
wire gBar;
wire g;
assign gTmp3 = ~(resetBar & clk);
assign gTmp2 = ~(resetBar & ~(gTmp1 & ~(gd & gTmp0)));
assign gTmp1 = ~(~gTmp2 & gTmp3);
assign gTmp0 = ~(gTmp2 & gTmp3);
assign gBar = ~(gTmp0 & g);
assign g = ~(gTmp1 & gBar);

wire eTmp0;
wire eTmp1;
wire eTmp2;
wire eTmp3;
wire eBar;
wire e;
assign eTmp3 = ~(resetBar & clk);
assign eTmp2 = ~(resetBar & ~(eTmp1 & ~(ed & eTmp0)));
assign eTmp1 = ~(~eTmp2 & eTmp3);
assign eTmp0 = ~(eTmp2 & eTmp3);
assign eBar = ~(eTmp0 & e);
assign e = ~(eTmp1 & eBar);

wire lTmp0;
wire lTmp1;
wire lTmp2;
wire lTmp3;
wire lBar;
wire l;
assign lTmp3 = ~(resetBar & clk);
assign lTmp2 = ~(resetBar & ~(lTmp1 & ~(ld & lTmp0)));
assign lTmp1 = ~(~lTmp2 & lTmp3);
assign lTmp0 = ~(lTmp2 & lTmp3);
assign lBar = ~(lTmp0 & l);
assign l = ~(lTmp1 & lBar);

wire gCurrent;
wire eCurrent;
wire lCurrent;
assign gCurrent = a & ~b;
assign eCurrent = ~(a ^ b);
assign lCurrent = ~a & b;

assign gd = gCurrent | (eCurrent & g);
assign ed = ~gd & ~ld;
assign ld = lCurrent | (eCurrent & l);

endmodule
