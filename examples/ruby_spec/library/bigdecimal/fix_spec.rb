require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#fix" do
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
    BigDecimal("2E100000000").fix.kind_of?(BigDecimal).should == true
    BigDecimal("2E-999").kind_of?(BigDecimal).should == true
  end

  it "returns the integer part of the absolute value" do
    a = BigDecimal("2E1000")
    a.fix.should == a
    b = BigDecimal("-2E1000")
    b.fix.should == b
    BigDecimal("0.123456789E5").fix.should == BigDecimal("0.12345E5")
    BigDecimal("-0.123456789E5").fix.should == BigDecimal("-0.12345E5")
  end

  it "correctly handles special values" do
    @infinity.fix.should == @infinity
    @infinity_neg.fix.should == @infinity_neg
    @nan.fix.nan?.should == true
  end

  it "returns 0 if the absolute value is < 1" do
    BigDecimal("0.99999").fix.should == 0
    BigDecimal("-0.99999").fix.should == 0
    BigDecimal("0.000000001").fix.should == 0
    BigDecimal("-0.00000001").fix.should == 0
    BigDecimal("-1000000").fix.should_not == 0
    @zero.fix.should == 0
    @zero_pos.fix.should == @zero_pos
    @zero_neg.fix.should == @zero_neg
  end

  it "does not allow any arguments" do
    lambda {
      @mixed.fix(10)
    }.should raise_error(ArgumentError)
  end

end
