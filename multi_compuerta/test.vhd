--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:29:19 04/16/2013
-- Design Name:   
-- Module Name:   C:/Documents and Settings/multi_compuerta/test.vhd
-- Project Name:  multi_compuerta
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multi_compuerta
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
 
    COMPONENT multi_compuerta
    PORT(
         t_en : IN  std_logic;
         A : IN  std_logic;
         B : IN  std_logic;
         sel : IN  std_logic_vector(1 downto 0);
         S : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal t_en : std_logic := '0';
   signal A : std_logic := '0';
   signal B : std_logic := '0';
   signal sel : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal S : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: multi_compuerta PORT MAP (
          t_en => t_en,
          A => A,
          B => B,
          sel => sel,
          S => S
        );

   -- Clock process definitions
   --<clock>_process :process
   --begin
	--	<clock> <= '0';
	--	wait for <clock>_period/2;
	--	<clock> <= '1';
	--	wait for <clock>_period/2;
   --end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      --wait for <clock>_period*10;

      -- insert stimulus here 
		A <= '1';
		B <= '0';
		wait for 30 ns;	
		sel <= "01";
		wait for 30 ns;	
		sel <= "10";
		wait for 30 ns;	
		sel <= "11";
		
      wait;
   end process;

END;
