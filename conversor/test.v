`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:19:19 03/29/2013
// Design Name:   conversor
// Module Name:   Z:/conversor/test.v
// Project Name:  conversor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: conversor
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
	reg entrada_serie;
	reg [3:0] patron_A;
	reg [3:0] patron_B;
	reg [3:0] patron_C;
	reg clk;

	// Outputs
	wire out_A;
	wire out_B;
	wire out_C;
	wire [3:0] out_par;
	wire out_serie;

	// Instantiate the Unit Under Test (UUT)
	conversor uut (
		.entrada_serie(entrada_serie), 
		.patron_A(patron_A), 
		.patron_B(patron_B), 
		.patron_C(patron_C), 
		.clk(clk), 
		.out_A(out_A), 
		.out_B(out_B), 
		.out_C(out_C), 
		.out_par(out_par), 
		.out_serie(out_serie)
	);
	always #10 	clk=~clk;
 	always #10	 entrada_serie = $random %2;
		
		
		
		

	initial begin
		// Initialize Inputs
		entrada_serie = 0;
		patron_A = 4'b1001;
		patron_B = 4'b1100;
		patron_C = 4'b0011;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		 
		// Add stimulus here

	end
      
endmodule

