----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:51:58 04/16/2013 
-- Design Name: 
-- Module Name:    multi_compuerta - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multi_compuerta is
    Port ( t_en : in  STD_LOGIC;
           A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           sel : in  STD_LOGIC_VECTOR (1 downto 0);
			  S : out STD_LOGIC);
end multi_compuerta;


architecture Behavioral of multi_compuerta is

signal interna : STD_LOGIC_vector(3 downto 0);
signal salida_mux : STD_LOGIC ;
begin
interna (0) <= A and B;
interna (1) <= A nand B;
interna (2) <= A nor B;
interna (3) <= A or B;
with sel select
salida_mux <= interna(0) when "00",
				  interna(1) when "01",
				  interna(2) when "10",
				  interna(3) when "11",
				  'Z' when others;
S <= salida_mux when T_en='0' else 'Z';

end Behavioral;

