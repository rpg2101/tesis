`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:32:12 04/09/2013 
// Design Name: 
// Module Name:    led 
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
module led(
		input sw1,
		input sw2,
		input sw3,
		input sw4,
		output led1,
		output led2,
		output led3,
		output led4
    );
 
	assign led1 = sw1;
	assign led2 = sw2;
	assign led3 = sw3;
	assign led4 = sw4;
	
endmodule
