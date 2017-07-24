require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#+@" do
  it "returns the same value with same sign (twos complement)" do
    34.56.send(:+@).should == 34.56
    -34.56.send(:+@).should == -34.56
    0.0.send(:+@).should eql(0.0)
  end
end
