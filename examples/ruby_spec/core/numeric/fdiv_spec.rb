require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/quo', __FILE__)

describe "Numeric#fdiv" do
  it "coerces self with #to_f" do
    numeric = mock_numeric('numeric')
    numeric.should_receive(:to_f).and_return(3.0)
    numeric.fdiv(0.5).should == 6.0
  end

  it "coerces other with #to_f" do
    numeric = mock_numeric('numeric')
    numeric.should_receive(:to_f).and_return(3.0)
    6.fdiv(numeric).should == 2.0
  end

  it "performs floating-point division" do
    3.fdiv(2).should == 1.5
  end

  it "returns a Float" do
    bignum_value.fdiv(Float::MAX).should be_an_instance_of(Float)
  end

  it "returns Infinity if other is 0" do
    8121.92821.fdiv(0).infinite?.should == 1
  end

  it "returns NaN if other is NaN" do
    3334.fdiv(nan_value).nan?.should be_true
  end
end
