require File.expand_path('../../../spec_helper', __FILE__)
require 'prime'

describe "Prime#prime?" do
  it "returns a true value for prime numbers" do
    Prime.prime?(2).should be_true
    Prime.prime?(3).should be_true
    Prime.prime?(2**31-1).should be_true  # 8th Mersenne prime (M8)
  end

  it "returns a false value for composite numbers" do
    Prime.prime?(4).should be_false
    Prime.prime?(15).should be_false
    Prime.prime?(2**32-1).should be_false
    Prime.prime?( (2**17-1)*(2**19-1) ).should be_false  # M6*M7
  end
end
