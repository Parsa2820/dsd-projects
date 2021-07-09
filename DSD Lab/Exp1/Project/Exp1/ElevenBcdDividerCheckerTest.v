`timescale 1ns / 1ps

module ElevenBcdDividerCheckerTest;

	// Inputs
	reg a3;
	reg a2;
	reg a1;
	reg a0;
	reg b3;
	reg b2;
	reg b1;
	reg b0;
	reg c3;
	reg c2;
	reg c1;
	reg c0;
	reg d3;
	reg d2;
	reg d1;
	reg d0;

	// Outputs
	wire isDivider;

	// Instantiate the Unit Under Test (UUT)
	ElevenBcdDividerChecker uut (
		.a3(a3), 
		.a2(a2), 
		.a1(a1), 
		.a0(a0), 
		.b3(b3), 
		.b2(b2), 
		.b1(b1), 
		.b0(b0), 
		.c3(c3), 
		.c2(c2), 
		.c1(c1), 
		.c0(c0), 
		.d3(d3), 
		.d2(d2), 
		.d1(d1), 
		.d0(d0), 
		.isDivider(isDivider)
	);

	initial begin
		//0
		a3 = 0;
		a2 = 0;
		a1 = 0;
		a0 = 0;
		b3 = 0;
		b2 = 0;
		b1 = 0;
		b0 = 0;
		c3 = 0;
		c2 = 0;
		c1 = 0;
		c0 = 0;
		d3 = 0;
		d2 = 0;
		d1 = 0;
		d0 = 0;

		//99
		#100
		a3 = 1;
		a2 = 0;
		a1 = 0;
		a0 = 1;
		b3 = 1;
		b2 = 0;
		b1 = 0;
		b0 = 1;
		c3 = 0;
		c2 = 0;
		c1 = 0;
		c0 = 0;
		d3 = 0;
		d2 = 0;
		d1 = 0;
		d0 = 0;
		
		//909
		#100
		a3 = 1;
		a2 = 0;
		a1 = 0;
		a0 = 1;
		b3 = 0;
		b2 = 0;
		b1 = 0;
		b0 = 0;
		c3 = 1;
		c2 = 0;
		c1 = 0;
		c0 = 1;
		d3 = 0;
		d2 = 0;
		d1 = 0;
		d0 = 0;
		
		//11
		#100
		a3 = 0;
		a2 = 0;
		a1 = 0;
		a0 = 1;
		b3 = 0;
		b2 = 0;
		b1 = 0;
		b0 = 1;
		c3 = 0;
		c2 = 0;
		c1 = 0;
		c0 = 0;
		d3 = 0;
		d2 = 0;
		d1 = 0;
		d0 = 0;
		
		#100;
      $finish;

	end
      
endmodule

