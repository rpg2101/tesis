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
#(	parameter Bit=1,
	parameter N=2,
	parameter M=3,
	parameter P=3
	
)
(
    input clk_enable,
    input clk,
    input [Bit*N*M-1:0] matriz_A,
    input [Bit*M*P-1:0] matriz_B,
    output reg [Bit*N*P-1:0] matriz_resultado
 );
	 
	reg [Bit:0]acum;
	integer i,j,k;
	reg [Bit*N*M-1:0] mat_A = 0;
	reg [Bit*M*P-1:0] mat_B = 0;
	
	always @(posedge clk)
	begin
		if(clk_enable)
		begin
			mat_A <= matriz_A ;
			mat_B <= matriz_B ;
		end
	end
	
	
	always @(*)
	begin	
		acum = 0;
		for(i=0;i<N;i=i+1)
		begin
			for (j=0;j<P;j=j+1)
			begin
				acum = 0;
				for (k=0;k<M;k=k+1)
				begin
						acum = acum + mat_A[(i*M)+k] * mat_B[(k*P)];	
				end
				matriz_resultado [i*M+j] <= acum;
			end //for j
		end//for i
	end //always
endmodule
