`timescale 1ns / 1ps

module FourBitComparatorTest;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire g;
	wire e;
	wire l;

	// Instantiate the Unit Under Test (UUT)
	FourBitComparator uut (
		.g(g), 
		.e(e), 
		.l(l), 
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		a = 4'b0000;
		b = 4'b1000;

		#100;
		a = 4'b0000;
		b = 4'b0100;

		#100;
		a = 4'b0000;
		b = 4'b0010;

		#100;
		a = 4'b0000;
		b = 4'b0001;
		
		#100;
		a = 4'b1000;
		b = 4'b0000;
		
		#100;
		a = 4'b1010;
		b = 4'b1010;
	
		#100;
      $finish;

	end
      
endmodule

