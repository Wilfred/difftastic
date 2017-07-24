require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#to_f" do
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
    @vals = [@one, @zero, @two, @three, @frac_1, @frac_2]
    @spec_vals = [@zero_pos, @zero_neg, @nan, @infinity, @infinity_minus]
  end

  it "returns number of type float" do
    BigDecimal("3.14159").to_f.should be_kind_of(Float)
    @vals.each { |val| val.to_f.should be_kind_of(Float) }
    @spec_vals.each { |val| val.to_f.should be_kind_of(Float) }
  end

  it "rounds correctly to Float precision" do
    bigdec = BigDecimal("3.141592653589793238462643383279502884197169399375")
    bigdec.to_f.should be_close(3.14159265358979, TOLERANCE)
    @one.to_f.should == 1.0
    @two.to_f.should == 2.0
    @three.to_f.should be_close(3.0, TOLERANCE)
    @one_minus.to_f.should == -1.0

    # regression test for [ruby-talk:338957]
    BigDecimal("10.03").to_f.should == 10.03
  end

  it "properly handles special values" do
    @zero.to_f.should == 0
    @zero.to_f.to_s.should == "0.0"

    @nan.to_f.nan?.should == true

    @infinity.to_f.infinite?.should == 1
    @infinity_minus.to_f.infinite?.should == -1
  end

  it "remembers negative zero when converted to float" do
    @zero_neg.to_f.should == 0
    @zero_neg.to_f.to_s.should == "-0.0"
  end
end

