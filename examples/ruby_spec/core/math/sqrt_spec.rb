require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Math.sqrt" do
  it "returns a float" do
    Math.sqrt(1).should be_kind_of(Float)
  end

  it "returns the square root of the argument" do
    Math.sqrt(1).should == 1.0
    Math.sqrt(4.0).should == 2.0
    Math.sqrt(15241578780673814.441547445).should be_close(123456789.123457, TOLERANCE)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.sqrt("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.sqrt(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.sqrt(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.sqrt(MathSpecs::Float.new).should be_close(1.0, TOLERANCE)
  end
end

describe "Math#sqrt" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:sqrt, 2.23).should be_close(1.49331845230681, TOLERANCE)
  end
end
