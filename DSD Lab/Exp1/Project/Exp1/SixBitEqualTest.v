`timescale 1ns / 1ps

module SixBitEqualTest;

	// Inputs
	reg a5;
	reg a4;
	reg a3;
	reg a2;
	reg a1;
	reg a0;
	reg b5;
	reg b4;
	reg b3;
	reg b2;
	reg b1;
	reg b0;

	// Outputs
	wire equal;

	// Instantiate the Unit Under Test (UUT)
	SixBitEqual uut (
		.a5(a5), 
		.a4(a4), 
		.a3(a3), 
		.a2(a2), 
		.a1(a1), 
		.a0(a0), 
		.b5(b5), 
		.b4(b4), 
		.b3(b3), 
		.b2(b2), 
		.b1(b1), 
		.b0(b0), 
		.equal(equal)
	);

	initial begin
		// Initialize Inputs
		a5 = 0;
		a4 = 0;
		a3 = 0;
		a2 = 0;
		a1 = 0;
		a0 = 0;
		b5 = 0;
		b4 = 0;
		b3 = 0;
		b2 = 0;
		b1 = 0;
		b0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		  
		a5 = 1;
		a4 = 0;
		a3 = 0;
		a2 = 0;
		a1 = 0;
		a0 = 0;
		b5 = 0;
		b4 = 0;
		b3 = 0;
		b2 = 0;
		b1 = 0;
		b0 = 0;
		
		#100
		
		$finish;
		// Add stimulus here

	end
      
endmodule

