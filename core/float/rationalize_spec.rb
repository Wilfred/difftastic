require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#rationalize" do
  it "returns self as a simplified Rational with no argument" do
    (3382729202.92822).rationalize.should == Rational(4806858197361, 1421)
  end

  # FIXME: These specs need reviewing by somebody familiar with the
  # algorithm used by #rationalize
  it "simplifies self to the degree specified by a Rational argument" do
    f = 0.3
    f.rationalize(Rational(1,10)).should == Rational(1,3)
    f.rationalize(Rational(-1,10)).should == Rational(1,3)

    f = -f
    f.rationalize(Rational(1,10)).should == Rational(-1,3)
    f.rationalize(Rational(-1,10)).should == Rational(-1,3)

  end

  it "simplifies self to the degree specified by a Float argument" do
    f = 0.3
    f.rationalize(0.05).should == Rational(1,3)
    f.rationalize(0.001).should == Rational(3, 10)

    f = -f
    f.rationalize(0.05).should == Rational(-1,3)
    f.rationalize(0.001).should == Rational(-3,10)
  end

  it "raises a FloatDomainError for Infinity" do
    lambda {infinity_value.rationalize}.should raise_error(FloatDomainError)
  end

  it "raises a FloatDomainError for NaN" do
    lambda { nan_value.rationalize }.should raise_error(FloatDomainError)
  end

  it "raises ArgumentError when passed more than one argument" do
    lambda { 0.3.rationalize(0.1, 0.1) }.should raise_error(ArgumentError)
    lambda { 0.3.rationalize(0.1, 0.1, 2) }.should raise_error(ArgumentError)
  end
end
