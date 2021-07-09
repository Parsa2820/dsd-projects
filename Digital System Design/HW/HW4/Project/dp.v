`define Init 1'b0
`define Process 1'b1

module dp (in1, in2, process, state, load, subtractable, finish, r, b, shamt, q, _end);

    // operands size
    parameter N = 8;

    input [N-1:0] in1;
    input [N-1:0] in2;
    input process;
    input state;
    input load;
    input subtractable;
    input finish;
    output reg [N-1:0] r;
    output reg [N-1:0] b;
    output reg signed [N-1:0] shamt;
    output reg [N-1:0] q;
    output reg _end;

    always @(process) begin
        if (state == `Init) begin
            if (load) begin
                r = in1;
                b = in2;
                shamt = N-1;
                q = 0;
                _end = 0;
            end
        end else if (state == `Process) begin
            if (finish) begin
                if (shamt >= 0) begin
                    q = q << shamt;
                end else begin 
                    // the lone remaining number is -1 so shift right one time
                    q = q >> 1;
                end
                _end = 1;
            end else if (subtractable) begin
                r = r - (b << shamt);
                q = q + 1;
                q = q << 1;
            end else if (!subtractable) begin
                q = q << 1;
            end
            shamt = shamt - 1;
        end
    end
endmodule
