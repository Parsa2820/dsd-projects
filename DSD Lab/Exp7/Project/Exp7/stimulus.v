`timescale 1ns / 1ps

module stimulus;

	reg clk;
	reg [7:0] data;
	reg send;

	wire serial;
	wire [7:0] data_out;
	wire r_finished;
	wire err;

	uart_transmitter t (.clk(clk), .data(data), .send(send), .tx(serial));
	uart_receiver r (.clk(clk), .rx(serial), .data(data_out), .finished(r_finished), .err(err));

	initial begin
		clk = 0;
	
		 // Valid data
		 data = 8'b1100_0001;
		 send = 1;
		 #20
		 send = 0;
		 #20
		 send = 1;
		 #500
		 
		 // Invalid data
		 data = 8'b0100_0001;
		 send = 1;
		 #20
		 send = 0;
		 #20
		 send = 1;
		 #500
		 $finish;
	end 

	always #5 clk = ~clk;
	
	initial $monitor("sara eshgheeeeeeeeeeeeeee", data_out);

endmodule
