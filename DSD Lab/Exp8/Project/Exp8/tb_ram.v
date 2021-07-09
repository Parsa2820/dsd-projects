`timescale 1ns / 1ps

module tb_ram;

	// Inputs
	reg w;
	reg [4:0] waddr;
	reg [7:0] wdata;
	reg [4:0] raddr;

	// Outputs
	wire [7:0] rdata;

	// Instantiate the Unit Under Test (UUT)
	ram uut (
		.w(w), 
		.waddr(waddr), 
		.wdata(wdata), 
		.raddr(raddr), 
		.rdata(rdata)
	);

	initial begin
		w = 1;
		waddr = 0;
		wdata = 10;
		raddr = 0;

		#100;
		
		w = 1;
		waddr = 1;
		wdata = 20;
		raddr = 0;

		#100;
		
		w = 1;
		waddr = 2;
		wdata = 30;
		raddr = 0;

		#100;
		
		w = 0;
		waddr = 0;
		wdata = 0;
		raddr = 0;

		#100;

		w = 0;
		waddr = 0;
		wdata = 0;
		raddr = 1;

		#100;
		
		w = 0;
		waddr = 0;
		wdata = 0;
		raddr = 2;

		#100;
		
		w = 0;
		waddr = 0;
		wdata = 0;
		raddr = 3;

		#100;
		$finish;
	end
      
endmodule

