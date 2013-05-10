`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:22:24 03/26/2013 
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
#(parameter N=4)
(
    input clk,
    input rst,
	 input clk_en,
	 input [1:0] sel,
    output wire [N*4-1:0] sal,
	 output [3:0] sal_aux
);


	  
	wire [N-1:0] interna;
	wire [3:0] salidas [N-1:0];
	
	generate
	genvar i;
	for (i=0;i<N;i=i+1) 
	begin : iteracioncont 
		reg [3:0] cont = 0 ;
		wire cmp ,res, aux1 , aux2 , clk_en_int  ; 
	
		always @(posedge clk)
		begin
		   
			if (aux2)  
				cont <= 0;
			else
			begin 
				if (clk_en_int)
						cont <= cont + 1 ;
			end
			
		end //always	
		
		assign sal[(i+1)*4-1:i*4] = cont;
		assign cmp = cont == 9; 
		assign aux1 = cmp & clk_en_int ;
		assign aux2 = aux1 | rst;
		assign interna [i] = cmp;
		assign salidas [i] = sal[(i+1)*4-1:i*4];
		
		if (i!=0) 
		begin : primerelem
			assign clk_en_int = clk_en  &  res;
			assign res = & interna [i-1:0];
		end
		else begin
			assign clk_en_int = clk_en ;
		end 
	end //for
	endgenerate 
	
	assign sal_aux = salidas[sel];
	
endmodule

