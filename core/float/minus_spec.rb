require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#-" do
  it "returns self minus other" do
    (9_237_212.5280 - 5_280).should be_close(9231932.528, TOLERANCE)
    (2_560_496.1691 - bignum_value).should be_close(-9223372036852215808.000, TOLERANCE)
    (5.5 - 5.5).should be_close(0.0,TOLERANCE)
  end
end
