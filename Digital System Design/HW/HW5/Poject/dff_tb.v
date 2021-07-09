module dff_tb;
	
	reg d;
	reg clk;
	reg reset;
	
	wire q;
	wire q_bar;
	
	dff uut(d, clk, reset, q, q_bar);
	
	initial begin
		d = 0;
		clk = 0;
		reset = 1;
		
		#20
		d = 0;
		reset = 0;
		
		#20
		
		d = 1;
		
		#13
		
		d = 0;
		
		#20
		
		d = 1;
		
		#20
		$stop;	
	end
	
	always #5 clk = ~clk;
	
endmodule
