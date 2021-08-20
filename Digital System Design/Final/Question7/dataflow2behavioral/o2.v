module dff(d, clk, reset, q, q_bar);

	input d;
	input clk;
	input reset;
	output reg q;
	output reg q_bar;

	reg tmp;
	
	
    always @ (~reset & (clk ? tmp : d)) begin
        tmp <= ~reset & (clk ? tmp : d);
    end


	
	
    always @ (~reset & (clk ? tmp : q)) begin
        q <= ~reset & (clk ? tmp : q);
    end


	
	
    always @ (~q) begin
        q_bar <= ~q;
    end



endmodule
