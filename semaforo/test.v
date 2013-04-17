`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:51:09 04/14/2013
// Design Name:   semaforo
// Module Name:   Z:/semaforo/test.v
// Project Name:  semaforo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: semaforo
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
	reg pulsador;
	reg clk;
	reg rst;

	// Outputs
	wire rojo;
	wire amarillo;
	wire verde;
	wire blanco;

	// Instantiate the Unit Under Test (UUT)
	semaforo uut (
		.pulsador(pulsador), 
		.clk(clk), 
		.rst(rst), 
		.rojo(rojo), 
		.amarillo(amarillo), 
		.verde(verde), 
		.blanco(blanco)
	);
   always 
		#10 clk = ~clk;
	initial begin
  $dumpfile ("test.vcd");
  $dumpvars (1, test);
  //$monitor ("clk=%b, rst=%b, pulsador=%b", clk, rst, pulsador);
		// Initialize Inputs
		pulsador = 0;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
      #10 rst =1;  
		#10 rst =0;
		// Add stimulus here
  #2000 $finish;
	end
      
endmodule

