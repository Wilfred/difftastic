require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Math.exp" do
  it "returns a float" do
    Math.exp(1.0).should be_kind_of(Float)
  end

  it "returns the base-e exponential of the argument" do
    Math.exp(0.0).should == 1.0
    Math.exp(-0.0).should == 1.0
    Math.exp(-1.8).should be_close(0.165298888221587, TOLERANCE)
    Math.exp(1.25).should be_close(3.49034295746184, TOLERANCE)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.exp("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.exp(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.exp(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.exp(MathSpecs::Float.new).should be_close(Math::E, TOLERANCE)
  end
end

describe "Math#exp" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:exp, 23.1415).should be_close(11226018484.0012, TOLERANCE)
  end
end
