library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity blinky is
	port (
		clk: in std_logic;
		led: out std_logic_vector(3 downto 0)
	);
end entity;

architecture a of blinky is
	constant CLK_FREQ: positive := 48_000_000;
	signal counter1: unsigned(25 downto 0) := (others => '0');
	signal counter2: unsigned(1 downto 0) := (others => '0');
begin
	process(clk)
	begin
		if rising_edge(clk) then
			if to_integer(counter1) = CLK_FREQ / 2 then
				counter2 <= counter2 + 1;
				counter1 <= (others => '0');
			else
				counter1 <= counter1 + 1;
			end if;
		end if;
	end process;

	process(counter2)
	begin
		for n in 0 to 3 loop
			led(n) <= '1' when to_integer(counter2) = n else '0';
		end loop;
	end process;
end architecture;
