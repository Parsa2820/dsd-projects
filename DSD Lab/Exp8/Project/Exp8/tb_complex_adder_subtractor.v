`timescale 1ns / 1ps

module tb_complex_adder_subtractor;

	// Inputs
	reg add_subtract_bar;
	reg [7:0] areal;
	reg [7:0] aimaginary;
	reg [7:0] breal;
	reg [7:0] bimaginary;

	// Outputs
	wire [7:0] resultreal;
	wire [7:0] resultimaginary;

	// Instantiate the Unit Under Test (UUT)
	complex_adder_subtractor uut (
		.add_subtract_bar(add_subtract_bar), 
		.areal(areal), 
		.aimaginary(aimaginary), 
		.breal(breal), 
		.bimaginary(bimaginary), 
		.resultreal(resultreal), 
		.resultimaginary(resultimaginary)
	);

	initial begin
		add_subtract_bar = 0;
		areal = 0;
		aimaginary = 0;
		breal = 0;
		bimaginary = 0;

		#100
		
		add_subtract_bar = 0;
		areal = 10;
		aimaginary = 20;
		breal = 30;
		bimaginary = 40;
		
		#100
		
		add_subtract_bar = 1;
		areal = 10;
		aimaginary = 20;
		breal = 30;
		bimaginary = 40;
		
		#100
		$finish;
	end
      
endmodule

