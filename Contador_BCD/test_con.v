`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:53:02 03/26/2013
// Design Name:   contador_BCD
// Module Name:   C:/Documents and Settings/Administrador/Escritorio/Contador_BCD/test_con.v
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

module test_con;

	// Inputs
	reg clk;
	reg rst;
	reg clk_en;

	// Outputs
	wire [3:0] sal;

	// Instantiate the Unit Under Test (UUT)
	contador_BCD uut (
		.clk(clk), 
		.rst(rst), 
		.clk_en(clk_en), 
		.sal(sal)
	);
	always 
		#10 clk=~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		clk_en = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#10 clk_en =1;
		#150 rst=1;
		#25 rst=0;
		
        
		// Add stimulus here

	end
      
endmodule

