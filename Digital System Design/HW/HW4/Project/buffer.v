module buffer(in, out);
	
	parameter N = 8;

	input [N-1:0] in;
	output reg [N-1:0] out;
	
	always @(in) out = in;
endmodule
