`timescale 1ns / 1ps

module Stimulus;

	// Inputs
	reg [3:0] multiplicand;
	reg [3:0] multiplier;
	reg start;
	reg clk;

	// Outputs
	wire in_process;
	wire finish;
	wire [7:0] result;

	// Instantiate the Unit Under Test (UUT)
	Multiplier uut (
		.multiplicand(multiplicand), 
		.multiplier(multiplier), 
		.start(start), 
		.clk(clk), 
		.in_process(in_process), 
		.finish(finish), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		multiplicand = 0;
		multiplier = 0;
		start = 0;
		clk = 0;
		
		#20
		multiplicand = 2;
		multiplier = 4;
		start = 1;
		
		#20
		start = 0;
		
		#100;
		multiplicand = 7;
		multiplier = 7;
		start = 1;
		
		#20
		start = 0;
		
		#100
		multiplicand = 6;
		multiplier = 5;
		start = 1;
		
		#20
		start = 0;

		#100
		$finish;

	end
	
	always #10 clk = ~clk;
      
endmodule

