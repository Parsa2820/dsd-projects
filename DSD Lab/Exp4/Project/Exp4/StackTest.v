`timescale 1ns / 1ps

module StackTest;

	// Inputs
	reg Clk;
	reg RstN;
	reg [3:0] Data_In;
	reg Push;
	reg Pop;

	// Outputs
	wire [3:0] Data_Out;
	wire Full;
	wire Empty;

	// Instantiate the Unit Under Test (UUT)
	Stack uut (
		.Data_Out(Data_Out), 
		.Full(Full), 
		.Empty(Empty), 
		.Clk(Clk), 
		.RstN(RstN), 
		.Data_In(Data_In), 
		.Push(Push), 
		.Pop(Pop)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		RstN = 0;
		Data_In = 0;
		Push = 0;
		Pop = 0;

		#45;
		Data_In = 4;
		Push = 1;
		Pop = 0;
		
		#50;
		Data_In = 6;
		Push = 1;
		Pop = 0;
		
		#50;
		Data_In = 8;
		Push = 1;
		Pop = 0;		

		#50;
		Data_In = 10;
		Push = 1;
		Pop = 0;		
		
		#50;
		Data_In = 12;
		Push = 1;
		Pop = 0;		
		
		#50;
		Data_In = 14;
		Push = 1;
		Pop = 0;		
		
		#50;
		Data_In = 1;
		Push = 1;
		Pop = 0;		
		
		#50;
		Data_In = 2;
		Push = 1;
		Pop = 0;
		
		#50;
		Data_In = 0;
		Push = 0;
		Pop = 1;
		
		#50;
		Data_In = 0;
		Push = 0;
		Pop = 1;

		#50;
		Data_In = 0;
		Push = 0;
		Pop = 1;
		
		#50;
		Data_In = 0;
		Push = 0;
		Pop = 1;
		
		#50;
		Data_In = 0;
		Push = 0;
		Pop = 1;
		
		#50;
		Data_In = 0;
		Push = 0;
		Pop = 1;
		
		#50;
		RstN = 1;
		Pop = 0;
		#10;
		RstN = 0;
		
		#50;
		Data_In = 9;
		Push = 1;
		Pop = 0;
		
		#50;
		Data_In = 0;
		Push = 0;
		Pop = 1;
		
		#50;
		$finish;
	end
	
	always #25 Clk = ~Clk;
      
endmodule

