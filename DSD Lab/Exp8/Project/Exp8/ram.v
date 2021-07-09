`timescale 1ns / 1ps

module ram(w, waddr, wdata, raddr, rdata);

	parameter N = 8; // word len

	input w;
	input [4:0] waddr;
	input [N-1:0] wdata;
	input [4:0] raddr;
	output [N-1:0] rdata;
	
	reg [N-1:0] mem [0:31];

	always @ (w, waddr, wdata) begin
		if (w) begin
			mem[waddr] = wdata;
		end
	end
	
	assign rdata = mem[raddr];

endmodule
