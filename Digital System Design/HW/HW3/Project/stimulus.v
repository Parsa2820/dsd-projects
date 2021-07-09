module stimulus;
    reg w_r_bar;
    reg [3:0] addr;
    reg [7:0] data_in;
    
    wire [7:0] data;
    
    // Config inout port with tri-state buffer
    tri_state_buffer tsb(w_r_bar, data_in, data);
    defparam tsb.Width = 8;

    // Config unit under test
    ram uut (w_r_bar, addr, data);
    defparam uut.N = 4;
    defparam uut.WORD_SIZE = 8;
	
    initial begin
        // Write
        w_r_bar = 1;
        addr = 4'b0000;
        data_in = 8'b0000_1000;
        #10
        addr = 4'b0010;
        data_in = 8'b0001_0000;
        #10
        // Read
        w_r_bar = 0;
        addr = 4'b0000;
        #10
        addr = 4'b0001;
        #10
        addr = 4'b0010;
        #10
        $stop;
    end
    
endmodule

