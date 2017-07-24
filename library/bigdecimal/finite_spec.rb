require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#finite?" do
  before :each do
    @one = BigDecimal("1")
    @zero = BigDecimal("0")
    @zero_pos = BigDecimal("+0")
    @zero_neg = BigDecimal("-0")
    @two = BigDecimal("2")
    @three = BigDecimal("3")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-99999")
    @frac_2 = BigDecimal("0.9E-99999")
    @big = BigDecimal("2E40001")
    @finite_vals = [@one, @zero, @zero_pos, @zero_neg, @two,
      @three, @frac_1, @frac_2, @big, @one_minus]
  end

  it "is false if Infinity or NaN" do
    @infinity.finite?.should == false
    @infinity_minus.finite?.should == false
    @nan.finite?.should == false
  end

  it "returns true for finite values" do
    @finite_vals.each do |val|
      val.finite?.should == true
    end
  end
end

