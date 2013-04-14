`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:34:39 04/13/2013
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
	reg [23:0] in1;
	reg [23:0] in2;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	multiplicador uut (
		.in1(in1), 
		.in2(in2), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in1 = 0;
		in2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      #10 in1 = 24'b 000010110110100101101101;
		#10 in2 = 24'b 000010110110100101101101;
		
		
		// Add stimulus here

	end
      
endmodule

