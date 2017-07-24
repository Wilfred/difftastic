require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#ceil" do
  before :each do
    @zero = BigDecimal("0")
    @one = BigDecimal("1")
    @three = BigDecimal("3")
    @four = BigDecimal("4")
    @mixed = BigDecimal("1.23456789")
    @mixed_big = BigDecimal("1.23456789E100")
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

  it "returns an Integer, if n is unspecified" do
    @mixed.ceil.kind_of?(Integer).should == true
  end

  it "returns a BigDecimal, if n is specified" do
    @pos_int.ceil(2).kind_of?(BigDecimal).should == true
  end

  it "returns the smallest integer greater or equal to self, if n is unspecified" do
    @pos_int.ceil.should == @pos_int
    @neg_int.ceil.should == @neg_int
    @pos_frac.ceil.should == BigDecimal("1")
    @neg_frac.ceil.should == @zero
    @zero.ceil.should == 0
    @zero_pos.ceil.should == @zero_pos
    @zero_neg.ceil.should == @zero_neg


    BigDecimal('2.3').ceil.should == 3
    BigDecimal('2.5').ceil.should == 3
    BigDecimal('2.9999').ceil.should == 3
    BigDecimal('-2.3').ceil.should == -2
    BigDecimal('-2.5').ceil.should == -2
    BigDecimal('-2.9999').ceil.should == -2
  end

  it "raise exception, if self is special value" do
    lambda { @infinity.ceil }.should raise_error(FloatDomainError)
    lambda { @infinity_neg.ceil }.should raise_error(FloatDomainError)
    lambda { @nan.ceil }.should raise_error(FloatDomainError)
  end

  it "returns n digits right of the decimal point if given n > 0" do
    @mixed.ceil(1).should == BigDecimal("1.3")
    @mixed.ceil(5).should == BigDecimal("1.23457")

    BigDecimal("-0.03").ceil(1).should == BigDecimal("0")
    BigDecimal("0.03").ceil(1).should == BigDecimal("0.1")

    BigDecimal("23.45").ceil(0).should == BigDecimal('24')
    BigDecimal("23.45").ceil(1).should == BigDecimal('23.5')
    BigDecimal("23.45").ceil(2).should == BigDecimal('23.45')

    BigDecimal("-23.45").ceil(0).should == BigDecimal('-23')
    BigDecimal("-23.45").ceil(1).should == BigDecimal('-23.4')
    BigDecimal("-23.45").ceil(2).should == BigDecimal('-23.45')

    BigDecimal("2E-10").ceil(0).should == @one
    BigDecimal("2E-10").ceil(9).should == BigDecimal('1E-9')
    BigDecimal("2E-10").ceil(10).should == BigDecimal('2E-10')
    BigDecimal("2E-10").ceil(11).should == BigDecimal('2E-10')

    (1..10).each do |n|
      # 0.4, 0.34, 0.334, etc.
      (@one.div(@three,20)).ceil(n).should == BigDecimal("0.#{'3'*(n-1)}4")
      # 1.4, 1.34, 1.334, etc.
      (@four.div(@three,20)).ceil(n).should == BigDecimal("1.#{'3'*(n-1)}4")
      (BigDecimal('31').div(@three,20)).ceil(n).should == BigDecimal("10.#{'3'*(n-1)}4")
    end
    (1..10).each do |n|
      # -0.4, -0.34, -0.334, etc.
      (-@one.div(@three,20)).ceil(n).should == BigDecimal("-0.#{'3'* n}")
    end
    (1..10).each do |n|
      (@three.div(@one,20)).ceil(n).should == @three
    end
    (1..10).each do |n|
      (-@three.div(@one,20)).ceil(n).should == -@three
    end
  end

  it "sets n digits left of the decimal point to 0, if given n < 0" do
    BigDecimal("13345.234").ceil(-2).should == BigDecimal("13400.0")
    @mixed_big.ceil(-99).should == BigDecimal("0.13E101")
    @mixed_big.ceil(-100).should == BigDecimal("0.2E101")
    @mixed_big.ceil(-95).should == BigDecimal("0.123457E101")
    BigDecimal("1E10").ceil(-30).should == BigDecimal('1E30')
    BigDecimal("-1E10").ceil(-30).should == @zero
  end

end
