module transition_counter_tb;
    reg in;
    reg reset;
    reg clk;
    wire [63:0] o;

    transition_counter uut(in, reset, clk, o);

    initial begin
        in = 0;
        #5
        reset = 0;
        #5
        reset = 1;
        #5
        reset = 0;
        clk = 0;
        #8
        in = 1;
        #10
        in = 0;
        #10
        in = 1;
        #1
        in = 0;
        #1
        in = 1;
        #10
        in = 0;
        #20
        $stop;
    end

    always #5 clk = ~clk;
endmodule
