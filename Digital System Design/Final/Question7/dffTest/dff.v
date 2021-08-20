module dff(d, clk, reset, q, q_bar);

	input d;
	input clk;
	input reset;
	output q;
	output q_bar;

	wire tmp;
	
	assign tmp = ~reset & (clk ? tmp : d);
	
	assign q = ~reset & (clk ? tmp : q);
	
	assign q_bar = ~q;

endmodule

