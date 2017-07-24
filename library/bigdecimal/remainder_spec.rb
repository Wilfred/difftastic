require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#remainder" do

  before :each do
    @zero = BigDecimal("0")
    @one = BigDecimal("0")
    @mixed = BigDecimal("1.23456789")
    @pos_int = BigDecimal("2E5555")
    @neg_int = BigDecimal("-2E5555")
    @pos_frac = BigDecimal("2E-9999")
    @neg_frac = BigDecimal("-2E-9999")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-99999")
    @frac_2 = BigDecimal("0.9E-99999")
  end

  it "it equals modulo, if both values are of same sign" do
    BigDecimal('1234567890123456789012345679').remainder(BigDecimal('1')).should == @zero
    BigDecimal('123456789').remainder(BigDecimal('333333333333333333333333333E-50')).should == BigDecimal('0.12233333333333333333345679E-24')

    @mixed.remainder(@pos_frac).should == @mixed % @pos_frac
    @pos_int.remainder(@pos_frac).should == @pos_int % @pos_frac
    @neg_frac.remainder(@neg_int).should == @neg_frac % @neg_int
    @neg_int.remainder(@neg_frac).should == @neg_int % @neg_frac
  end

  it "means self-arg*(self/arg).truncate" do
    @mixed.remainder(@neg_frac).should == @mixed - @neg_frac * (@mixed / @neg_frac).truncate
    @pos_int.remainder(@neg_frac).should == @pos_int - @neg_frac * (@pos_int / @neg_frac).truncate
    @neg_frac.remainder(@pos_int).should == @neg_frac - @pos_int * (@neg_frac / @pos_int).truncate
    @neg_int.remainder(@pos_frac).should == @neg_int - @pos_frac * (@neg_int / @pos_frac).truncate
  end

  it "returns NaN used with zero" do
    @mixed.remainder(@zero).nan?.should == true
    @zero.remainder(@zero).nan?.should == true
  end

  it "returns zero if used on zero" do
    @zero.remainder(@mixed).should == @zero
  end

  it "returns NaN if NaN is involved" do
    @nan.remainder(@nan).nan?.should == true
    @nan.remainder(@one).nan?.should == true
    @one.remainder(@nan).nan?.should == true
    @infinity.remainder(@nan).nan?.should == true
    @nan.remainder(@infinity).nan?.should == true
  end

  it "returns NaN if Infinity is involved" do
    @infinity.remainder(@infinity).nan?.should == true
    @infinity.remainder(@one).nan?.should == true
    @infinity.remainder(@mixed).nan?.should == true
    @infinity.remainder(@one_minus).nan?.should == true
    @infinity.remainder(@frac_1).nan?.should == true
    @one.remainder(@infinity).nan?.should == true

    @infinity_minus.remainder(@infinity_minus).nan?.should == true
    @infinity_minus.remainder(@one).nan?.should == true
    @one.remainder(@infinity_minus).nan?.should == true
    @frac_2.remainder(@infinity_minus).nan?.should == true

    @infinity.remainder(@infinity_minus).nan?.should == true
    @infinity_minus.remainder(@infinity).nan?.should == true
  end

  it "coerces arguments to BigDecimal if possible" do
    @one.remainder(2).should == @one
  end


  it "raises TypeError if the argument cannot be coerced to BigDecimal" do
    lambda {
      @one.remainder('2')
    }.should raise_error(TypeError)
  end

end
