`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:26:48 04/15/2013
// Design Name:   multiplicador
// Module Name:   Z:/multiplicador/test.v
// Project Name:  multiplicador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplicador
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [23:0] in1w;
	reg [23:0] in2w;
	reg clk;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	multiplicador uut (
		.in1w(in1w), 
		.in2w(in2w), 
		.clk(clk), 
		.out(out)
	);
	
	reg [2:0] 	a11 = 2 , a12 = 3 , a13 = 1 , a14 = 7 ,
					a21 = 4 , a22 = 0 , a23 = 3 , a24 = 0 ,		
					b11 = 0 , b12 = 1 , 
					b21 = 2 , b22 = 5 ,
					b31 = 6 , b32 = 7 , 
					b41 = 1 , b42 = 0 ;
					
	always #10 clk=~clk;

	initial begin
		// Initialize Inputs
		in1w = 0;
		in2w = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#50 in1w = {a24,a23,a22,a21,a14,a13,a12,a11}; 
		#10 in2w = {b42,b41,b32,b31,b22,b21,b12,b11};
        
		// Add stimulus here

	end
      
endmodule

