`timescale 1ns / 1ps

module computer;
	
	localparam WORD_SIZE = 8;
	localparam ADDRESS_SIZE = 5;

	reg clk;
	reg en;
	reg reset;
	wire ram_w;
	wire [ADDRESS_SIZE-1:0] ram_waddr;
	wire [WORD_SIZE-1:0] ram_wdata;
	wire [ADDRESS_SIZE-1:0] ram_raddr;
	wire [WORD_SIZE-1:0] ram_rdata;
	
	ram ram0 (
		.w(ram_w),
		.waddr(ram_waddr), 
		.wdata(ram_wdata), 
		.raddr(ram_raddr), 
		.rdata(ram_rdata)
	);

	wire ram_w_cpu;
	wire [ADDRESS_SIZE-1:0] ram_waddr_cpu;
	wire [WORD_SIZE-1:0] ram_wdata_cpu;
	wire [ADDRESS_SIZE-1:0] ram_raddr_cpu;

	cpu cpu0 (
		.clk(clk), 
		.en(en), 
		.reset(reset),
		.ram_w(ram_w_cpu), 
		.ram_waddr(ram_waddr_cpu), 
		.ram_wdata(ram_wdata_cpu), 
		.ram_raddr(ram_raddr_cpu), 
		.ram_rdata(ram_rdata)
	);
	
	reg ram_direct;
	reg ram_w_direct;
	reg [ADDRESS_SIZE-1:0] ram_waddr_direct;
	reg [WORD_SIZE-1:0] ram_wdata_direct;
	reg [ADDRESS_SIZE-1:0] ram_raddr_direct;
	

	tri_state_buffer tsb0(ram_direct, ram_waddr_direct, ram_waddr);
	tri_state_buffer tsb1(ram_direct, ram_wdata_direct, ram_wdata);
	tri_state_buffer tsb2(ram_direct, ram_raddr_direct, ram_raddr);
	tri_state_buffer tsb4(ram_direct, ram_w_direct, ram_w);

	defparam tsb0.Width = ADDRESS_SIZE;
	defparam tsb1.Width = WORD_SIZE;
	defparam tsb2.Width = ADDRESS_SIZE;
	defparam tsb4.Width = 1;
	
	wire ram_cpu;
	
	not(ram_cpu, ram_direct);

	tri_state_buffer tsb5(ram_cpu, ram_waddr_cpu, ram_waddr);
	tri_state_buffer tsb6(ram_cpu, ram_wdata_cpu, ram_wdata);
	tri_state_buffer tsb7(ram_cpu, ram_raddr_cpu, ram_raddr);
	tri_state_buffer tsb9(ram_cpu, ram_w_cpu, ram_w);

	defparam tsb5.Width = ADDRESS_SIZE;
	defparam tsb6.Width = WORD_SIZE;
	defparam tsb7.Width = ADDRESS_SIZE;
	defparam tsb9.Width = 1;
	
	initial begin
		ram_direct = 0;
		clk = 0;
		en = 0;
		#10
		ram_direct = 1;
		ram_waddr_direct = 0;
		ram_wdata_direct = 8'b000_01010;
		ram_w_direct = 1;
		#10
		ram_waddr_direct = 1;
		ram_wdata_direct = 8'b000_10100;
		#10
		ram_waddr_direct = 2;
		ram_wdata_direct = 8'b010_00000;
		#10
		ram_waddr_direct = 3;
		ram_wdata_direct = 8'b100_00000;
		#10
		ram_waddr_direct = 10;
		ram_wdata_direct = 3;
		#10
		ram_waddr_direct = 11;
		ram_wdata_direct = 7;
		#10
		ram_waddr_direct = 20;
		ram_wdata_direct = 4;
		#10
		ram_waddr_direct = 21;
		ram_wdata_direct = 6;
		#10
		ram_direct = 0;
		reset = 1;
		#10
		reset = 0;
		#10 
		reset = 1;
		en = 1;
		
		#100 
		 
		$finish;


		// #100;
	
		// clk = 0;
		// en = 0;
		// ram_w = 0;
		// ram_waddr = 0;
		// ram_wdata = 0;
		// ram_raddr = 0;
      
	end
	
	always #5 clk = ~clk;
      
endmodule
