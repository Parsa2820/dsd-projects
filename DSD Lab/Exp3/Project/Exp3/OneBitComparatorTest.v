`timescale 1ns / 1ps

module OneBitComparatorTest;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire g;
	wire e;
	wire l;

	// Instantiate the Unit Under Test (UUT)
	OneBitComparator uut (
		.g(g), 
		.e(e), 
		.l(l), 
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		#100;
		a = 1;
		b = 0;
		
		#100;
		a = 0;
		b = 1;
		
		#100;
		a = 1;
		b = 1;

		#100;
		$finish;

	end
      
endmodule

