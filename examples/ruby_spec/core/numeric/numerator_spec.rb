require File.expand_path('../../../spec_helper', __FILE__)

describe "Numeric#numerator" do
  before :all do
    @numbers = [
      0,
      29871,
      99999999999999**99,
      -72628191273,
      29282.2827,
      -2927.00091,
      0.0,
      12.0,
      Float::MAX,
    ]
  end

  # This isn't entirely true, as NaN.numerator works, whereas
  # Rational(NaN) raises an exception, but we test this in Float#numerator
  it "converts self to a Rational object then returns its numerator" do
    @numbers.each do |number|
      number.numerator.should == Rational(number).numerator
    end
  end

  it "works with Numeric subclasses" do
    rational = mock_numeric('rational')
    rational.should_receive(:numerator).and_return(:numerator)
    numeric = mock_numeric('numeric')
    numeric.should_receive(:to_r).and_return(rational)
    numeric.numerator.should == :numerator
  end
end
