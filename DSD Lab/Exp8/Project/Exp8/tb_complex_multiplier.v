`timescale 1ns / 1ps

module tb_complex_multiplier;

	// Inputs
	reg [7:0] areal;
	reg [7:0] aimaginary;
	reg [7:0] breal;
	reg [7:0] bimaginary;

	// Outputs
	wire [15:0] resultreal;
	wire [15:0] resultimaginary;

	// Instantiate the Unit Under Test (UUT)
	complex_multiplier uut (
		.areal(areal), 
		.aimaginary(aimaginary), 
		.breal(breal), 
		.bimaginary(bimaginary), 
		.resultreal(resultreal), 
		.resultimaginary(resultimaginary)
	);

	initial begin
		areal = 0;
		aimaginary = 0;
		breal = 0;
		bimaginary = 0;

		#100
		
		areal = 10;
		aimaginary = 20;
		breal = 30;
		bimaginary = 40;
		
		#100
		
		$finish;
  	end
      
endmodule

