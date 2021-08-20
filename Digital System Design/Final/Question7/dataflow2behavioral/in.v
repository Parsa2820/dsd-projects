module dataflow (i0, i1, i2, i3, o0, o1, o2, o3);

	input i0, i1, i2, i3;
	output o0, o1;
	output [1:0] o2;
	output o3;

	wire t0;
	wire [1:0] t1;

	// implicit assignment without delay
	wire t2 = i0 & i1;

	// implicit assignment with delay
	wire #5 t3 = i0 | i1;

	// explicit assignmnet to wire without delay
	assign t0 = i0 ^ i1;

	// explicit assignmnet to wire with delay
	assign #4 t1[0] = i2 & i3;
	assign #4 t1[1] = i2 | i3;

	// explicit assignment with complex lhs
	assign {o0,o1} = t1;

	// explicit assignment with complex rhs
	assign o2 = {t2,t3};

	assign o3 = t0 & (|t1);

endmodule
