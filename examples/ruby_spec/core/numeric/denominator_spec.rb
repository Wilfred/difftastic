require File.expand_path('../../../spec_helper', __FILE__)

describe "Numeric#denominator" do
  # The Numeric child classes override this method, so their behaviour is
  # specified in the appropriate place
  before :each do
    @numbers = [
      20,             # Integer
      99999999**99,   # Bignum
    ]
  end

  it "returns 1" do
    @numbers.each {|number| number.denominator.should == 1}
  end

  it "works with Numeric subclasses" do
    rational = mock_numeric('rational')
    rational.should_receive(:denominator).and_return(:denominator)
    numeric = mock_numeric('numeric')
    numeric.should_receive(:to_r).and_return(rational)
    numeric.denominator.should == :denominator
  end
end
