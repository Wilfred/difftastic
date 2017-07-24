require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#<=" do
  it "returns true if self is less than or equal to other" do
    (2.0 <= 3.14159).should == true
    (-2.7183 <= -24).should == false
    (0.0 <= 0.0).should == true
    (9_235.9 <= bignum_value).should == true
  end

  it "raises an ArgumentError when given a non-Numeric" do
    lambda { 5.0 <= "4"       }.should raise_error(ArgumentError)
    lambda { 5.0 <= mock('x') }.should raise_error(ArgumentError)
  end
end
