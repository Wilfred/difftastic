require File.expand_path('../../../spec_helper', __FILE__)

describe "Float constant" do
  it "DIG is 15" do
    Float::DIG.should == 15
  end

  it "EPSILON is 2.220446049250313e-16" do
    Float::EPSILON.should == 2.0 ** -52
    Float::EPSILON.should == 2.220446049250313e-16
  end

  it "MANT_DIG is 53" do
    Float::MANT_DIG.should == 53
  end

  it "MAX_10_EXP is 308" do
    Float::MAX_10_EXP.should == 308
  end

  it "MIN_10_EXP is -308" do
    Float::MIN_10_EXP.should == -307
  end

  it "MAX_EXP is 1024" do
    Float::MAX_EXP.should == 1024
  end

  it "MIN_EXP is -1021" do
    Float::MIN_EXP.should == -1021
  end

  it "MAX is 1.7976931348623157e+308" do
    # See https://en.wikipedia.org/wiki/Double-precision_floating-point_format#Double-precision_examples
    Float::MAX.should == (1 + (1 - (2 ** -52))) * (2.0 ** 1023)
    Float::MAX.should == 1.7976931348623157e+308
  end

  it "MIN is 2.2250738585072014e-308" do
    Float::MIN.should == (2.0 ** -1022)
    Float::MIN.should == 2.2250738585072014e-308
  end

  it "RADIX is 2" do
    Float::RADIX.should == 2
  end

  it "INFINITY is the positive infinity" do
    Float::INFINITY.infinite?.should == 1
  end

  it "NAN is 'not a number'" do
    Float::NAN.nan?.should be_true
  end
end
