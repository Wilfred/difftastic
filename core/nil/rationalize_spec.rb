require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass#rationalize" do
  it "returns 0/1" do
    nil.rationalize.should == Rational(0, 1)
  end

  it "ignores a single argument" do
    nil.rationalize(0.1).should == Rational(0, 1)
  end

  it "raises ArgumentError when passed more than one argument" do
    lambda { nil.rationalize(0.1, 0.1) }.should raise_error(ArgumentError)
    lambda { nil.rationalize(0.1, 0.1, 2) }.should raise_error(ArgumentError)
  end
end
