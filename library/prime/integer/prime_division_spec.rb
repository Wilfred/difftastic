require File.expand_path('../../../../spec_helper', __FILE__)
require 'prime'

describe "Integer#prime_division" do
  it "returns an array of a prime factor and a corresponding exponent" do
    (2*3*5*7*11*13*17).prime_division.should ==
      [[2,1], [3,1], [5,1], [7,1], [11,1], [13,1], [17,1]]
  end

  it "returns an empty array for 1" do
    1.prime_division.should == []
  end
  it "returns an empty array for -1" do
    -1.prime_division.should == [[-1, 1]]
  end
  it "raises ZeroDivisionError for 0" do
    lambda { 0.prime_division }.should raise_error(ZeroDivisionError)
  end
end
