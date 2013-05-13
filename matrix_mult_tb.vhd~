-- Para usar este testbench, tener en cuenta lo siguiente:
-- 1) Reemplace el nombre del componente por el nombre de la entidad a probar(Ctrl+H)
-- 2) Asegúrese que los puertos y parámetros coinciden en nombre
-- 3) En este testbench se instancian dos matrices con configuraciones diferentes
-- verifique que ambas estén correctamente conectadas
-- 4) Incluya en el proyecto el archivo txt_util.vhd
-- 5) Corra la simulación y verifique la asuencia de mensajes de error
-- 6) El testbench genenra varios ciclos con muestras aleatorias
-- 7) Verifique la ausencia de mensajes de error
-- 8) En caso de errores, compare la matrizOX contra la matrizOX_uut, donde la 
-- primera es la referencia, la segunda la salida del bloque bajo prueba y X
-- es el número de la matriz que falla (1 y/o 2)

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.math_real.ALL;
USE ieee.numeric_std.ALL;
USE work.txt_util.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY matrix_mult_tb IS
END matrix_mult_tb;

ARCHITECTURE behavior OF matrix_mult_tb IS 
  
  -- Constantes
  constant N1      : integer := 2;
  constant M1      : integer := 3;
  constant P1      : integer := 2;
  constant LOG2_M1 : integer := 2;
  constant NBITS1  : integer := 4;

  constant N2      : integer := 3;
  constant M2      : integer := 4;
  constant P2      : integer := 3;
  constant LOG2_M2 : integer := 2;
  constant NBITS2  : integer := 8;
  
  constant NITER   : integer:=50;
  constant NBO1    : integer:=2*NBITS1+LOG2_M1;
  constant NBO2    : integer:=2*NBITS2+LOG2_M2;

  -- Componente bajo prueba
  COMPONENT matrix_mult
    GENERIC(N        : integer := 2;
            M        : integer := 3;
            P        : integer := 2;
            LOG2_N   : integer := 1;
            LOG2_M   : integer := 2;
            LOG2_P   : integer := 1;
            NBITS    : integer := 4);	 
    PORT(
      clock : IN  std_logic;
      A     : IN  std_logic_vector(N*M*NBITS-1 downto 0);
      B     : IN  std_logic_vector(M*P*NBITS-1 downto 0);
      O     : OUT std_logic_vector(N*P*(NBITS*2+LOG2_M)-1 downto 0)
      );
  END COMPONENT;
  
  -- Entradas
  signal clock : std_logic := '0';
  signal A1    : std_logic_vector(N1*M1*NBITS1-1 downto 0) := (others => '0');
  signal B1    : std_logic_vector(M1*P1*NBITS1-1 downto 0) := (others => '0');
  signal A2    : std_logic_vector(N2*M2*NBITS2-1 downto 0) := (others => '0');
  signal B2    : std_logic_vector(M2*P2*NBITS2-1 downto 0) := (others => '0');

  -- Salidas
  signal O1    : std_logic_vector(N1*P1*(NBITS1*2+LOG2_M1)-1 downto 0);
  signal O2    : std_logic_vector(N2*P2*(NBITS2*2+LOG2_M2)-1 downto 0);	

  -- Período de reloj
  constant clock_period : time := 10 ns;
  
  shared variable semilla1 :integer:=844396720;  -- semilla aleatoria 1
  shared variable semilla2 :integer:=821616997;  -- semilla aleatoria 2

  impure function random_int(constant limite_inferior : in integer;
                             constant limite_superior : in integer) return integer is
    variable resultado : integer;
    variable tmp_real  : real;  
  begin
    uniform(semilla1,semilla2,tmp_real);
    resultado:=integer(trunc((tmp_real * real(limite_superior - limite_inferior)) + real(limite_inferior)));
    return resultado;
  end random_int;			 
  
  type tipo_matrizA1 is array (integer range 0 to N1-1, integer range 0 to M1-1) of integer;
  type tipo_matrizB1 is array (integer range 0 to M1-1, integer range 0 to P1-1) of integer;
  type tipo_matrizA2 is array (integer range 0 to N2-1, integer range 0 to M2-1) of integer;
  type tipo_matrizB2 is array (integer range 0 to M2-1, integer range 0 to P2-1) of integer;
  type tipo_matrizO1 is array (integer range 0 to N1-1, integer range 0 to P1-1) of integer;
  type tipo_matrizO2 is array ( 0 to N2-1,  0 to P2-1) of integer;

  signal matrizA1 : tipo_matrizA1;
  signal matrizA2 : tipo_matrizA2;
  signal matrizB1 : tipo_matrizB1;
  signal matrizB2 : tipo_matrizB2;
  signal matrizO1,matrizO1_d : tipo_matrizO1;
  signal matrizO2,matrizO2_d : tipo_matrizO2;
  signal matrizO1_uut : tipo_matrizO1;
  signal matrizO2_uut : tipo_matrizO2; 
  
BEGIN
  
  -- Matriz 1
  uut1: matrix_mult
    GENERIC MAP(
      N      => N1,
      M      => M1,
      P      => P1,
      LOG2_M => LOG2_M1,
      NBITS  => NBITS1)	 		  		
    PORT MAP (
      clock => clock,
      A     => A1,
      B     => B1,
      O     => O1
      );

  -- Matriz 2
  uut2: matrix_mult
    GENERIC MAP(
      N      => N2,
      M      => M2,
      P      => P2,
      LOG2_M => LOG2_M2,
      NBITS  => NBITS2)	 		  		
    PORT MAP (
      clock => clock,
      A     => A2,
      B     => B2,
      O     => O2
      );

  -- Generación de reloj
  clock_process :process
  begin
    clock <= '0';
    wait for clock_period/2;
    clock <= '1';
    wait for clock_period/2;
  end process;

  -- Proceso de prueba
  stim_proc: process
    variable acumulador : integer;
    variable data       : integer;
  begin
    for qq in 0 to NITER loop
      -- Carga de matrices de prueba
      -- Matriz A1
      for i in 0 to N1-1 loop
        for j in 0 to M1-1 loop
          data:=random_int(0,2**NBITS1-1);	              
          matrizA1(i,j)<=data;
          A1((i*M1+j+1)*NBITS1-1 downto (i*M1+j)*NBITS1)<=STD_LOGIC_VECTOR(to_unsigned(data,NBITS1));
        end loop;		
      end loop;		
      -- Matriz A2
      for i in 0 to N2-1 loop
        for j in 0 to M2-1 loop
          data:=random_int(0,2**NBITS2-1);
          matrizA2(i,j)<=data;	      
          A2((i*M2+j+1)*NBITS2-1 downto (i*M2+j)*NBITS2)<=STD_LOGIC_VECTOR(to_unsigned(data,NBITS2));
        end loop;
      end loop;		
      -- Matriz B1
      for i in 0 to M1-1 loop
        for j in 0 to P1-1 loop
          data:=random_int(0,2**NBITS1-1);
          matrizB1(i,j)<=data;	      
          B1((i*P1+j+1)*NBITS1-1 downto (i*P1+j)*NBITS1)<=STD_LOGIC_VECTOR(to_unsigned(data,NBITS1));
        end loop;			
      end loop;		
      -- Matriz B2
      for i in 0 to M2-1 loop
        for j in 0 to P2-1 loop
          data:=random_int(0,2**NBITS2-1);
          matrizB2(i,j)<=data;
          B2((i*P2+j+1)*NBITS2-1 downto (i*P2+j)*NBITS2)<=STD_LOGIC_VECTOR(to_unsigned(data,NBITS2));
        end loop;			
      end loop;			
      
      wait until rising_edge(clock);	
      -- Cálculo de los resultados		
      -- Matriz O1
      for i in 0 to N1-1 loop
        for j in 0 to P1-1 loop
          acumulador:=0;
          for k in 0 to M1-1 loop
            acumulador:=acumulador+matrizA1(i,k)*matrizB1(k,j);
          end loop;
          matrizO1(i,j)<=acumulador;
          matrizO1_uut(i,j)<=CONV_INTEGER(O1(i*P1*NBO1+(j+1)*NBO1-1 downto i*P1*NBO1+j*NBO1));
        end loop;
      end loop;
      -- Matriz O2
      for i in 0 to N2-1 loop
        for j in 0 to P2-1 loop
          acumulador:=0;
          for k in 0 to M2-1 loop
            acumulador:=acumulador+matrizA2(i,k)*matrizB2(k,j);
          end loop;
          matrizO2(i,j)<=acumulador;
          matrizO2_uut(i,j)<=CONV_INTEGER(O2(i*P2*NBO2+(j+1)*NBO2-1 downto i*P2*NBO2+j*NBO2));
        end loop;
      end loop;
      -- Retardo de un ciclo para la verificación
      matrizO2_d<=matrizO2;
      matrizO1_d<=matrizO1;
      wait until rising_edge(clock);	
      
      -- Verificación de los resultados		
      if (qq >2) then
        -- Matriz 1
        for i in 0 to N1-1 loop
          for j in 0 to P1-1 loop
            assert matrizO1_d(i,j)=matrizO1_uut(i,j) 
              report "Error en la fila "&str(i)&" columna "&str(j)&" de la matriz 1"
              severity error;
          end loop;
        end loop;
        -- Matriz 2
        for i in 0 to N2-1 loop
          for j in 0 to P2-1 loop
            assert matrizO2_d(i,j)=matrizO2_uut(i,j) 
              report "Error en la fila "&str(i)&" columna "&str(j)&" de la matriz 2"
              severity error;
          end loop;
        end loop;
      end if;	
    end loop;		
    wait;
  end process;

END;
