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
#(parameter N=4 , parameter logN = 2)
(
    input entrada_serie,
    input [N-1:0]patron_A,
    input [N-1:0]patron_B,
    input [N-1:0]patron_C,
    input clk,
    output out_A,
    output out_B,
    output out_C,
    output [N-1:0] out_par,
	 output out_serie
    );

	reg [N-1:0]dato;
	reg [logN-1:0]cuenta = 0;
	
	
	always @(posedge clk)
	begin
		if(cuenta==(N))
			begin
			cuenta<=0;
			end
		//dato = { dato , entrada_serie };
		dato [cuenta] <= entrada_serie;
		cuenta<=cuenta+1;
			
	end
	
	assign out_serie = entrada_serie;
	assign out_par = dato;
	assign out_A= patron_A == dato;
	assign out_B= patron_B == dato;
	assign out_C= patron_C == dato;
	
endmodule
