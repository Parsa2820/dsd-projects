`timescale 1ns / 1ps

module Multiplier
	 #(parameter N = 4)(
    input [N-1:0] multiplicand,
    input [N-1:0] multiplier,
    input start,
    input clk,
    output reg in_process,
    output reg finish,
    output [2*N-1:0] result
    );

// These regs are for Data Path
reg [N-1:0] m;
reg [N-1:0] a;
reg [N-1:0] q;
reg q_minus1;
reg [N-1:0] counter;
reg signed [2*N:0] shifter;


// These regs are for Control Unit
reg load;
reg process;
reg add;
reg sub;
reg [N-1:0] shift_amount;
reg [N-1:0] tmp;

assign result[2*N-1:N] = a;
assign result[N-1:0] = q;

// Control Unit
always @(posedge clk) begin
	 load = 0;
	 process = 0;
	 add = 0;
	 sub = 0;
    if (start) begin
        load = 1;
        in_process = 1;
    end else if (in_process) begin
        if (counter == N)  begin
            in_process = 0;
            finish = 1;
        end else if (q[0] == 1 && q_minus1 == 0) begin
            sub = 1;
            add = 0;
            shift_amount = 1;
            process = 1;
        end else if (q[0] == 0 && q_minus1 == 1) begin
            sub = 0;
            add = 1;
            shift_amount = 1;
            process = 1;
        end else begin
            shift_amount = 1;
				tmp = 0;
				while (tmp < N-2 && tmp < N - counter && q[tmp] == q[tmp+1]) begin
					 shift_amount = shift_amount + 1;
					 tmp = tmp + 1;
				end
            process = 1;
        end
    end
end

// Data Path
always @(process or load) begin
    if (load) begin
        a = 0;
        q_minus1 = 0;
        m = multiplicand;
        q = multiplier;
        counter = 0;
		  finish = 0;
    end else if (process) begin
        if (sub) begin
            a = a - m;
        end else if (add) begin
            a = a + m;
        end

        shifter[2*N:N+1] = a;
        shifter[N:1] = q;
        shifter[0] = q_minus1;
        shifter = shifter >>> shift_amount;
        a = shifter[2*N:N+1];
        q = shifter[N:1];
        q_minus1 = shifter[0];
		  
		  counter = counter + shift_amount;
    end
end
endmodule
