`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:32:09 03/26/2013
// Design Name:   contador_BCD
// Module Name:   C:/Documents and Settings/Administrador/Escritorio/contador_NBCD/test.v
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

	// Outputs
	wire [11:0] sal;

	// Instantiate the Unit Under Test (UUT)
	contador_BCD uut (
		.clk(clk), 
		.rst(rst), 
		.clk_en(clk_en), 
		.sal(sal)
	);
	integer i = 0;
	always 	
		#10 clk =~clk; 

		initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		clk_en = 0;
		


		// Wait 100 ns for global reset to finish
		#100;
		@(posedge clk); 
		clk_en=~clk_en;
		
		for(i=0; i<30;i=i+1)
			begin
			@(posedge clk);
			end
		//rst=~rst;
		//@(posedge clk);
		//rst=~rst;
		

	end
      
endmodule

