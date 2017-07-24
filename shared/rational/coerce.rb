require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_coerce, shared: true do
  it "returns the passed argument, self as Float, when given a Float" do
    result = Rational(3, 4).coerce(1.0)
    result.should == [1.0, 0.75]
    result.first.is_a?(Float).should be_true
    result.last.is_a?(Float).should be_true
  end

  it "returns the passed argument, self as Rational, when given an Integer" do
    result = Rational(3, 4).coerce(10)
    result.should == [Rational(10, 1), Rational(3, 4)]
    result.first.is_a?(Rational).should be_true
    result.last.is_a?(Rational).should be_true
  end

  it "returns [argument, self] when given a Rational" do
    Rational(3, 7).coerce(Rational(9, 2)).should == [Rational(9, 2), Rational(3, 7)]
  end
end
