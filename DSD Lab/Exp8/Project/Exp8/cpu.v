`timescale 1ns / 1ps
// opcodes
`define PUSH 3'b000
`define POP 3'b001
`define ADD 3'b010
`define SUB 3'b011
`define MULT 3'b100

// stack base machine instruction set

// 1		push <memory address>
//			000 + 5 bit memory address

// 2		pop <memory address>
// 			001 + 5 bit memory address

// 3 		add
//			010 + 00000

// 4 		sub
//			011 + 00000

// 5 		mult
//			100 + 00000

module cpu(clk, en, reset, ram_w, ram_waddr, ram_wdata, ram_raddr, ram_rdata);

	parameter N = 8; // word len

	input clk;
	input en;
	input reset;
	input [N-1:0] ram_rdata;
	output reg ram_w;
	output reg [4:0] ram_waddr;
	output reg [N-1:0] ram_wdata;
	output reg [4:0] ram_raddr;
	
	reg adder_add_subtract_bar;
	reg [N-1:0] adder_areal;
	reg [N-1:0] adder_aimaginary;
	reg [N-1:0] adder_breal;
	reg [N-1:0] adder_bimaginary;
	wire [N-1:0] adder_resultreal;
	wire [N-1:0] adder_resultimaginary;

	complex_adder_subtractor cas (
		.add_subtract_bar(adder_add_subtract_bar), 
		.areal(adder_areal), 
		.aimaginary(adder_aimaginary), 
		.breal(adder_breal), 
		.bimaginary(adder_bimaginary), 
		.resultreal(adder_resultreal), 
		.resultimaginary(adder_resultimaginary)
	);

	reg [N-1:0] mult_areal;
	reg [N-1:0] mult_aimaginary;
	reg [N-1:0] mult_breal;
	reg [N-1:0] mult_bimaginary;
	wire [2*N-1:0] mult_resultreal;
	wire [2*N-1:0] mult_resultimaginary;

	complex_multiplier cm (
		.areal(mult_areal), 
		.aimaginary(mult_aimaginary), 
		.breal(mult_breal), 
		.bimaginary(mult_bimaginary), 
		.resultreal(mult_resultreal), 
		.resultimaginary(mult_resultimaginary)
	);
	
	reg [4:0] pc; // program counter
	reg [N-1:0] ir; // instruction register
	reg [4:0] sp; // stack pointer
	reg [N-1:0] operand;
	reg [N-1:0] op1real;
	reg [N-1:0] op1img;
	reg [N-1:0] op2real;
	reg [N-1:0] op2img;
	always @ (posedge clk or negedge reset) begin
		if (!reset) begin
			pc = 0;
			sp = 31;
		end else if (en) begin
			ram_w = 0;
			ram_raddr = pc;
			@ram_rdata
			ir = ram_rdata;
			if (ir[N-1:N-3] == `PUSH) begin
				ram_w = 0;
				ram_raddr = ir[N-4:0];
				@ram_rdata
				operand = ram_rdata;
				ram_waddr = sp;
				ram_wdata = operand;
				ram_w = 1;
				sp = sp - 1;
				#5
				ram_w = 0;
				ram_raddr = ir[N-4:0] + 1;
				@ram_rdata
				operand = ram_rdata;
				ram_waddr = sp;
				ram_wdata = operand;
				ram_w = 1;
				sp = sp - 1;
			end else if (ir[N-1:N-3] == `POP) begin
				sp = sp + 1;
				ram_w = 0;
				ram_raddr = sp;
				@ram_rdata
				operand = ram_rdata;
				ram_waddr = ir[N-4:0] + 1;
				ram_wdata = operand;
				ram_w = 1;
				#5
				sp = sp + 1;
				ram_w = 0;
				ram_raddr = sp;
				@ram_rdata
				operand = ram_rdata;
				ram_waddr = ir[N-4:0];
				ram_wdata = operand;
				ram_w = 1;
			end else if (ir[N-1:N-3] == `ADD || ir[N-1:N-3] == `SUB) begin
				ram_w = 0;
				ram_raddr = sp + 1;
				@ram_rdata
				op1img = ram_rdata;
				
				ram_raddr = sp + 2;
				@ram_rdata
				op1real = ram_rdata;
				
				ram_raddr = sp + 3;
				@ram_rdata
				op2img = ram_rdata;
				
				ram_raddr = sp + 4;
				@ram_rdata
				op2real = ram_rdata;
				
				$display("%d, %d, %d, %d", op1img, op1real, op2img, op2real);
				
				adder_add_subtract_bar = !ir[N-3];
				adder_areal = op2real;
				adder_aimaginary = op2img;
				adder_breal = op1real;
				adder_bimaginary = op1img;
				@(adder_resultreal or adder_resultimaginary)
				
				operand = adder_resultreal;
				ram_waddr = sp;
				ram_wdata = operand;
				ram_w = 1;
				sp = sp - 1;
				#5
				operand = adder_resultimaginary;
				ram_waddr = sp;
				ram_wdata = operand;
				ram_w = 1;
				sp = sp - 1;
				
				
			end else if (ir[N-1:N-3] == `MULT) begin
				ram_w = 0;
				ram_raddr = sp + 1;
				@ram_rdata
				op1img = ram_rdata;
				
				ram_raddr = sp + 2;
				@ram_rdata
				op1real = ram_rdata;
				
				ram_raddr = sp + 3;
				@ram_rdata
				op2img = ram_rdata;
				
				ram_raddr = sp + 4;
				@ram_rdata
				op2real = ram_rdata;
				
				$display("%d, %d, %d, %d", op1img, op1real, op2img, op2real);
				
				mult_areal = op2real;
				mult_aimaginary = op2img;
				mult_breal = op1real;
				mult_bimaginary = op1img;
				
				@(mult_resultreal or mult_resultimaginary)
				
				operand = mult_resultreal[2*N-1:N];
				ram_waddr = sp;
				ram_wdata = operand;
				ram_w = 1;
				sp = sp - 1;
				#5
				operand = mult_resultreal[N-1:0];
				ram_waddr = sp;
				ram_wdata = operand;
				ram_w = 1;
				sp = sp - 1;
				#5
				operand = mult_resultimaginary[2*N-1:N];
				ram_waddr = sp;
				ram_wdata = operand;
				ram_w = 1;
				sp = sp - 1;
				#5
				operand = mult_resultimaginary[N-1:0];
				ram_waddr = sp;
				ram_wdata = operand;
				ram_w = 1;
				sp = sp - 1;
			end
			pc = pc + 1;
		end
	end
endmodule
