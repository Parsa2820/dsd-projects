`timescale 1ns / 1ps

`define X 8'd8

module program;

	// Inputs
	reg clk;
	reg en;
	reg mem_load;
	reg [7:0] mem_data;
	reg [7:0] mem_address;

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.clk(clk), 
		.en(en), 
		.mem_load(mem_load), 
		.mem_data(mem_data), 
		.mem_address(mem_address)
	);

	initial begin
		mem_load = 1;
		mem_address = 0;
		mem_data = 8'b0000_0000; // PUSHC
		#5
		mem_address = 1;
		mem_data = 8'd23; // 23
		#5
		mem_address = 2;
		mem_data = 8'b0000_0000; // PUSHC
		#5
		mem_address = 3;
		mem_data = `X; // X
		#5
		mem_address = 4;
		mem_data = 8'b0110_0000; // ADD
		#5
		mem_address = 5;
		mem_data = 8'b0010_0000; // POP
		#5
		mem_address = 6;
		mem_data = 8'd21; // FREE FOR DATA MEM ADDRESS
		#5
		mem_address = 7;
		mem_data = 8'b0001_0000; // PUSHM
		#5
		mem_address = 8;
		mem_data = 8'd21; // FREE FOR DATA MEM ADDRESS
		#5
		mem_address = 9;
		mem_data = 8'b0001_0000; // PUSHM
		#5
		mem_address = 10;
		mem_data = 8'd21; // FREE FOR DATA MEM ADDRESS
		#5
		mem_address = 11;
		mem_data = 8'b0110_0000; // ADD
		#5
		mem_address = 12;
		mem_data = 8'b0000_0000; // PUSHC
		#5
		mem_address = 13;
		mem_data = 8'd12; // 12
		#5
		mem_address = 14;
		mem_data = 8'b0111_0000; // SUB
		#5
		mem_address = 15;
		mem_data = 8'b0000_0000; // PUSHC
		#5
		mem_address = 16;
		mem_data = 8'd15; // PREVIOUS INSTRUCTION ADDRESS
		#5
		mem_address = 17;
		mem_data = 8'b0011_0000; // HALT
		#5
		mem_load = 0;
		clk = 0;
		en = 1;
		#100
		$finish;
	end
	
	always #5 clk = ~clk;
      
endmodule

