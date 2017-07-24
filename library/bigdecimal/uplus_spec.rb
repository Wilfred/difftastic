require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#+@" do
  it "returns the same value with same sign (twos complement)" do
    first = BigDecimal("34.56")
    first.send(:+@).should == first
    second = BigDecimal("-34.56")
    second.send(:+@).should == second
    third = BigDecimal("0.0")
    third.send(:+@).should == third
    fourth = BigDecimal("2E1000000")
    fourth.send(:+@).should == fourth
    fifth = BigDecimal("123456789E-1000000")
    fifth.send(:+@).should == fifth
  end
end



