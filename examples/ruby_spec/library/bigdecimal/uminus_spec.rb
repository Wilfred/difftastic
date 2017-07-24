require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#-@" do
  before :each do
    @one = BigDecimal("1")
    @zero = BigDecimal("0")
    @zero_pos = BigDecimal("+0")
    @zero_neg = BigDecimal("-0")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-99999")
    @frac_2 = BigDecimal("0.9E-99999")
    @big = BigDecimal("333E99999")
    @big_neg = BigDecimal("-333E99999")
    @values = [@one, @zero, @zero_pos, @zero_neg, @infinity,
      @infinity_minus, @one_minus, @frac_1, @frac_2, @big, @big_neg]
  end

  it "negates self" do
    @one.send(:-@).should == @one_minus
    @one_minus.send(:-@).should == @one
    @frac_1.send(:-@).should == BigDecimal("-1E-99999")
    @frac_2.send(:-@).should == BigDecimal("-0.9E-99999")
    @big.send(:-@).should == @big_neg
    @big_neg.send(:-@).should == @big
    BigDecimal("2.221").send(:-@).should == BigDecimal("-2.221")
    BigDecimal("2E10000").send(:-@).should == BigDecimal("-2E10000")
    some_number = BigDecimal("2455999221.5512")
    some_number_neg = BigDecimal("-2455999221.5512")
    some_number.send(:-@).should == some_number_neg
    (-BigDecimal("-5.5")).should == BigDecimal("5.5")
    another_number = BigDecimal("-8.551551551551551551")
    another_number_pos = BigDecimal("8.551551551551551551")
    another_number.send(:-@).should == another_number_pos
    @values.each do |val|
      (val.send(:-@).send(:-@)).should == val
    end
  end

  it "properly handles special values" do
    @infinity.send(:-@).should == @infinity_minus
    @infinity_minus.send(:-@).should == @infinity
    @infinity.send(:-@).infinite?.should == -1
    @infinity_minus.send(:-@).infinite?.should == 1

    @zero.send(:-@).should == @zero
    @zero.send(:-@).sign.should == -1
    @zero_pos.send(:-@).should == @zero
    @zero_pos.send(:-@).sign.should == -1
    @zero_neg.send(:-@).should == @zero
    @zero_neg.send(:-@).sign.should == 1

    @nan.send(:-@).nan?.should == true
  end
end
