module ram (w_r_bar, addr, data);

	// N is logarithm of number of words (2^N = number of words)
    parameter N;
    // WORD_SIZE is size of the word in bit
    parameter WORD_SIZE;

    input w_r_bar;
    input [N-1:0] addr;
    inout [WORD_SIZE-1:0] data;

    // Internal variables
    reg [WORD_SIZE-1:0] data_out;
    reg [WORD_SIZE-1:0] mem [0:(1<<N)-1];

    // Config inout port with tri-state buffer
    wire w_bar_r;
    not(w_bar_r, w_r_bar);
    tri_state_buffer tsb(w_bar_r, data_out, data);
    defparam tsb.Width = WORD_SIZE;

    // RAM functionality
    always @(w_r_bar or addr or data) begin
        if (w_r_bar) begin
            mem[addr] = data;
        end else begin
            data_out = mem[addr];
        end
    end
endmodule
