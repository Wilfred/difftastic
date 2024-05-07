library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity blinky is
	port (
		clk: in std_logic;
		led: out std_logic
	);
end entity;

architecture a of blinky is
	constant CLK_FREQ: positive := 12_000_000;
	signal counter: unsigned(23 downto 0) := (others => '0');
begin
	process(clk)
	begin
		if rising_edge(clk) then
			if to_integer(counter) = CLK_FREQ / 2 then
				led <= not led;
				counter <= (others => '0');
			else
				counter <= counter + 1;
			end if;
		end if;
	end process;
end architecture;
