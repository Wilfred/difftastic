require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# erf method is the "error function" encountered in integrating the normal
# distribution (which is a normalized form of the Gaussian function).
describe "Math.erf" do
  it "returns a float" do
    Math.erf(1).should be_kind_of(Float)
  end

  it "returns the error function of the argument" do
    Math.erf(0).should be_close(0.0, TOLERANCE)
    Math.erf(1).should be_close(0.842700792949715, TOLERANCE)
    Math.erf(-1).should be_close(-0.842700792949715, TOLERANCE)
    Math.erf(0.5).should be_close(0.520499877813047, TOLERANCE)
    Math.erf(-0.5).should be_close(-0.520499877813047, TOLERANCE)
    Math.erf(10000).should be_close(1.0, TOLERANCE)
    Math.erf(-10000).should be_close(-1.0, TOLERANCE)
    Math.erf(0.00000000000001).should be_close(0.0, TOLERANCE)
    Math.erf(-0.00000000000001).should be_close(0.0, TOLERANCE)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.erf("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.erf(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.erf(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.erf(MathSpecs::Float.new).should be_close(0.842700792949715, TOLERANCE)
  end
end

describe "Math#erf" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:erf, 3.1415).should be_close(0.999991118444483, TOLERANCE)
  end
end
