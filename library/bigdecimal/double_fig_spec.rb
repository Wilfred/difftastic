require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal.double_fig" do
  # The result depends on the CPU and OS
  it "returns the number of digits a Float number is allowed to have" do
    BigDecimal.double_fig.should_not == nil
  end
end
