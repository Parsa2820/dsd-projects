module subtractor (clk, reset, start, in1, in2, quotient, remainder, _end);

    // operands size
    parameter N = 8;

    input clk;
    input reset;
    input start;
    input [N-1:0] in1;
    input [N-1:0] in2;
    output [N-1:0] quotient;
    output [N-1:0] remainder;
    output _end;

    wire process;
    wire state;
    wire load;
    wire subtractable;
    wire finish;
    wire [N-1:0] r;
    wire [N-1:0] b;
    wire [N-1:0] shamt;

    buffer buffer0 (r[N-1:0], remainder[N-1:0]);
    defparam buffer0.N = N;

    cu cu0 (
        .clk(clk),
        .reset(reset),
        .start(start),
        .r(r),
        .b(b),
        .shamt(shamt),
        .process(process),
        .state(state),
        .load(load),
        .subtractable(subtractable),
        .finish(finish)
        );
    defparam cu0.N = N;

    dp dp0 (
        .in1(in1),
        .in2(in2),
        .process(process),
        .state(state),
        .load(load),
        .subtractable(subtractable),
        .finish(finish),
        .r(r),
        .b(b),
        .shamt(shamt),
        .q(quotient),
        ._end(_end)
        );
    defparam dp0.N = N;

endmodule
