`timescale 1ns / 1ps

module MainTest;

	// Inputs
	reg clk;
	reg ent;
	reg exit;

	// Outputs
	wire in;
	wire out;
	wire open;
	wire close;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.clk(clk), 
		.ent(ent), 
		.exit(exit), 
		.in(in), 
		.out(out), 
		.open(open), 
		.close(close)
	);

	initial begin
		clk = 0;
		
		ent = 0;
		exit = 0;
		
		// members 0, there isn't anybody to exit
		#20;
		ent = 0;
		exit = 1;
		
		// members 0
		#20;
		ent = 0;
		exit = 0;
		
		// members 0
		#20;
		ent = 1;
		exit = 0;
		
		// members 1
		#20;
		ent = 0;
		exit = 0;
		
		// members 1
		#20;
		ent = 1;
		exit = 0;

		// members 2
		#20;
		ent = 0;
		exit = 0;

		// members 2
		#20;
		ent = 1;
		exit = 0;
		
		// members 3
		#20;
		ent = 0;
		exit = 0;

		// members 3
		#20;
		ent = 1;
		exit = 0;
		
		// members 4
		#20;
		ent = 0;
		exit = 0;

		// members 4
		#20;
		ent = 1;
		exit = 0;
		
		// members 5
		#20;
		ent = 0;
		exit = 0;

		// members 5
		#20;
		ent = 1;
		exit = 0;
		
		// members 6
		#20;
		ent = 0;
		exit = 0;
		
		// members 6
		#20;
		ent = 0;
		exit = 1;
		
		// members 5
		#20;
		ent = 0;
		exit = 0;
		
		// members 5
		#20;
		ent = 1;
		exit = 0;
		
		// members 6
		#20;
		ent = 0;
		exit = 0;
		
		// members 6
		#20;
		ent = 1;
		exit = 0;
		
		// members 7
		#20;
		ent = 0;
		exit = 0;
		
		// members 7
		#20;
		ent = 1;
		exit = 0;
		
		// members 8
		#20;
		ent = 0;
		exit = 0;
		
		// members 8
		#20;
		ent = 1;
		exit = 0;
		
		// members 9
		#20;
		ent = 0;
		exit = 0;
		
		// members 9
		#20;
		ent = 1;
		exit = 0;
		
		// members 10
		#20;
		ent = 0;
		exit = 0;
		
		// members 10, new person can't enter the room
		#20;
		ent = 1;
		exit = 0;
		
		// members 10
		#20;
		ent = 0;
		exit = 0;		
	end
      
	always clk = #20 ~clk;
endmodule

