`timescale 1ns / 1ps

module FullAdderTest;

	// Inputs
	reg a;
	reg b;
	reg carryIn;

	// Outputs
	wire sum;
	wire carryOut;

	// Instantiate the Unit Under Test (UUT)
	FullAdder uut (
		.a(a), 
		.b(b), 
		.carryIn(carryIn), 
		.sum(sum), 
		.carryOut(carryOut)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		carryIn = 0;

		#100;
		a = 1;
		b = 0;
		carryIn = 0;
		
		#100
		a = 0;
		b = 1;
		carryIn = 0;
		
		#100
		a = 1;
		b = 1;
		carryIn = 0;
		
		#100
		a = 0;
		b = 0;
		carryIn = 1;
		
		#100
		a = 1;
		b = 0;
		carryIn = 1;
		
		#100
		a = 0;
		b = 1;
		carryIn = 1;
		
		#100
		a = 1;
		b = 1;
		carryIn = 1;
		
		#100
		$finish;
	end
      
endmodule

