`timescale 1ns / 1ps

module Main(
	input clk,
	input ent,
	input exit,
	output reg in,
	output reg out,
	output reg open,
	output reg close
	);
	
reg [3:0] members;
reg [1:0] waitOpen;
reg keepOpen;

initial begin
	members <= 4'b0;
	waitOpen <= 2'b0;
	keepOpen = 0;
end

always @(posedge clk) begin

	in = 0;
	out = 0;
	
	if (members == 0) begin
		close = 1;
	end
	else begin
		close = 0;
	end
	
	if (ent) begin
		if (members < 10) begin
			members <= members + 1;
			waitOpen <= waitOpen + 1;
			keepOpen = 1;
			open = 1;
		end
	end
	
	if (exit) begin
		if (!close) begin
			members <= members - 1;
			out = 1;
		end
	end
	
	if (keepOpen) begin
		waitOpen <= waitOpen + 1;
	end
	
	if (waitOpen == 3) begin
		keepOpen = 0;
		waitOpen <= 2'b0;
		open = 0;
		in = 1;
	end
end

endmodule
