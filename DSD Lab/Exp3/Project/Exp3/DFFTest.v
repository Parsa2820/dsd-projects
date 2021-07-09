`timescale 1ns / 1ps

module DFFTest;

	// Inputs
	reg d;
	reg clk;
	reg resetBar;

	// Outputs
	wire q;
	wire qBar;

	// Instantiate the Unit Under Test (UUT)
	DFF uut (
		.q(q), 
		.qBar(qBar), 
		.d(d), 
		.clk(clk), 
		.resetBar(resetBar)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		clk = 0;
		resetBar = 0;
		
		#20;
		resetBar = 1;
		
		#20;
		d = 1;
		
		#20;
		
		#20;
		d = 0;
		
		#20;
		
		#20;
		resetBar = 0;

		#20;
		$finish;
	end
   
	always clk = #20 ~clk;
	
endmodule

