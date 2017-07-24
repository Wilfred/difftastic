require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal.mode" do
  #the default value of BigDecimal exception constants is false
  after :each do
    BigDecimal.mode(BigDecimal::EXCEPTION_NaN, false)
    BigDecimal.mode(BigDecimal::EXCEPTION_INFINITY, false)
    BigDecimal.mode(BigDecimal::EXCEPTION_UNDERFLOW, false)
    BigDecimal.mode(BigDecimal::EXCEPTION_OVERFLOW, false)
    BigDecimal.mode(BigDecimal::EXCEPTION_ZERODIVIDE, false)
  end

  it "returns the appropriate value and continue the computation if the flag is false" do
    BigDecimal("NaN").add(BigDecimal("1"),0).nan?.should == true
    BigDecimal("0").add(BigDecimal("Infinity"),0).should == BigDecimal("Infinity")
    BigDecimal("1").quo(BigDecimal("0")).should == BigDecimal("Infinity")
  end

  it "returns Infinity when too big" do
    BigDecimal("1E11111111111111111111").should == BigDecimal("Infinity")
    (BigDecimal("1E1000000000000000000")**10).should == BigDecimal("Infinity")
  end

  it "raise an exception if the flag is true" do
    BigDecimal.mode(BigDecimal::EXCEPTION_NaN, true)
    lambda { BigDecimal("NaN").add(BigDecimal("1"),0) }.should raise_error(FloatDomainError)
    BigDecimal.mode(BigDecimal::EXCEPTION_INFINITY, true)
    lambda { BigDecimal("0").add(BigDecimal("Infinity"),0) }.should raise_error(FloatDomainError)
    BigDecimal.mode(BigDecimal::EXCEPTION_ZERODIVIDE, true)
    lambda { BigDecimal("1").quo(BigDecimal("0")) }.should raise_error(FloatDomainError)
    BigDecimal.mode(BigDecimal::EXCEPTION_OVERFLOW, true)
    lambda { BigDecimal("1E11111111111111111111") }.should raise_error(FloatDomainError)
    lambda { (BigDecimal("1E1000000000000000000")**10) }.should raise_error(FloatDomainError)
  end
end
