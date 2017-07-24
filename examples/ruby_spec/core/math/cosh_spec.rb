require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Math.cosh" do
  it "returns a float" do
    Math.cosh(1.0).should be_kind_of(Float)
  end

  it "returns the hyperbolic cosine of the argument" do
    Math.cosh(0.0).should == 1.0
    Math.cosh(-0.0).should == 1.0
    Math.cosh(1.5).should be_close(2.35240961524325, TOLERANCE)
    Math.cosh(-2.99).should be_close(9.96798496414416, TOLERANCE)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.cosh("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.cosh(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.cosh(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.cosh(MathSpecs::Float.new).should be_close(1.54308063481524, TOLERANCE)
  end
end

describe "Math#cosh" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:cos, 3.1415).should be_close(-0.999999995707656, TOLERANCE)
  end
end
