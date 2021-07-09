module transition_counter (in, reset, clk, o);

    input in;
    input reset;
    input clk;
    output reg [63:0] o;
	
	reg [63:0] real_o;
    reg previous_in;

    always @(posedge clk or posedge reset) begin
       if (reset) begin
           o = 0;
           real_o = 0;
           previous_in = in;
       end else if (clk) begin
           if (previous_in != in) begin
               o = o + 1;
               previous_in = in;
           end
           if (real_o != o) begin
               $display("Error in time %t: real_o is %d and o is %d",  $time, real_o, o);
           end
       end
    end

    always @(in) begin
        real_o = real_o + 1;
    end
    
endmodule
