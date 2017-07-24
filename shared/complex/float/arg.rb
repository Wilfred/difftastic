require File.expand_path('../../../../spec_helper', __FILE__)

describe :float_arg, shared: true do
  it "returns NaN if NaN" do
    f = nan_value
    f.send(@method).nan?.should be_true
  end

  it "returns self if NaN" do
    f = nan_value
    f.send(@method).should equal(f)
  end

  it "returns 0 if positive" do
    1.0.send(@method).should == 0
  end

  it "returns 0 if +0.0" do
    0.0.send(@method).should == 0
  end

  it "returns 0 if +Infinity" do
    infinity_value.send(@method).should == 0
  end

  it "returns Pi if negative" do
    (-1.0).send(@method).should == Math::PI
  end

  # This was established in r23960
  it "returns Pi if -0.0" do
    (-0.0).send(@method).should == Math::PI
  end

  it "returns Pi if -Infinity" do
    (-infinity_value).send(@method).should == Math::PI
  end
end
