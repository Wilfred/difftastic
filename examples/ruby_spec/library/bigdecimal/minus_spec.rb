require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#-" do

  before :each do
    @one = BigDecimal("1")
    @zero = BigDecimal("0")
    @two = BigDecimal("2")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-99999")
    @frac_2 = BigDecimal("0.9E-99999")
  end

  it "returns a - b" do
    (@two - @one).should == @one
    (@one - @two).should == @one_minus
    (@one - @one_minus).should == @two
    (@frac_2 - @frac_1).should == BigDecimal("-0.1E-99999")
    (@two - @two).should == @zero
    (@frac_1 - @frac_1).should == @zero
    (BigDecimal('1.23456789') - BigDecimal('1.2')).should == BigDecimal("0.03456789")
  end

  it "returns NaN if NaN is involved" do
    (@one - @nan).nan?.should == true
    (@nan - @one).nan?.should == true
    (@nan - @nan).nan?.should == true
    (@nan - @infinity).nan?.should == true
    (@nan - @infinity_minus).nan?.should == true
    (@infinity - @nan).nan?.should == true
    (@infinity_minus - @nan).nan?.should == true
  end

  it "returns NaN both operands are infinite with the same sign" do
    (@infinity - @infinity).nan?.should == true
    (@infinity_minus - @infinity_minus).nan?.should == true
  end

  it "returns Infinity or -Infinity if these are involved" do
    (@infinity - @infinity_minus).should == @infinity
    (@infinity_minus - @infinity).should == @infinity_minus

    (@infinity - @zero).should == @infinity
    (@infinity - @frac_2).should == @infinity
    (@infinity - @two).should == @infinity
    (@infinity - @one_minus).should == @infinity

    (@zero - @infinity).should == @infinity_minus
    (@frac_2 - @infinity).should == @infinity_minus
    (@two - @infinity).should == @infinity_minus
    (@one_minus - @infinity).should == @infinity_minus
  end

end
