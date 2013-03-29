`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:28:19 03/25/2013 
// Design Name: 
// Module Name:    conversor 
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
module conversor
#(parameter N=4)
(
    input in_ser,
    input in_A,
    input in_B,
    input in_C,
    input clk,
    output out_A,
    output out_B,
    output out_C,
    output [N-1:0] out_par
    );

	reg dato [N-1:0] = 4b'zzzz;
	integer cuenta = 0;
	
	always @(posedge clk)
	begin
		case (

	end
endmodule
