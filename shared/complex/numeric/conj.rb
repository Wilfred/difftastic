require File.expand_path('../../../../spec_helper', __FILE__)

describe :numeric_conj, shared: true do
  before :each do
    @numbers = [
      20,             # Integer
      398.72,         # Float
      Rational(3, 4), # Rational
      bignum_value,
      infinity_value,
      nan_value
    ]
  end

  it "returns self" do
    @numbers.each do |number|
      number.send(@method).should equal(number)
    end
  end
end
