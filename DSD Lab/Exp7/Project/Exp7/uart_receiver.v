`timescale 1ns / 1ps

`define IDLE 2'b00
`define XCHNG 2'b01
`define FINISH 2'b10

module uart_receiver(
    input clk,
    input rx,
    output reg [7:0] data,
    output reg finished,
    output reg err
);

// INVERTED_BAUD_RATE must be less than 2 bits
parameter INVERTED_BAUD_RATE = 2;

reg [3:0] bit_counter;
reg [1:0] inverted_baud;
reg [1:0] state;

reg [1:0] flag;

initial begin
    state = `IDLE;
	 finished = 1;
	 flag = 0;
end

always @(posedge clk or negedge rx) begin
	 
	 if (flag != 0) begin 
		 flag = flag - 1;
	 end else if (clk && state == `XCHNG) begin
        if (inverted_baud == INVERTED_BAUD_RATE) begin
				data = data << 1;
            data[0] = rx;
            bit_counter = bit_counter + 1;
            inverted_baud = 2'b00;
        end
        inverted_baud = inverted_baud + 1;
        if (bit_counter == 9) begin
            err = ~(data[7] ^ (data[6]^data[5]^data[4]^data[3]^data[2]^data[1]^data[0]));
            state = `IDLE;
            finished = 1;
				flag = 2;
        end
    end else if (!flag && !rx && state == `IDLE) begin
        bit_counter = 3'b000;
        inverted_baud = 2'b00;
        finished = 0;
        state = `XCHNG;
    end
end

endmodule
