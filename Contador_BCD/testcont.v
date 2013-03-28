`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:16:43 03/25/2013
// Design Name:   contador_BCD
// Module Name:   C:/Documents and Settings/Administrador/Escritorio/Contador_BCD/testcont.v
// Project Name:  Contador_BCD
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

module testcont;

	// Inputs
	reg clk;
	reg rst;
	reg aux;

	// Outputs
	wire [11:0] sal;
	wire [3:0] sal_aux;

	// Instantiate the Unit Under Test (UUT)
	contador_BCD uut (
		.clk(clk), 
		.rst(rst), 
		.aux(aux), 
		.sal(sal), 
		.sal_aux(sal_aux)
	);

	always
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		aux = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#50 rst = 1;
		#10 aux = 1;
		#10 rst = 0;
		#50 aux = 0;
		#200 aux = 1;
		#500 rst = 1;
		#20 rst = 0;
		#10 aux = 0;
		
	end
      
endmodule

