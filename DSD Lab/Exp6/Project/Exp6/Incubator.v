`timescale 1ns / 1ps

module Incubator(
	input clk,
	input reset,
	input signed [7:0] temperature,
	output cooler_on,
	output reg [3:0] cooler_rotational_speed,
	output heater_on
	);
	
	parameter s1 = 2'd1;
	parameter s2 = 2'd2;
	parameter s3 = 2'd3;
	
	parameter s2_out = 2'd0;
	parameter s2_s1 = 2'd1;
	parameter s2_s2 = 2'd2;
	parameter s2_s3 = 2'd3;

	// S1 = 01, S2 = 10, S3 = 11
	reg [1:0] state;
	reg [1:0] next_state;
	
	// OUT = 00, S1 = 01, S2 = 10, S3 = 11
	reg [1:0] s2_substate;
	reg [1:0] next_s2_substate;

	always @(posedge clk) begin
		if (reset) begin
			state <= s1;
			s2_substate <= s2_out;
		end else begin
			state <= next_state;
			s2_substate <= next_s2_substate;
		end				
	end
	
	// Control 
	always @(state or temperature) begin
		next_state <= state;
		next_s2_substate <= s2_substate;
		
		case (state)
			s1 : begin
				if (temperature > 35) begin
					next_state <= s2;
				end else if (temperature < 15) begin
					next_state <= s3;
				end
			end
			s2 : begin
				if (temperature < 25) begin
					next_state <= s1;
				end
			end
			s3 : begin
				if (temperature > 30) begin
					next_state <= s1;
				end
			end
		endcase
		
		case (s2_substate)
			s2_out : begin
				if (temperature > 35) begin
					next_s2_substate <= s2_s1;
				end
			end
			s2_s1 : begin
				if (temperature > 40) begin
					next_s2_substate <= s2_s2;
				end else if (temperature < 25) begin
					next_s2_substate <= s2_out;
				end
			end
			s2_s2 : begin
				if (temperature > 45) begin
					next_s2_substate <= s2_s3;
				end else if (temperature < 35) begin
					next_s2_substate <= s2_s1;
				end					
			end
			s2_s3 : begin
				if (temperature < 40) begin
					next_s2_substate <= s2_s2;
				end			
			end											
		endcase
	end
	
	// Data 
	always @(posedge clk) begin	
		case (next_s2_substate)
			s2_out : begin
				cooler_rotational_speed <= 4'd0;
			end
			s2_s1 : begin
				cooler_rotational_speed <= 4'd4;
			end
			s2_s2 : begin
				cooler_rotational_speed <= 4'd6;
			end
			s2_s3 : begin
				cooler_rotational_speed <= 4'd8;
			end											
		endcase
	end

	assign heater_on = state[1] & state[0];
	assign cooler_on = state[1] & ~state[0];

endmodule
