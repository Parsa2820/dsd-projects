module testbench;
	reg i0, i1, i2, i3;
	
	wire o0, o1;
	wire [1:0] o2;
	wire o3;
	
	wire o0b, o1b;
	wire [1:0] o2b;
	wire o3b;
	
	dataflow dataflow_unit(i0, i1, i2, i3, o0, o1, o2, o3);
	
	behavioral behavioral_unit(i0, i1, i2, i3, o0b, o1b, o2b, o3b);
	
	initial begin
		i0 = 0;
		i1 = 0;
		i2 = 0;
		i3 = 0;
		#10
		i0 = 1;
		i1 = 0;
		i2 = 0;
		i3 = 0;
		#10
		i0 = 0;
		i1 = 1;
		i2 = 0;
		i3 = 0;
		#10
		i0 = 1;
		i1 = 1;
		i2 = 0;
		i3 = 0;
		#10
		i0 = 0;
		i1 = 0;
		i2 = 1;
		i3 = 0;
		#10
		i0 = 1;
		i1 = 0;
		i2 = 1;
		i3 = 0;
		#10
		i0 = 0;
		i1 = 1;
		i2 = 1;
		i3 = 0;
		#10
		i0 = 1;
		i1 = 1;
		i2 = 1;
		i3 = 0;
		#10
		i0 = 0;
		i1 = 0;
		i2 = 0;
		i3 = 1;
		#10
		i0 = 1;
		i1 = 0;
		i2 = 0;
		i3 = 1;
		#10
		i0 = 0;
		i1 = 1;
		i2 = 0;
		i3 = 1;
		#10
		i0 = 1;
		i1 = 1;
		i2 = 0;
		i3 = 1;
		#10
		i0 = 0;
		i1 = 0;
		i2 = 1;
		i3 = 1;
		#10
		i0 = 1;
		i1 = 0;
		i2 = 1;
		i3 = 1;
		#10
		i0 = 0;
		i1 = 1;
		i2 = 1;
		i3 = 1;
		#10
		i0 = 1;
		i1 = 1;
		i2 = 1;
		i3 = 1;
		#10
		$stop;
	end
endmodule
