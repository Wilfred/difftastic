require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#nan?" do
  it "returns true if self is not a valid IEEE floating-point number" do
    0.0.nan?.should == false
    -1.5.nan?.should == false
    nan_value.nan?.should == true
  end
end
