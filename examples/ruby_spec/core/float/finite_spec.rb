require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#finite?" do
  it "returns true for finite values" do
    3.14159.finite?.should == true
  end

  it "returns false for positive infinity" do
    infinity_value.finite?.should == false
  end

  it "returns false for negative infinity" do
    (-infinity_value).finite?.should == false
  end

  it "returns false for NaN" do
    nan_value.finite?.should == false
  end
end
