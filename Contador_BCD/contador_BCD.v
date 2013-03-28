`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:44:50 03/25/2013 
// Design Name: 
// Module Name:    contador_BCD 
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
module contador_BCD

(
    input clk,
    input rst,
	 input clk_en,
    output wire [3:0] sal
    );
	  
	reg [3:0]  cont = 0 ;
	wire cmp , aux1 , aux2 ; 
	
	
	always @(posedge clk)
	begin
		if (aux2) 
			cont <= 0;
		else
		begin 
			if (clk_en)
			begin	
			cont <= cont + 1 ;
			end 
		end
	end
	assign sal = cont;
	assign cmp = cont == 9; 
	assign aux1 = cmp & clk_en ;
	assign aux2 = aux1 | rst;
	
	
	
endmodule


