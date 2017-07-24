require File.expand_path('../../../../spec_helper', __FILE__)
require 'prime'

describe "Integer#prime?" do
  it "returns a true value for prime numbers" do
    2.prime?.should be_true
    3.prime?.should be_true
    (2**31-1).prime?.should be_true  # 8th Mersenne prime (M8)
  end

  it "returns a false value for composite numbers" do
    4.prime?.should be_false
    15.prime?.should be_false
    (2**32-1).prime?.should be_false
    ( (2**17-1)*(2**19-1) ).prime?.should be_false  # M6*M7
  end
end
