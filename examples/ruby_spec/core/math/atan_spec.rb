require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# arctangent : (-Inf, Inf) --> (-PI/2, PI/2)
describe "Math.atan" do
  it "returns a float" do
    Math.atan(1).should be_kind_of(Float)
  end

  it "returns the arctangent of the argument" do
    Math.atan(1).should be_close(Math::PI/4, TOLERANCE)
    Math.atan(0).should be_close(0.0, TOLERANCE)
    Math.atan(-1).should be_close(-Math::PI/4, TOLERANCE)
    Math.atan(0.25).should be_close(0.244978663126864, TOLERANCE)
    Math.atan(0.50).should be_close(0.463647609000806, TOLERANCE)
    Math.atan(0.75).should be_close(0.643501108793284, TOLERANCE)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.atan("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.atan(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.atan(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.atan(MathSpecs::Float.new).should be_close(0.785398163397448, TOLERANCE)
  end
end

describe "Math#atan" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:atan, 3.1415).should be_close(1.2626187313511, TOLERANCE)
  end
end
