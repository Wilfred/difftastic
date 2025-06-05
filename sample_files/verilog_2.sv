module blinky(
  input clk, input rst,
  output led
);
  reg[7:0] counter;
  always_ff @(posedge clk)
    if (rst) counter <= 0;
    else counter <= counter + 1;

  assign led = counter < 'h80;
endmodule
