require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#zero?" do
  it "returns true if self is 0" do
    0.zero?.should == true
    -1.zero?.should == false
    1.zero?.should == false
  end
end
