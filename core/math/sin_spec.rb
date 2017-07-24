require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# sine : (-Inf, Inf) --> (-1.0, 1.0)
describe "Math.sin" do
  it "returns a float" do
    Math.sin(Math::PI).should be_kind_of(Float)
  end

  it "returns the sine of the argument expressed in radians" do
    Math.sin(Math::PI).should be_close(0.0, TOLERANCE)
    Math.sin(0).should be_close(0.0, TOLERANCE)
    Math.sin(Math::PI/2).should be_close(1.0, TOLERANCE)
    Math.sin(3*Math::PI/2).should be_close(-1.0, TOLERANCE)
    Math.sin(2*Math::PI).should be_close(0.0, TOLERANCE)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.sin("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.sin(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.sin(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.sin(MathSpecs::Float.new).should be_close(0.841470984807897, TOLERANCE)
  end
end

describe "Math#sin" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:sin, 1.21).should be_close(0.935616001553386, TOLERANCE)
  end
end
