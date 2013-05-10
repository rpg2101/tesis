----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:42:56 04/29/2013 
-- Design Name: 
-- Module Name:    mult - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mult is
	generic(	N:integer:=2;
				M:integer:=2;
				P:integer:=2;
				N_bit:integer:=2;
				log2M : integer:=1;
				log2N : integer:=1;
				log2P : integer:=1;
				E_bit : integer:= 5);--(2 * N_bit) + log2M);
				 
			
    Port ( elem_A : in  STD_LOGIC_VECTOR (N*M*N_bit-1 downto 0);
           elem_B : in  STD_LOGIC_VECTOR (M*P*N_bit-1 downto 0);
			  mat_out : out  STD_LOGIC_VECTOR (N*P*E_bit-1 downto 0) := (others=>'0');
           clk : in  STD_LOGIC;
			  clk_en : in  STD_LOGIC;
           rst : in  STD_LOGIC);
end mult;

architecture Behavioral of mult is

	type tipo_matrizA is array (integer range N-1 downto 0, integer range M-1 downto 0) of std_logic_vector (N_bit-1 downto 0);
	type tipo_matrizB is array (integer range M-1 downto 0, integer range P-1 downto 0) of std_logic_vector (N_bit-1 downto 0);
	type tipo_matrizR is array (integer range N-1 downto 0, integer range P-1 downto 0) of std_logic_vector (E_bit-1 downto 0);
  
	signal matrizA   : tipo_matrizA;
	signal matrizB   : tipo_matrizB;
	signal matrizR   : tipo_matrizR;
	
	
	signal producto  : unsigned(E_bit-2 downto 0):=(others=>'0');
	signal acumulador: unsigned(E_bit-1 downto 0):=(others=>'0');
	
   signal contadorM:std_logic_vector (log2M-1 downto 0):=(others=>'0');
	signal contadorN:std_logic_vector (log2N-1 downto 0):=(others=>'0');
	signal contadorP:std_logic_vector (log2P-1 downto 0):=(others=>'0');

begin	
mapeo_Ai :
for i in 0 to N-1 generate	
	mapeo_Aj:
	for j in 0 to M-1 generate
	constant indice : integer := i*M*N_bit+(j+1)*N_bit; 	
	begin
		matrizA (i,j) <= elem_A (indice-1 downto indice-N_bit );
	end generate;
end generate;

mapeo_Bi :
for i in 0 to M-1 generate	
	mapeo_Bj :
	for j in 0 to P-1 generate
	constant indice : integer := i*P*N_bit+(j+1)*N_bit; 	
	begin
		matrizB (i,j) <= elem_B (indice-1 downto indice-N_bit );
	end generate;
end generate;

mapeo_Ri :
for i in 0 to N-1 generate	
	mapeo_Rj :
	for j in 0 to P-1 generate
	constant indice : integer := i*P*E_bit+(j+1)*E_bit; 	
	begin
		mat_out (indice-1 downto indice-E_bit ) <= matrizR (i,j);
	end generate;
end generate;


process (clk)
	variable op1 : unsigned (N_bit-1 downto 0) ;
	variable op2 : unsigned (N_bit-1 downto 0) ;
	
	begin
	if (clk'event and clk='1')then
		if(rst='1')then
			producto <= (others=>'0');
			acumulador<= (others=>'0');
			contadorM<=(others=>'0');
			contadorN<=(others=>'0');
			contadorP<=(others=>'0');
			
		elsif(clk_en='1') then
			
			if (conv_integer(contadorM) < M-1) then
				op1 := unsigned (matrizA (conv_integer(contadorN),conv_integer(contadorM)));
				op2 := unsigned (matrizB (conv_integer(contadorM),conv_integer(contadorP)));
				
				producto <= op1 *  op2;
				
				acumulador <= acumulador + producto;
				contadorM <= contadorM + 1;
			else 
				matrizR (conv_integer(contadorN),conv_integer(contadorP)) <= std_logic_vector(acumulador);
				acumulador <= (others=>'0');
				contadorM <= (others=>'0');
				if(conv_integer(contadorP) < P-1) then
					contadorP <= contadorP + 1;
				else
					contadorP <= (others=>'0');
					if(conv_integer(contadorN) < N-1) then
						contadorN <= contadorN + 1;
					end if;
				end if;
			end if;
		end if;
	end if;	
end process;

end Behavioral;

