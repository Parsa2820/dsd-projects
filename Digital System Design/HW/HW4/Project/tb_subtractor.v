module tb_subtractor;

    // operands size
    parameter N = 8;

    reg clk;
    reg reset;
    reg start;
    reg [N-1:0] in1;
    reg [N-1:0] in2;
    
    wire [N-1:0] quotient;
    wire [N-1:0] remainder;
    wire _end;

    subtractor uut(clk, reset, start, in1, in2, quotient, remainder, _end);

    initial begin
        reset = 1;
        #5
        reset = 0;
        #5
        reset = 1;
        clk = 0;
        start = 1;
        in1 = 15;
        in2 = 7;
        #10
        start = 0;
        #100
        start = 1;
        in1 = 40;
        in2 = 3;
        #10
        start = 0;
        #100
        start = 1;
        in1 = 40;
        in2 = 5;
        #10
        start = 0;
        #100
        $stop;
    end

    always #5 clk = ~clk;
endmodule
