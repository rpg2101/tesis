--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:07:07 04/22/2013
-- Design Name:   
-- Module Name:   C:/Documents and Settings/contbcdVHDL/testbcd.vhd
-- Project Name:  contbcdVHDL
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ifcontBCD
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
 
ENTITY testbcd IS
END testbcd;
 
ARCHITECTURE behavior OF testbcd IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ifcontBCD
    PORT(
         --digitoBCD : IN  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         rst : IN  std_logic;
         salida : OUT  std_logic_vector(6 downto 0);
         drivers : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   --signal digitoBCD : std_logic_vector(15 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal salida : std_logic_vector(6 downto 0);
   signal drivers : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ifcontBCD PORT MAP (
     --     digitoBCD => digitoBCD,
          clk => clk,
          rst => rst,
          salida => salida,
          drivers => drivers
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
		rst <= '1';
		wait for 10 ns;
		rst <= '0';
		wait for 10 ns;
		--digitoBCD <= "0001001101010000";
		wait for 10 ns;
		
      wait;
   end process;

END;
