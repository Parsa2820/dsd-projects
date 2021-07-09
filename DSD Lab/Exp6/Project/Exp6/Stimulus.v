`timescale 1ns / 1ps

module Stimulus;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] temperature;

	// Outputs
	wire cooler_on;
	wire [3:0] cooler_rotational_speed;
	wire heater_on;

	// Instantiate the Unit Under Test (UUT)
	Incubator uut (
		.clk(clk),
		.reset(reset),
		.temperature(temperature), 
		.cooler_on(cooler_on), 
		.cooler_rotational_speed(cooler_rotational_speed), 
		.heater_on(heater_on)
	);

	initial begin
		// S1
		clk = 0;
		reset = 1;
		temperature = 20;
		
		#12
		
		// S3 so heater is on and coller is off
		reset = 0;
		temperature = 4;
		
		#20
		
		// Temperature rises, but still in S3
		temperature = 10;
		
		#20
		
		// Temperature rises, but still in S3
		temperature = 20;
		
		#20
		
		// Temperature is above 30 so it goes back to S1
		temperature = 31;
		
		#20
		
		// Temperature is above 35 so it goes to S2
		// So heater is off and cooler is on with S1 for CRS
		temperature = 36;
		
		#20
		
		// By increasing temperature above 40, CRS state goes to S2
		temperature = 41;
		
		#20
		
		// By increasing temperature above 45, CRS state goes to S3
		temperature = 46;
		
		#20
		
		// By incresing temperature, CRS state stays on S3
		temperature = 50;
		
		#20
		
		// Temperature goes back to normal slowly (CRS goes to S2)
		temperature = 37;
		
		#20
		
		// Temperature goes back to normal slowly (CRS goes to S1)
		temperature = 30;
		
		#20
		
		// Temperature goes back to normal slowly
		// CRS goes to OUT and main state goes back to S1 and both cooler and heater are off 
		temperature = 20 ;
		
		#40
		
		$finish;
	end
	
	always #10 clk = ~clk;
      
endmodule

