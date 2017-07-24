require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#floor" do
  before :each do
    @one = BigDecimal("1")
    @three = BigDecimal("3")
    @four = BigDecimal("4")
    @zero = BigDecimal("0")
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

  it "returns the greatest integer smaller or equal to self" do
    @pos_int.floor.should == @pos_int
    @neg_int.floor.should == @neg_int
    @pos_frac.floor.should == @zero
    @neg_frac.floor.should == BigDecimal("-1")
    @zero.floor.should == 0
    @zero_pos.floor.should == @zero_pos
    @zero_neg.floor.should == @zero_neg

    BigDecimal('2.3').floor.should == 2
    BigDecimal('2.5').floor.should == 2
    BigDecimal('2.9999').floor.should == 2
    BigDecimal('-2.3').floor.should == -3
    BigDecimal('-2.5').floor.should == -3
    BigDecimal('-2.9999').floor.should == -3
    BigDecimal('0.8').floor.should == 0
    BigDecimal('-0.8').floor.should == -1
  end

  it "raise exception, if self is special value" do
    lambda { @infinity.floor }.should raise_error(FloatDomainError)
    lambda { @infinity_neg.floor }.should raise_error(FloatDomainError)
    lambda { @nan.floor }.should raise_error(FloatDomainError)
  end

  it "returns n digits right of the decimal point if given n > 0" do
    @mixed.floor(1).should == BigDecimal("1.2")
    @mixed.floor(5).should == BigDecimal("1.23456")

    BigDecimal("-0.03").floor(1).should == BigDecimal("-0.1")
    BigDecimal("0.03").floor(1).should == BigDecimal("0")

    BigDecimal("23.45").floor(0).should == BigDecimal('23')
    BigDecimal("23.45").floor(1).should == BigDecimal('23.4')
    BigDecimal("23.45").floor(2).should == BigDecimal('23.45')

    BigDecimal("-23.45").floor(0).should == BigDecimal('-24')
    BigDecimal("-23.45").floor(1).should == BigDecimal('-23.5')
    BigDecimal("-23.45").floor(2).should == BigDecimal('-23.45')

    BigDecimal("2E-10").floor(0).should == @zero
    BigDecimal("2E-10").floor(9).should == @zero
    BigDecimal("2E-10").floor(10).should == BigDecimal('2E-10')
    BigDecimal("2E-10").floor(11).should == BigDecimal('2E-10')

    (1..10).each do |n|
      # 0.3, 0.33, 0.333, etc.
      (@one.div(@three,20)).floor(n).should == BigDecimal("0.#{'3'*n}")
      # 1.3, 1.33, 1.333, etc.
      (@four.div(@three,20)).floor(n).should == BigDecimal("1.#{'3'*n}")
      (BigDecimal('31').div(@three,20)).floor(n).should == BigDecimal("10.#{'3'*n}")
    end
    (1..10).each do |n|
      # -0.4, -0.34, -0.334, etc.
      (-@one.div(@three,20)).floor(n).should == BigDecimal("-0.#{'3'*(n-1)}4")
    end
    (1..10).each do |n|
      (@three.div(@one,20)).floor(n).should == @three
    end
    (1..10).each do |n|
      (-@three.div(@one,20)).floor(n).should == -@three
    end
  end

  it "sets n digits left of the decimal point to 0, if given n < 0" do
    BigDecimal("13345.234").floor(-2).should == BigDecimal("13300.0")
    @mixed_big.floor(-99).should == BigDecimal("0.12E101")
    @mixed_big.floor(-100).should == BigDecimal("0.1E101")
    @mixed_big.floor(-95).should == BigDecimal("0.123456E101")
    (1..10).each do |n|
      BigDecimal('1.8').floor(-n).should == @zero
    end
    BigDecimal("1E10").floor(-30).should == @zero
    BigDecimal("-1E10").floor(-30).should == BigDecimal('-1E30')
  end

end
