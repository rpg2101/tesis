`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:58:59 04/13/2013
// Design Name:   mult_mat
// Module Name:   Z:/mult_mat/test.v
// Project Name:  mult_mat
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mult_mat
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
	reg clk_enable;
	reg clk;
	reg [11:0] matriz_A;
	reg [11:0] matriz_B;

	// Outputs
	wire [11:0] matriz_resultado;

	// Instantiate the Unit Under Test (UUT)
	mult_mat uut (
		.clk_enable(clk_enable), 
		.clk(clk), 
		.matriz_A(matriz_A), 
		.matriz_B(matriz_B), 
		.matriz_resultado(matriz_resultado)
	);

	always 
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk_enable = 0;
		clk = 0;
		matriz_A = 12'b001001000001000001;  
		matriz_B = 12'b000011001011001000;
		// Wait 100 ns for global reset to finish
  		#10 clk_enable = 1;
		#30 clk_enable = 0;
		// Add stimulus here

	end
      
endmodule

