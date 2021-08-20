module behavioral (i0, i1, i2, i3, o0, o1, o2, o3);

	input i0, i1, i2, i3;
	output reg o0, o1;
	output reg [1:0] o2;
	output reg o3;

	reg t0;
	reg [1:0] t1;

	// implicit assignment without delay
	
    reg t2;
    
    always @ (i0 & i1) begin
        t2 <= i0 & i1;
    end


    

	// implicit assignment with delay
	
    reg t3;
    
    always @ (i0 | i1) begin
        t3 <= #5 i0 | i1;
    end


    

	// explicit assignmnet to reg without delay
	
    always @ (i0 ^ i1) begin
        t0 <= i0 ^ i1;
    end



	// explicit assignmnet to reg with delay
	
    always @ (i2 & i3) begin
        t1[0] <= #4 i2 & i3;
    end


	
    always @ (i2 | i3) begin
        t1[1] <= #4 i2 | i3;
    end



	// explicit assignment with complex lhs
	
    always @ (t1) begin
        {o0,o1} <= t1;
    end



	// explicit assignment with complex rhs
	
    always @ ({t2,t3}) begin
        o2 <= {t2,t3};
    end



	
    always @ (t0 & (|t1)) begin
        o3 <= t0 & (|t1);
    end



endmodule
