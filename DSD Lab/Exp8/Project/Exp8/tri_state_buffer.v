`timescale 1ns / 1ps

module tri_state_buffer (s, in, out);

    // Width of in and out
    parameter Width = 8;

    input s;
    input [Width-1:0] in;
    output reg [Width-1:0] out;

    always @(s or in) begin
        if (s) begin
            out = in;
        end else begin
            out = {Width{1'bz}};
        end
    end
endmodule
