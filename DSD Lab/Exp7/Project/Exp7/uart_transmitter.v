`timescale 1ns / 1ps

`define IDLE 2'b00
`define XCHNG 2'b01
`define FINISH 2'b10

module uart_transmitter(
    input clk,
    input [7:0] data,
    input send,
    output reg tx
);

// INVERTED_BAUD_RATE must be less than 2 bits
parameter INVERTED_BAUD_RATE = 2;

reg [3:0] bit_counter;
reg [1:0] inverted_baud;
reg [1:0] state;

initial begin
    tx = 1;
	 state = `IDLE;
end

always @(posedge clk or negedge send) begin
    if (clk && state == `XCHNG) begin
        if (inverted_baud == INVERTED_BAUD_RATE) begin
            tx = data >> (7 - bit_counter);
            bit_counter = bit_counter + 1;
            inverted_baud = 2'b00;
        end
        inverted_baud = inverted_baud + 1;
        if (bit_counter == 8) begin
            state = `IDLE;
				tx = 1;
        end
    end else if (!send && state == `IDLE) begin
        bit_counter = 3'b000;
        inverted_baud = 2'b00;
        state = `XCHNG;
        tx = 0;
    end
end

endmodule
