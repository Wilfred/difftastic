require File.expand_path('../../../spec_helper', __FILE__)
require 'prime'

describe "Prime.prime_division" do
  it "returns an array of a prime factor and a corresponding exponent" do
    Prime.prime_division(2*3*5*7*11*13*17).should ==
      [[2,1], [3,1], [5,1], [7,1], [11,1], [13,1], [17,1]]
  end

  it "returns an empty array for 1" do
    Prime.prime_division(1).should == []
  end

  it "returns [[-1, 1]] for -1" do
    Prime.prime_division(-1).should == [[-1, 1]]
  end

  it "includes [[-1, 1]] in the divisors of a negative number" do
    Prime.prime_division(-10).should include([-1, 1])
  end

  it "raises ZeroDivisionError for 0" do
    lambda { Prime.prime_division(0) }.should raise_error(ZeroDivisionError)
  end
end
