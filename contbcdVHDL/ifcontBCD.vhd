----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:01:36 04/19/2013 
-- Design Name: 
-- Module Name:    ifcontBCD - Behavioral 
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

entity ifcontBCD is
		Generic (N : integer := 4 ; log2 : integer := 2 ; contador : integer := 2500000 ; log2cont : integer := 22);
		Port ( --digitoBCD : in  STD_LOGIC_VECTOR (N*4-1 downto 0);
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  salida : out  STD_LOGIC_VECTOR (0 to 6);
           drivers : out  STD_LOGIC_VECTOR (3 downto 0));
end ifcontBCD;

architecture Behavioral of ifcontBCD is
   signal digitoBCD :  STD_LOGIC_VECTOR (N*4-1 downto 0) ;
	signal i : std_logic_vector (log2-1 downto 0) := (others =>'0'); 
	signal tmp : std_logic_vector (3 downto 0):= (others =>'0');
	signal dri : std_logic_vector (3 downto 0) := "1110";
	type tipo_arreglo is array (0 to N-1) of std_logic_vector(3 downto 0);
	signal arreglo : tipo_arreglo;
	signal cuenta : std_logic_vector (log2cont-1 downto 0) := (others => '0');
	signal cuenta_1s : std_logic_vector (3 downto 0) := (others => '0');
	signal clk_1s : std_logic := '0';
	signal sel : std_logic_vector (1 downto 0) := "00";
	signal salida_aux : std_logic_vector (3 downto 0) := "0000";
	
	COMPONENT contador_BCD
   PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
			clk_en : IN std_logic;
			sel : IN std_logic_vector (1 downto 0);
         sal : OUT  std_logic_vector(N*4-1 downto 0);
			sal_aux : OUT std_logic_vector (3 downto 0)
        );
   END COMPONENT;
    
begin
   instaciaBCD : contador_BCD PORT MAP (
          clk => clk,
          rst => rst,
			 clk_en => clk_1s,
			 sel => sel,
          sal => digitoBCD,
			 sal_aux => salida_aux
          
   );
	mapeo_digitos:
   for ii in 0 to N-1 generate
   begin
	arreglo(ii)<=digitoBCD((ii+1)*4-1 downto ii*4);
   end generate;	
	process (clk)
	begin
		if (clk'event and clk='1') then
			if (rst = '1') then 
				cuenta <= (others => '0');
				dri <= "1110";
				i<= (others => '0');
			else 
				if ( conv_integer(cuenta) = contador) then
				 if ( cuenta_1s = "1111" ) then
				    cuenta_1s <= (others => '0');
					 clk_1s <= '1';
				 else
					 clk_1s <= '0';
					 cuenta_1s <= cuenta_1s + 1 ;
				 end if;
					dri <= dri(2 downto 0) & dri(3);
					i <= i+1;
					cuenta <= (others=>'0');
				else
					cuenta <= cuenta +1 ;
					clk_1s <= '0';
				end if;
				
			end if ;
		end if ;
			
	end process;
	
	
	process (tmp)
		begin
			case tmp is
				when "0000" => salida <= "0000001";
				when "0001" => salida <= "1001111";
				when "0010" => salida <= "0010010";
				when "0011" => salida <= "0000110";
				when "0100" => salida <= "1001100";
				when "0101" => salida <= "0100100";
				when "0110" => salida <= "0100000";
				when "0111" => salida <= "0001111";
				when "1000" => salida <= "0000000";
				when "1001" => salida <= "0000100";
				when others => salida <= "1111111";
			end case;
	end process;
	

	tmp <= arreglo(conv_integer(i));
	drivers <= dri;
end Behavioral;

