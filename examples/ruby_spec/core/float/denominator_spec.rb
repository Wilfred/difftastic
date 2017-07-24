require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#denominator" do
  before :each do
    @numbers = [
      0.0,
      29871.22736282,
      7772222663.0,
      1.4592,
    ].map {|n| [0-n, n]}.flatten
  end

  it "returns an Integer" do
    @numbers.each do |number|
      number.denominator.should be_kind_of(Integer)
    end
  end

  it "converts self to a Rational and returns the denominator" do
    @numbers.each do |number|
      number.denominator.should == Rational(number).denominator
    end
  end

  it "returns 1 for NaN and Infinity" do
    nan_value.denominator.should == 1
    infinity_value.denominator.should == 1
  end
end
