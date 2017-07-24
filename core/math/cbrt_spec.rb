require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Math.cbrt" do
  it "returns a float" do
    Math.cbrt(1).should be_an_instance_of(Float)
  end

  it "returns the cubic root of the argument" do
    Math.cbrt(1).should == 1.0
    Math.cbrt(8.0).should == 2.0
    Math.cbrt(-8.0).should == -2.0
    Math.cbrt(3).should be_close(1.44224957030741, TOLERANCE)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.cbrt("foobar") }.should raise_error(TypeError)
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.cbrt(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.cbrt(MathSpecs::Float.new).should be_close(1.0, TOLERANCE)
  end
end
