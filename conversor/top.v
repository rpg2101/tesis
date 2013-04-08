`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:19:46 04/08/2013 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
	
    input clk,
	 input boton,
	 input sw1,
	 output out_A,
    output out_B,
    output out_C,
    output [N-1:0] out_par,
	 output out_serie
	 
    );
	 
	 wire clk_conv;
	 
	 
antirebote
#(  .N(4) ,
	 .A(3) ,
	 .B(1) ,
	 .log2 (25)

)
inst_antirebote 
( 
 .in (boton),
 .clk (clk),
 .out (clk_conv)
)

conversor
#(		.N(4) ,
		.logN (2)
		
)

inst_conversor
(
	.entrada_serie(sw1),
   .patron_A(sw_patron_A),
   .patron_B(sw_patron_B),
   .patron_C(sw_patron_C),
   .clk(clk_conv),
   .out_A(out_A),
   .out_B(out_B),
	.out_C(out_C),
   .out_par(ledpar),
	 .out_serie(ledser)
)

endmodule
