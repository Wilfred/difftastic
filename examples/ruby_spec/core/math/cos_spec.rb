require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# cosine : (-Inf, Inf) --> (-1.0, 1.0)
describe "Math.cos" do
  it "returns a float" do
    Math.cos(Math::PI).should be_kind_of(Float)
  end

  it "returns the cosine of the argument expressed in radians" do
    Math.cos(Math::PI).should be_close(-1.0, TOLERANCE)
    Math.cos(0).should be_close(1.0, TOLERANCE)
    Math.cos(Math::PI/2).should be_close(0.0, TOLERANCE)
    Math.cos(3*Math::PI/2).should be_close(0.0, TOLERANCE)
    Math.cos(2*Math::PI).should be_close(1.0, TOLERANCE)
  end


  it "raises a TypeError unless the argument is Numeric and has #to_f" do
    lambda { Math.cos("test") }.should raise_error(TypeError)
  end

  it "returns NaN given NaN" do
    Math.cos(nan_value).nan?.should be_true
  end

  it "raises a TypeError if the argument is nil" do
    lambda { Math.cos(nil) }.should raise_error(TypeError)
  end

  it "coerces its argument with #to_f" do
    f = mock_numeric('8.2')
    f.should_receive(:to_f).and_return(8.2)
    Math.cos(f).should == Math.cos(8.2)
  end
end

describe "Math#cos" do
  it "is accessible as a private instance method" do
    IncludesMath.new.send(:cos, 3.1415).should be_close(-0.999999995707656, TOLERANCE)
  end
end
