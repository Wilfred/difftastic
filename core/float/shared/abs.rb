require File.expand_path('../../../../spec_helper', __FILE__)

describe :float_abs, shared: true do
  it "returns the absolute value" do
    -99.1.send(@method).should be_close(99.1, TOLERANCE)
    4.5.send(@method).should be_close(4.5, TOLERANCE)
    0.0.send(@method).should be_close(0.0, TOLERANCE)
  end

  it "returns 0.0 if -0.0" do
    (-0.0).send(@method).should be_positive_zero
  end

  it "returns Infinity if -Infinity" do
    (-infinity_value).send(@method).infinite?.should == 1
  end

  it "returns NaN if NaN" do
    nan_value.send(@method).nan?.should be_true
  end
end
