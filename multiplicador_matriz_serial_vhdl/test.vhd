--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:51:54 05/07/2013
-- Design Name:   
-- Module Name:   Z:/multiplicador_matriz_serial_vhdl/test.vhd
-- Project Name:  multiplicador_matriz_serial_vhdl
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mult
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mult
    PORT(
         elem_A : IN  std_logic_vector(7 downto 0);
         elem_B : IN  std_logic_vector(7 downto 0);
         mat_out : OUT  std_logic_vector(19 downto 0);
         clk : IN  std_logic;
         clk_en : IN  std_logic;
         rst : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal elem_A : std_logic_vector(7 downto 0) := (others => '0');
   signal elem_B : std_logic_vector(7 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal clk_en : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal mat_out : std_logic_vector(19 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mult PORT MAP (
          elem_A => elem_A,
          elem_B => elem_B,
          mat_out => mat_out,
          clk => clk,
          clk_en => clk_en,
          rst => rst
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;

 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		wait for 10 ns;
		elem_A<= "01011010";
		elem_B<= "11101110";
		wait for 10 ns;
		rst <= '1';
		wait for 10 ns;
		rst <= '0';
		wait for 10 ns;
		clk_en <= '1';
      wait;
   end process;

END;
