require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#fdiv" do
  it "performs floating-point division between self and a Fixnum" do
    8.fdiv(7).should be_close(1.14285714285714, TOLERANCE)
  end

  it "performs floating-point division between self and a Bignum" do
    8.fdiv(bignum_value).should be_close(8.673617379884035e-19, TOLERANCE)
  end

  it "performs floating-point division between self and a Float" do
    8.fdiv(9.0).should be_close(0.888888888888889, TOLERANCE)
  end

  it "returns NaN when the argument is NaN" do
    -1.fdiv(nan_value).nan?.should be_true
    1.fdiv(nan_value).nan?.should be_true
  end

  it "returns Infinity when the argument is 0" do
    1.fdiv(0).infinite?.should == 1
  end

  it "returns -Infinity when the argument is 0 and self is negative" do
    -1.fdiv(0).infinite?.should == -1
  end

  it "returns Infinity when the argument is 0.0" do
    1.fdiv(0.0).infinite?.should == 1
  end

  it "returns -Infinity when the argument is 0.0 and self is negative" do
    -1.fdiv(0.0).infinite?.should == -1
  end

  it "raises a TypeError when argument isn't numeric" do
    lambda { 1.fdiv(mock('non-numeric')) }.should raise_error(TypeError)
  end

  it "raises an ArgumentError when passed multiple arguments" do
    lambda { 1.fdiv(6,0.2) }.should raise_error(ArgumentError)
  end

  it "follows the coercion protocol" do
    (obj = mock('10')).should_receive(:coerce).with(1).and_return([1, 10])
    1.fdiv(obj).should == 0.1
  end
end
