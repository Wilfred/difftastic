require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Math.asinh" do
  it "returns a float" do
    Math.asinh(1.5).should be_kind_of(Float)
  end

  it "returns the inverse hyperbolic sin of the argument" do
    Math.asinh(1.5).should be_close(1.19476321728711, TOLERANCE)
    Math.asinh(-2.97).should be_close(-1.8089166921397, TOLERANCE)
    Math.asinh(0.0).should == 0.0
    Math.asinh(-0.0).should == -0.0
    Math.asinh(1.05367e-08).should be_close(1.05367e-08, TOLERANCE)
    Math.asinh(-1.05367e-08).should be_close(-1.05367e-08, TOLERANCE)
    # Default tolerance does not scale right for these...
    #Math.asinh(94906265.62).should be_close(19.0615, TOLERANCE)
    #Math.asinh(-94906265.62).should be_close(-19.0615, TOLERANCE)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.asinh("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.asinh(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.asinh(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.asinh(MathSpecs::Float.new).should be_close(0.881373587019543, TOLERANCE)
  end
end

describe "Math#asinh" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:asinh, 19.275).should be_close(3.65262832292466, TOLERANCE)
  end
end
