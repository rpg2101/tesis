----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:56:07 04/23/2013 
-- Design Name: 
-- Module Name:    semaforo - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity semaforo is
    Port ( pulsador : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           luces : out  STD_LOGIC_VECTOR (3 downto 0));
end semaforo;

architecture Behavioral of semaforo is
type estados is (verde,amarillo,rojo,rojo_blanco);
signal estado,estado_sig :estados;
signal cuenta : std_logic_vector (3 downto 0) := "0000";
signal presionado : std_logic ;
signal tiempo : std_logic_vector(3 downto 0) ;
signal fin_cuenta : std_logic := '0';

begin


process (clk,rst)
begin
	if (clk ='1' and clk'event) then
		if (rst ='1') then 
		estado <= verde;
		elsif (fin_cuenta = '1') then
		estado <= estado_sig;
		
		end if;
	end if;
end process;

process(clk)
begin
	if (clk ='1' and clk'event) then
		if (conv_integer(cuenta)=tiempo)then
			fin_cuenta <= '1';
			cuenta <= "0000";
		else 
		   fin_cuenta <='0';
			cuenta<= cuenta +1;
		end if;	
	end if;
end process;

process (estado,pulsador) 
begin
	case estado is
          when verde =>  	estado_sig <=amarillo;
									
			 when	amarillo=>	estado_sig <=rojo;
								
			 when rojo=> 		estado_sig <= verde;
									
			 when rojo_blanco => estado_sig <= verde;
									
			 when others => 	estado_sig <=verde;
									
	end case;
end process;
								
with estado select
luces <= "0001" when verde,
			"0010" when amarillo,
			"0100" when rojo,
			"1100" when rojo_blanco;
			
with estado select
tiempo <= "1001" when verde,
			"0010" when amarillo,
			"0100" when rojo,
			"1001" when rojo_blanco;
			--"1001" when others;

end Behavioral;

