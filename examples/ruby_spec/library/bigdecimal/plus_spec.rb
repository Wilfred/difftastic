require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#+" do

  before :each do
    @one = BigDecimal("1")
    @zero = BigDecimal("0")
    @two = BigDecimal("2")
    @three = BigDecimal("3")
    @ten = BigDecimal("10")
    @eleven = BigDecimal("11")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-99999")
    @frac_2 = BigDecimal("0.9E-99999")
  end

  it "returns a + b" do
    (@two + @one).should == @three
    (@one + @two).should == @three
    (@one + @one_minus).should == @zero
    (@zero + @one).should == @one
    (@ten + @one).should == @eleven
    (@frac_1 + @frac_2).should == BigDecimal("1.9E-99999")
    (@frac_2 + @frac_1).should == BigDecimal("1.9E-99999")
    (@frac_1 + @frac_1).should == BigDecimal("2E-99999")
  end

  it "returns NaN if NaN is involved" do
    (@one + @nan).nan?.should == true
    (@nan + @one).nan?.should == true
  end

  it "returns Infinity or -Infinity if these are involved" do
    (@zero + @infinity).should == @infinity
    (@frac_2 + @infinity).should == @infinity
    (@two + @infinity_minus).should == @infinity_minus
  end

  it "returns NaN if Infinity + (- Infinity)" do
    (@infinity + @infinity_minus).nan?.should == true
  end

end
