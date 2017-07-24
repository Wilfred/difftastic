require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#prev_float" do
  it "returns a float the smallest possible step smaller than the receiver" do
    barely_negative = 0.0.prev_float
    barely_negative.should == 0.0.prev_float

    barely_negative.should < 0.0
    barely_negative.should > barely_negative.prev_float

    midpoint = barely_negative / 2
    [0.0, barely_negative].should include midpoint
  end

  it "returns -Float::INFINITY for -Float::INFINITY" do
    (-Float::INFINITY).prev_float.should == -Float::INFINITY
  end

  it "steps directly between MAX and INFINITY" do
    Float::INFINITY.prev_float.should == Float::MAX
    (-Float::MAX).prev_float.should == -Float::INFINITY
  end

  it "steps directly between 1.0 and 1.0 - EPSILON/2" do
    1.0.prev_float.should == 1.0 - Float::EPSILON/2
  end

  it "steps directly between -1.0 and -1.0 - EPSILON" do
    (-1.0).prev_float.should == -1.0 - Float::EPSILON
  end

  it "reverses the effect of next_float for all Floats except -INFINITY and -0.0" do
    num = rand
    num.next_float.prev_float.should == num
  end

  it "returns positive zero when stepping downward from just above zero" do
    x = 0.0.next_float.prev_float
    (1/x).should == Float::INFINITY
  end

  it "gives the same result for -0.0 as for +0.0" do
    (0.0).prev_float.should == (-0.0).prev_float
  end

  it "returns NAN if NAN was the receiver" do
    Float::NAN.prev_float.nan?.should == true
  end
end
