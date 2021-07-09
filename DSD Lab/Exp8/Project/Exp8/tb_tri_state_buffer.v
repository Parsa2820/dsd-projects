`timescale 1ns / 1ps

module tb_tri_state_buffer;

	// Inputs
	reg s;
	reg [7:0] in;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	tri_state_buffer uut (
		.s(s), 
		.in(in), 
		.out(out)
	);

	initial begin
		s = 0;
		in = 0;
		
		#100;
		
		s = 1;
		
		#100
		
		in = 4;
		
		#100
		
		s = 0;
		
		#100
		
		in = 5;
		
		#100
		
		$finish;
        
	end
      
endmodule

