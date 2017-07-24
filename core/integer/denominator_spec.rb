require File.expand_path('../../../spec_helper', __FILE__)

describe "Integer#denominator" do
  # The Numeric child classes override this method, so their behaviour is
  # specified in the appropriate place
  before :each do
    @numbers = [
      20,             # Integer
      -2709,          # Negative Integer
      99999999**99,   # Bignum
      -99999**621,    # Negative BigNum
      0,
      1
    ]
  end

  it "returns 1" do
    @numbers.each {|number| number.denominator.should == 1}
  end
end
