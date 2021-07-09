`timescale 1ns / 1ps

module Stack(
    output reg [3:0] Data_Out,
    output reg Full,
    output reg Empty,
    input Clk,
    input RstN,
    input [3:0] Data_In,
    input Push,
    input Pop
    );

reg [3:0] stack[0:7];
reg [3:0] stackPointer;

initial begin
	Full = 0;
	Empty = 0;
	stackPointer = 0;
	stack[0] = 0;
	stack[1] = 0;
	stack[2] = 0;
	stack[3] = 0;
	stack[4] = 0;
	stack[5] = 0;
	stack[6] = 0;
	stack[7] = 0;
	Data_Out = 0;
end

always @(posedge Clk or negedge RstN) begin
	if (Clk) begin
		if (Push) begin
			if (!Full) begin
				Empty = 1;
				stack[stackPointer] = Data_In;
				stackPointer = stackPointer + 1;
				
				if (stackPointer == 8) begin
					Full = 1;
				end
			end
		end
		else if (Pop) begin
			if (Empty) begin
				Full = 0;
				stackPointer = stackPointer - 1;
				Data_Out = stack[stackPointer];
				stack[stackPointer] = 0;
				
				if (stackPointer == 0) begin
					Empty = 0;
				end
			end
		end
	end
	else begin
		Full = 0;
		Empty = 0;
		stackPointer = 0;
		stack[0] = 0;
		stack[1] = 0;
		stack[2] = 0;
		stack[3] = 0;
		stack[4] = 0;
		stack[5] = 0;
		stack[6] = 0;
		stack[7] = 0;
		Data_Out = 0;
	end
end

endmodule
