require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#frac" do
  before :each do
    @zero = BigDecimal("0")
    @mixed = BigDecimal("1.23456789")
    @pos_int = BigDecimal("2E5555")
    @neg_int = BigDecimal("-2E5555")
    @pos_frac = BigDecimal("2E-9999")
    @neg_frac = BigDecimal("-2E-9999")

    @infinity = BigDecimal("Infinity")
    @infinity_neg = BigDecimal("-Infinity")
    @nan = BigDecimal("NaN")
    @zero_pos = BigDecimal("+0")
    @zero_neg = BigDecimal("-0")
  end

  it "returns a BigDecimal" do
    @pos_int.frac.kind_of?(BigDecimal).should == true
    @neg_int.frac.kind_of?(BigDecimal).should == true
    @pos_frac.kind_of?(BigDecimal).should == true
    @neg_frac.kind_of?(BigDecimal).should == true
  end

  it "returns the fractional part of the absolute value" do
    @mixed.frac.should == BigDecimal("0.23456789")
    @pos_frac.frac.should == @pos_frac
    @neg_frac.frac.should == @neg_frac
  end

  it "returns 0 if the value is 0" do
    @zero.frac.should == @zero
  end

  it "returns 0 if the value is an integer" do
    @pos_int.frac.should == @zero
    @neg_int.frac.should == @zero
  end

  it "correctly handles special values" do
    @infinity.frac.should == @infinity
    @infinity_neg.frac.should == @infinity_neg
    @nan.frac.nan?.should == true
  end

end
