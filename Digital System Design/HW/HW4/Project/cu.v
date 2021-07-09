`define Init 1'b0
`define Process 1'b1

module cu (clk, reset, start, r, b, shamt, process, state, load, subtractable, finish);

    // operands size
    parameter N = 8;

    input clk;
    input reset;
	input start;
    input [N-1:0] r;
    input [N-1:0] b;
    input signed [N-1:0] shamt;
    output reg process;
    output reg state;
    output reg load;
    output reg subtractable;
    output reg finish;

    reg next_state;
	
    always @(posedge clk or negedge reset) begin
        if (!reset) begin
            next_state = `Init;
            process = 0;
        end else begin
            state = next_state;
            load = 0;
            subtractable = 0;
            finish = 0;
            if (state == `Init && start == 0) begin
                next_state = `Init;
            end else if (state == `Init && start == 1) begin
                next_state = `Process;
                load = 1;
            end else if (state == `Process && !(r < b || shamt < 0)) begin
                next_state = `Process;
                if (r >= (b << shamt)) begin
                    subtractable = 1;
                end else begin
                    subtractable = 0;
                end
            end else if (state == `Process && (r < b || shamt < 0)) begin
                next_state = `Init;
                finish = 1;
            end
            process = ~process;
        end
    end
	
endmodule
