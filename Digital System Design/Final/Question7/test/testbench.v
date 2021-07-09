module testbench;
	reg a;
	reg b;
	
	wire c;
	
	behavioral dataflow_unit(a, b, c);
	
	initial begin
		a = 0;
		b = 0;
		#10
		a = 1;
		b = 0;
		#10
		a = 0;
		b = 1;
		#10
		a = 1;
		b = 1;
		#10
		$stop;
	end
endmodule
