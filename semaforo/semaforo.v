`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:44:13 04/14/2013 
// Design Name: 
// Module Name:    semaforo 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module semaforo
#(
	parameter t_largo = 10,
	parameter t_corto = 3
)
(
    input pulsador,
    input clk,
	 input rst,
	 output  rojo,
	 output  amarillo,
	 output  verde,
	 output  blanco
);
	 
	 

localparam E0  = 0 , E1 = 1 , E2  = 2;
reg [1:0] estado ;
reg [1:0] sig_estado ; 

reg [3:0] cuenta = 0;

always @ (estado or pulsador)
begin
	case (estado)
		E0 : sig_estado <= E1;
		E1 : sig_estado <= E2;
		E2 : sig_estado <= E0;
	endcase
end	


always @ (posedge clk)
begin
	if (rst) 
	begin
		estado <= E0;
		cuenta <= 0;
	end
	
	else
	begin
		if (estado !=  E1  && cuenta ==10) 
		begin
			estado <= sig_estado;
			cuenta <= 0;
		end
		else if (estado ==  E1  && cuenta ==3) 
		begin
			estado <= sig_estado;
			cuenta <= 0;
		end
		else
		begin
			cuenta <= cuenta + 1;
		end
	end
end

assign verde = (estado == E0);
assign amarillo = (estado == E1);
assign rojo = (estado == E2);
assign blanco = (estado == E2);

endmodule
