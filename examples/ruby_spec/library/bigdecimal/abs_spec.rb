require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#abs" do
  before :each do
    @one = BigDecimal("1")
    @zero = BigDecimal("0")
    @zero_pos = BigDecimal("+0")
    @zero_neg = BigDecimal("-0")
    @two = BigDecimal("2")
    @three = BigDecimal("3")
    @mixed = BigDecimal("1.23456789")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-99999")
    @frac_2 = BigDecimal("0.9E-99999")
  end

  it "returns the absolute value" do
    pos_int = BigDecimal("2E5555")
    neg_int = BigDecimal("-2E5555")
    pos_frac = BigDecimal("2E-9999")
    neg_frac = BigDecimal("-2E-9999")

    pos_int.abs.should == pos_int
    neg_int.abs.should == pos_int
    pos_frac.abs.should == pos_frac
    neg_frac.abs.should == pos_frac
    @one.abs.should == 1
    @two.abs.should == 2
    @three.abs.should == 3
    @mixed.abs.should == @mixed
    @one_minus.abs.should == @one
  end

  it "properly handles special values" do
    @infinity.abs.should == @infinity
    @infinity_minus.abs.should == @infinity
    @nan.abs.nan?.should == true # have to do it this way, since == doesn't work on NaN
    @zero.abs.should == 0
    @zero.abs.sign.should == BigDecimal::SIGN_POSITIVE_ZERO
    @zero_pos.abs.should == 0
    @zero_pos.abs.sign.should == BigDecimal::SIGN_POSITIVE_ZERO
    @zero_neg.abs.should == 0
    @zero_neg.abs.sign.should == BigDecimal::SIGN_POSITIVE_ZERO
  end

end
