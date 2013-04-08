`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:11 04/08/2013 
// Design Name: 
// Module Name:    antirebote 
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
module antirebote
	#(
	 parameter N=4 ,
	 parameter A=3 ,
	 parameter B=1 ,
	 parameter log2 = 25
	)
	(
    input in,
    input clk,
    
	 output reg out
    );
	reg clk_en,
	output reg [N-1:0] latch;
	reg [log2-1:0] cuenta = 0;
	
	always @(posedge clk)
	begin
		if (clk_en) 
		begin
			latch <= {latch , in};
		end//if
		
	end // always
	
	always @(posedge clk)
	begin
		if (cuenta == 5000000)
		begin
			clk_en <= 1;
			cuenta <= 0;
		end	
		else
		begin
			clk_en <= 0 ;
			cuenta <= cuenta +1 ;
		end
	end
	
	assign a = ~& latch [A-1 : 0];
	assign b = &  latch [N-1 -: B];
	assign out = a & b ;
  
endmodule
