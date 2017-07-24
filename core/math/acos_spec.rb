require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# arccosine : (-1.0, 1.0) --> (0, PI)
describe "Math.acos" do
  before :each do
    ScratchPad.clear
  end

  it "returns a float" do
    Math.acos(1).should be_kind_of(Float )
  end

  it "returns the arccosine of the argument" do
    Math.acos(1).should be_close(0.0, TOLERANCE)
    Math.acos(0).should be_close(1.5707963267949, TOLERANCE)
    Math.acos(-1).should be_close(Math::PI,TOLERANCE)
    Math.acos(0.25).should be_close(1.31811607165282, TOLERANCE)
    Math.acos(0.50).should be_close(1.0471975511966 , TOLERANCE)
    Math.acos(0.75).should be_close(0.722734247813416, TOLERANCE)
  end

  conflicts_with :Complex do
    it "raises an Errno::EDOM if the argument is greater than 1.0" do
      lambda { Math.acos(1.0001) }.should raise_error(Errno::EDOM)
    end

    it "raises an Errno::EDOM if the argument is less than -1.0" do
      lambda { Math.acos(-1.0001) }.should raise_error(Errno::EDOM)
    end
  end

  it "raises a TypeError if the string argument cannot be coerced with Float()" do
    lambda { Math.acos("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.acos(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.acos(MathSpecs::UserClass.new) }.should raise_error(TypeError)
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.acos(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.acos(MathSpecs::Float.new(0.5)).should be_close(Math.acos(0.5), TOLERANCE)
  end
end

describe "Math#acos" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:acos, 0).should be_close(1.5707963267949, TOLERANCE)
  end
end
