require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#infinite?" do
  it "returns nil for finite values" do
    1.0.infinite?.should == nil
  end

  it "returns 1 for positive infinity" do
    infinity_value.infinite?.should == 1
  end

  it "returns -1 for negative infinity" do
    (-infinity_value).infinite?.should == -1
  end

  it "returns nil for NaN" do
    nan_value.infinite?.should == nil
  end
end
