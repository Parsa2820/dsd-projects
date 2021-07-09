module tcam_tb;

	reg [15:0] data;
	reg [15:0] data_x;
	reg w_r_bar;
	reg [1:0] write_address;

	wire [1:0] address;
	wire match_flag;

	tcam unit_under_test(.data(data), .data_x(data_x), .w_r_bar(w_r_bar), .write_address(write_address),
		.address(address), .match_flag(match_flag));

	defparam unit_under_test.N = 2;
	defparam unit_under_test.WORD_SIZE = 16;

	initial begin
		// Normal write and search test
		w_r_bar = 1;
		data_x = 0;
		#5

		write_address = 0;
		#5
		data = 10;
		#10
		write_address = 1;
		#5
		data = 20;
		#10
		write_address = 2;
		#5
		data = 30;
		#10
		write_address = 3;
		#5
		data = 40;
		#20

		w_r_bar = 0;
		#5

		data = 30;
		#10
		data = 40;
		#10
		data = 10;
		#10
		data = 20;
		#10
		
		// No result search
		data = 50;
		#10
		
		// Search with x
		data_x = 16'b0000_0000_0010_0000;
		data = 16'b0000_0000_0000_1000; // 40 = 16'b0000_0000_0010_1000
		#10

		// Store word which contains x
		write_address = 3;
		#5
		w_r_bar = 1;
		#5
		data_x = 16'b0000_0000_0010_0000;
		data = 16'b0000_0000_0000_1000; // 40 = 16'b0000_0000_0010_1000
		#20
		// Match 16'b0000_0000_00x0_1000 with 40 and 8
		w_r_bar = 0;
		#5

		data = 40;
		#10

		data = 8;
		#10
		
		data = 6; // Doesn't match with difference in another bits except x bit
		#10

		$stop;
	end

endmodule
