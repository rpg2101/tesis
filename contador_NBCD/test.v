`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:43:21 03/28/2013
// Design Name:   contador_BCD
// Module Name:   Z:/contador_NBCD/test.v
// Project Name:  contador_NBCD
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: contador_BCD
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
	reg clk;
	reg rst;
	reg clk_en;
	reg [0:0] sel;

	// Outputs
	wire [11:0] sal;
	wire [3:0] sal_aux;

	// Instantiate the Unit Under Test (UUT)
	contador_BCD uut (
		.clk(clk), 
		.rst(rst), 
		.clk_en(clk_en), 
		.sel(sel), 
		.sal(sal), 
		.sal_aux(sal_aux)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		clk_en = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

