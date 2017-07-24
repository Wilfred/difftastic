require File.expand_path('../../../spec_helper', __FILE__)

describe "Integer#rationalize" do
  before :all do
    @numbers = [
      0,
      29871,
      99999999999999**99,
      -72628191273,
    ]
  end

  it "returns a Rational object" do
    @numbers.each do |number|
      number.rationalize.should be_an_instance_of(Rational)
    end
  end

  it "uses self as the numerator" do
    @numbers.each do |number|
      number.rationalize.numerator.should == number
    end
  end

  it "uses 1 as the denominator" do
    @numbers.each do |number|
      number.rationalize.denominator.should == 1
    end
  end

  it "ignores a single argument" do
    1.rationalize(0.1).should == Rational(1,1)
  end

  it "raises ArgumentError when passed more than one argument" do
    lambda { 1.rationalize(0.1, 0.1) }.should raise_error(ArgumentError)
    lambda { 1.rationalize(0.1, 0.1, 2) }.should raise_error(ArgumentError)
  end
end
