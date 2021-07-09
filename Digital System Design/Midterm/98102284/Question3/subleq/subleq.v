// CPU constants in bit
`define ADDRESS_LEN 16
`define WORD_LEN 16

// 8 bit subleq processor with 8 bit for address
module subleq (power, clk, load_word, in_word, in_address);

    input power, clk, load_word;
    input [`WORD_LEN-1:0] in_word;
    input [`ADDRESS_LEN-1:0] in_address;
    
    // RAM unit simulated as a array of bit vectors inside the CPU
    reg [`WORD_LEN-1:0] mem [0:(1<<`ADDRESS_LEN)-1];

    // Program counter 
    reg [`ADDRESS_LEN-1:0] pc;

    // General purpose registers
    reg [`ADDRESS_LEN-1:0] op1address; // operand 1 adddress
    reg signed [`WORD_LEN-1:0] op1;
    reg [`ADDRESS_LEN-1:0] op2address; // operand 2 adddress
    reg signed [`WORD_LEN-1:0] op2;
    reg signed [`WORD_LEN-1:0] ans;
    reg [`ADDRESS_LEN-1:0] jaddr; // jump adddress

    always @(posedge clk or posedge load_word or in_word or in_address) begin
        if (load_word) begin
            mem[in_address] = in_word;
            
            // This is the initial value for PC, the program text should start from address 1 in mem
            // Address 0 is reserved for the value zero and it is invalid for jump
            pc = 1;
            mem[0] = 0;
        end else if (power) begin
            // Every instruction is 3*ADDRESS_LEN (24 bit)
            op1address = mem[pc];
            op1 = mem[op1address];
            op2address = mem[pc+1];
            op2 = mem[op2address];
            jaddr = mem[pc+2];
            ans = op2 - op1;
            mem[op2address] = ans;

            // As mentioned before, address 0 is reserved for zero value.
            // If an address point to address 0, it considered as null
            if (jaddr != 0 && ans <= 0) begin
                pc = jaddr;
            end else begin
                pc = pc + 3;
            end
        end
    end
endmodule
