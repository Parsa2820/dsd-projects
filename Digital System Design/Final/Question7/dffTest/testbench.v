module testbench;
	
	reg d;
	reg clk;
	reg reset;
	
	wire q;
	wire q_bar;
	
	wire qb;
	wire q_barb;
	
	dff dataflow_unit(d, clk, reset, q, q_bar);
	dffb behavioral_unit(d, clk, reset, qb, q_barb);
	
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
