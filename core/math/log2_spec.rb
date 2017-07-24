require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Math.log2" do
  it "returns a float" do
    Math.log2(5.79).should be_close(2.53356334821451, TOLERANCE)
  end

  it "returns the natural logarithm of the argument" do
    Math.log2(1.1).should be_close(0.137503523749935, TOLERANCE)
    Math.log2(3.14).should be_close(1.6507645591169, TOLERANCE)
    Math.log2((2**101+45677544234809571)).should be_close(101.00000000000003, TOLERANCE)

    Math.log2((2**10001+45677544234809571)).should == 10001.0
    Math.log2((2**301+45677544234809571)).should == 301.0
  end

  it "raises an Errno::EDOM if the argument is less than 0" do
    lambda { Math.log2(-1e-15) }.should raise_error( Math::DomainError)
  end

  it "raises a TypeError if the argument cannot be coerced with Float()" do
    lambda { Math.log2("test") }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed a numerical argument as a string" do
    lambda { Math.log2("1.0") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.log2(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.log2(nil) }.should raise_error(TypeError)
  end

  it "accepts any argument that can be coerced with Float()" do
    Math.log2(MathSpecs::Float.new).should be_close(0.0, TOLERANCE)
  end
end
