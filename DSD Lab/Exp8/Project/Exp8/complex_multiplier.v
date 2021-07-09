`timescale 1ns / 1ps

module complex_multiplier(areal, aimaginary, breal, bimaginary, resultreal, resultimaginary);

	parameter N = 8;

	input [N-1:0] areal;
	input [N-1:0] aimaginary;
	input [N-1:0] breal;
	input [N-1:0] bimaginary;
	output reg signed [2*N-1:0] resultreal;
	output reg signed [2*N-1:0] resultimaginary;
	
	always @ (areal, aimaginary, breal, bimaginary) begin
		resultreal = areal*breal - aimaginary*bimaginary;
		resultimaginary = areal*bimaginary + breal*aimaginary;
	end

endmodule
