require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#next_float" do
  it "returns a float the smallest possible step greater than the receiver" do
    barely_positive = 0.0.next_float
    barely_positive.should == 0.0.next_float

    barely_positive.should > 0.0
    barely_positive.should < barely_positive.next_float

    midpoint = barely_positive / 2
    [0.0, barely_positive].should include midpoint
  end

  it "returns Float::INFINITY for Float::INFINITY" do
    Float::INFINITY.next_float.should == Float::INFINITY
  end

  it "steps directly between MAX and INFINITY" do
    (-Float::INFINITY).next_float.should == -Float::MAX
    Float::MAX.next_float.should == Float::INFINITY
  end

  it "steps directly between 1.0 and 1.0 + EPSILON" do
    1.0.next_float.should == 1.0 + Float::EPSILON
  end

  it "steps directly between -1.0 and -1.0 + EPSILON/2" do
    (-1.0).next_float.should == -1.0 + Float::EPSILON/2
  end

  it "reverses the effect of prev_float for all Floats except INFINITY and +0.0" do
    num = -rand
    num.prev_float.next_float.should == num
  end

  it "returns negative zero when stepping upward from just below zero" do
    x = (-0.0).prev_float.next_float
    (1/x).should == -Float::INFINITY
  end

  it "gives the same result for -0.0 as for +0.0" do
    (-0.0).next_float.should == (0.0).next_float
  end

  it "returns NAN if NAN was the receiver" do
    Float::NAN.next_float.nan?.should == true
  end
end
