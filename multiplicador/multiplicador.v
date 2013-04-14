`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:17 04/13/2013 
// Design Name: 
// Module Name:    multiplicador 
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
module multiplicador
#(
	parameter Bit = 3,
	parameter M = 4,
	parameter N = 2,
	parameter P = 2
)
(
    input [(N*M*Bit)-1:0] in1,
    input [(M*Bit)-1:0] in2,
    output[ N*Bit*2-1:0] out
);
	
	generate
	genvar i ,j , k ;
	
	for (i = 0 ; i < N ; i = i+1)
	begin : filasmatrizA
	
	wire [Bit*2-1:0] interna     [M-1:0];
	wire [Bit*2-1:0] sumainterna [M-1:0];
	
	for (k = 0 ; k < M ; k = k +1 )
	begin : sen_interna
		assign interna[k] = in1[i*M*Bit+(k+1)*Bit-1 -: Bit] * in2[(k+1)*Bit-1 -: Bit];
		if (k==0) 
		begin
			assign sumainterna [k] = interna [k]; 
	   end
		else
		begin 
			assign sumainterna [k] = interna [k] + sumainterna [k-1] ;
		end	
	end//k
	assign out [(i+1)*(Bit*2)-1 -: Bit*2] = sumainterna [M-1];
	
	
	//end// j
	end// i
	endgenerate
		
endmodule
