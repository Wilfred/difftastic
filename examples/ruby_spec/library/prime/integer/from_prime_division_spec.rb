require File.expand_path('../../../../spec_helper', __FILE__)
require 'prime'

describe "Integer.from_prime_division" do
  it "returns the product of the given factorization" do
    Integer.from_prime_division([[2,3], [3,3], [5,3], [7,3], [11,3], [13,3], [17,3]]).
      should == 2**3 * 3**3 * 5**3 * 7**3 * 11**3 * 13**3 * 17**3
  end

  it "returns 1 for an empty factorization" do
    Integer.from_prime_division([]).should == 1
  end
end
