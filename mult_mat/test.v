`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:20:33 03/30/2013
// Design Name:   mult_mat
// Module Name:   C:/Documents and Settings/Administrador/Escritorio/mult_mat/test.v
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
	always #10 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		#10 clk_enable = 0;
		clk=0;

		matriz_A = 12'b001010000011;
		matriz_B = 12'b001010010001;
		#10 clk_enable = 1;
		#10 clk_enable = 0;
		

	end
      
endmodule

