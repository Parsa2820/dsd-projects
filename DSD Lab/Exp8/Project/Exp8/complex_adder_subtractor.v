`timescale 1ns / 1ps

module complex_adder_subtractor(add_subtract_bar, areal, aimaginary, breal, bimaginary, resultreal, resultimaginary);

	parameter N = 8;

	input add_subtract_bar;
	input [N-1:0] areal;
	input [N-1:0] aimaginary;
	input [N-1:0] breal;
	input [N-1:0] bimaginary;
	output reg [N-1:0] resultreal;
	output reg [N-1:0] resultimaginary;

	always @ (add_subtract_bar, areal, aimaginary, breal, bimaginary) begin
		if (add_subtract_bar) begin
			resultreal = areal + breal;
			resultimaginary = aimaginary + bimaginary;
		end else begin
			resultreal = areal - breal;
			resultimaginary= aimaginary - bimaginary;
		end
	end
endmodule
