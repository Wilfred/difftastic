require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#infinite?" do

  it "returns 1 if self is Infinity" do
    BigDecimal("Infinity").infinite?.should == 1
  end

  it "returns -1 if self is -Infinity" do
    BigDecimal("-Infinity").infinite?.should == -1
  end

  it "returns not true otherwise" do
    e2_plus = BigDecimal("2E40001")
    e3_minus = BigDecimal("3E-20001")
    really_small_zero = BigDecimal("0E-200000000")
    really_big_zero = BigDecimal("0E200000000000")
    e3_minus.infinite?.should == nil
    e2_plus.infinite?.should == nil
    really_small_zero.infinite?.should == nil
    really_big_zero.infinite?.should == nil
    BigDecimal("0.000000000000000000000000").infinite?.should == nil
  end

  it "returns not true if self is NaN" do
    # NaN is a special value which is neither finite nor infinite.
    nan = BigDecimal("NaN")
    nan.infinite?.should == nil
  end

end
