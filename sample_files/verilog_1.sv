module blinky(
  input clk,
  output led
);
  reg[7:0] counter;
  always_ff @(posedge clk) begin
    counter <= counter + 1;
  end

  assign led = counter > 'h80;
endmodule
