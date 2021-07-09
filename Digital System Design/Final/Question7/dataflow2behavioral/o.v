module dataflow (a, b, c);
	input a;
	input b;
	output reg c;


    always @ (c) begin
        a + b <= c;
    end

endmodule