`timescale 1ns / 1ps

module tcam (data, data_x, w_r_bar, write_address, address, match_flag);
    
	 // N is logarithm of number of words (2^N = number of words)
    parameter N = 2;
    // WORD_SIZE is size of the word in bit
    parameter WORD_SIZE = 2;
	
    input [WORD_SIZE-1:0] data;
    input [WORD_SIZE-1:0] data_x; // if 1, indicates coresspounding bit is unknown or x
    input w_r_bar;
    input [N-1:0] write_address;
    output reg [N-1:0] address;
    output reg match_flag;

    // Internal variables
    reg [WORD_SIZE-1:0] mem [0:(1<<N)-1];
    reg [WORD_SIZE-1:0] mem_x [0:(1<<N)-1];
    reg [(1<<N)-1:0] i;
    reg [WORD_SIZE-1:0] j;
    reg tmp_flag;

    // Write and search functionality
    always @(data or data_x or w_r_bar) begin
        if (!w_r_bar) begin
            match_flag = 0;
            address = 0;
            for (i = 0; i <= (1<<N)-1; i=i+1) begin
                tmp_flag = 1;
                for (j = 0; j <= WORD_SIZE-1; j=j+1) begin
                    if (!mem_x[i][j] && !data_x[j] && mem[i][j] != data[j]) begin
                        tmp_flag = 0;
                    end
                end
                if (tmp_flag) begin
                    match_flag = 1;
                    address = i;
                end
            end
        end else begin
            mem[write_address] = data;
            mem_x[write_address] = data_x;
        end
    end
    
endmodule
