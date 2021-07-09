`timescale 1ns / 1ps

module SerialComparatorTest;

	// Inputs
	reg clk;
	reg resetBar;
	reg a;
	reg b;

	// Outputs
	wire gd;
	wire ed;
	wire ld;

	// Instantiate the Unit Under Test (UUT)
	SerialComparator uut (
		.gd(gd), 
		.ed(ed), 
		.ld(ld), 
		.clk(clk), 
		.resetBar(resetBar), 
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		
		// Reset
		#20;
		resetBar = 0;
		#20;
		resetBar = 1;
		
		// 1010 < 1110
		#20;
		a = 0;
		b = 0;
		
		#20;
		a = 1;
		b = 1;
		
		#20;
		a = 0;
		b = 1;
		
		#20;
		a = 1;
		b = 1;
		
		// Reset
		#20;
		resetBar = 0;
		#20;
		resetBar = 1;
		
		// 1111 > 1110
		#20;
		a = 1;
		b = 0;
		
		#20;
		a = 1;
		b = 1;
		
		#20;
		a = 1;
		b = 1;
		
		#20;
		a = 1;
		b = 1;
		
		// Reset
		#20;
		resetBar = 0;
		#20;
		resetBar = 1;
		
		// 1011 = 1011
		#20;
		a = 1;
		b = 1;
		
		#20;
		a = 0;
		b = 0;
		
		#20;
		a = 1;
		b = 1;
		
		#20;
		a = 1;
		b = 1;
		
		// Reset
		#20;
		resetBar = 0;
		#20;
		resetBar = 1;
		
		// 10011001 > 01111111
		#20;
		a = 1;
		b = 1;
		
		#20;
		a = 0;
		b = 1;
		
		#20;
		a = 0;
		b = 1;
		
		#20;
		a = 1;
		b = 1;
		
		#20;
		a = 1;
		b = 1;
		
		#20;
		a = 0;
		b = 1;
		
		#20;
		a = 0;
		b = 1;
		
		#20;
		a = 1;
		b = 0;

		#60;
		$finish;
	end
	
	always clk = #20 ~clk;
      
endmodule

