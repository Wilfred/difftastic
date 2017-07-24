require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Math.frexp" do
  it "returns the normalized fraction and exponent" do
    frac, exp = Math.frexp(102.83)
    frac.should be_close(0.803359375, TOLERANCE)
    exp.should == 7
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.frexp("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    frac, _exp = Math.frexp(nan_value)
    frac.nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.frexp(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    frac, exp = Math.frexp(MathSpecs::Float.new)
    frac.should be_close(0.5, TOLERANCE)
    exp.should == 1
  end
end

describe "Math#frexp" do
  it "is accessible as a private instance method" do
    frac, exp = IncludesMath.new.send(:frexp, 2.1415)
    frac.should be_close(0.535375, TOLERANCE)
    exp.should == 2
  end
end
