module stimulus;
	reg [3:0] a, b;
	wire [7:0] result;
	
	array_multiplier_4x4 uut(a, b, result);
	
	initial begin
		a = 10;
		b = 3;
		#10
		$display(result);
		$stop;
	end
endmodule
