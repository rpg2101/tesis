`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:52:03 03/30/2013 
// Design Name: 
// Module Name:    mult_mat 
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
module mult_mat
#(	parameter Bit=3,
	parameter N=2,
	parameter M=2,
	parameter P=2
	
)
(
    input clk_enable,
    input clk,
    input [Bit*N*M-1:0] matriz_A,
    input [Bit*M*P-1:0] matriz_B,
    output reg [Bit*N*P-1:0] matriz_resultado
 );
	 
	reg [Bit-1:0]acum = 0;
	wire[M-1:0] interna;
	
   generate 
	genvar i , j , k;
	for(i=0;i<N;i=i+1)
	begin : i_for
		for (j=0;j<P;j=j+1)
		begin  : j_for
			for (k=0;k<M;k=k+1)
			begin : k_for
						acum = acum + matriz_A[(i*M*Bit)+(k+1)*(Bit-1)-:Bit] * matriz_B[(j*M*Bit)+(k+1)*(Bit-1)-:Bit];	
			end
			matriz_resultado [(i*M*Bit)+(j+1)*(Bit-1)-:Bit] = acum;
		end //for j
	end//for i
	endgenerate
endmodule

