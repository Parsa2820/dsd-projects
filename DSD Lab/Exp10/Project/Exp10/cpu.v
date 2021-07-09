`timescale 1ns / 1ps

`define WORDSIZE 8
`define STACKADDRESSSIZE 3
`define MEMADDRESSSIZE 8

`define PUSHC 4'b0000
`define PUSH 4'b0001
`define POP 4'b0010
`define JUMP 4'b0011
`define JZ 4'b0100
`define JS 4'b0101
`define ADD 4'b0110
`define SUB 4'b0111

module cpu(clk, en, mem_load, mem_data, mem_address);

	input clk;
	input en;
	input mem_load;
	input [`WORDSIZE-1:0] mem_data;
	input [`MEMADDRESSSIZE-1:0] mem_address;

	reg [`MEMADDRESSSIZE-1:0] pc; // program counter

	reg [`WORDSIZE-1:0] ir; // instruction register
	reg [`WORDSIZE-1:0] ior; // instruction operand register

	reg [`WORDSIZE-1:0] stack [0:(1 << `STACKADDRESSSIZE)-1];
	reg [`STACKADDRESSSIZE-1:0] sp; // stack pointer

	reg [`WORDSIZE-1:0] mem [0:(1 << `MEMADDRESSSIZE)-1];

	reg sflag;
	reg zflag;

	reg signed [`WORDSIZE-1:0] ao1; // arithmetic operand 1
	reg signed [`WORDSIZE-1:0] ao2; // arithmetic operand 2
	reg signed [`WORDSIZE-1:0] ar; // arithmetic result

	always @(posedge clk or posedge mem_load or mem_data or mem_address) begin
		if (mem_load) begin
			mem[mem_address] = mem_data;
			pc = 0;
			sp = 0;
			sflag = 0;
			zflag = 0;
		end else if (en) begin
			ir = mem[pc];
			ior = mem[pc+1];

			case (ir[`WORDSIZE-1:`WORDSIZE-4])
				`PUSHC: begin
					stack[sp] = ior;
					sp = sp + 1;		
					pc = pc + 2;
				end
				`PUSH: begin
					stack[sp] = mem[ior];
					sp = sp + 1;
					pc = pc + 2;
				end
				`POP: begin
					sp = sp - 1;
					mem[ior] = stack[sp];
					pc = pc + 2;
				end
				`JUMP: begin
					sp = sp - 1;
					pc = stack[sp];
				end
				`JZ: begin
					if (!zflag) begin
						sp = sp - 1;
						pc = stack[sp];
					end
				end
				`JS: begin
					if (!sflag) begin
						sp = sp - 1;
						pc = stack[sp];						
					end
				end
				`ADD: begin
					sp = sp - 1;
					ao1 = stack[sp];
					sp = sp - 1;
					ao2 = stack[sp];
					ar = ao2 + ao1;
					stack[sp] = ar;
					sp = sp + 1;
					sflag = ar[`WORDSIZE-1];
					zflag = ~|ar;
					pc = pc + 1;
				end
				`SUB: begin
					sp = sp - 1;
					ao1 = stack[sp];
					sp = sp - 1;
					ao2 = stack[sp];
					ar = ao2 - ao1;
					stack[sp] = ar;
					sp = sp + 1;
					sflag = ar[`WORDSIZE-1];
					zflag = ~|ar;
					pc = pc + 1;
				end
			endcase
		end
	end

endmodule
