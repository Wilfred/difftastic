require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#<=>" do
  before :each do
    @zero = BigDecimal("0")
    @zero_pos = BigDecimal("+0")
    @zero_neg = BigDecimal("-0")
    @mixed = BigDecimal("1.23456789")
    @mixed_big = BigDecimal("1.23456789E100")
    @pos_int = BigDecimal("2E5555")
    @neg_int = BigDecimal("-2E5555")
    @pos_frac = BigDecimal("2E-9999")
    @neg_frac = BigDecimal("-2E-9999")

    @int_mock = mock('123')
    class << @int_mock
      def coerce(other)
        return [other, BigDecimal('123')]
      end
      def >= (other)
        BigDecimal('123') >= other
      end
    end

    @values = [@mixed, @pos_int, @neg_int, @pos_frac, @neg_frac,
      -2**32, -2**31, -2**30, -2**16, -2**8, -100, -10, -1,
      @zero , 1, 2, 10, 2**8, 2**16, 2**32, @int_mock, @zero_pos, @zero_neg]

    @infinity = BigDecimal("Infinity")
    @infinity_neg = BigDecimal("-Infinity")
    @nan = BigDecimal("NaN")
  end


  it "returns 0 if a == b" do
    (@pos_int <=> @pos_int).should == 0
    (@neg_int <=> @neg_int).should == 0
    (@pos_frac <=> @pos_frac).should == 0
    (@neg_frac <=> @neg_frac).should == 0
    (@zero <=> @zero).should == 0
    (@infinity <=> @infinity).should == 0
    (@infinity_neg <=> @infinity_neg).should == 0
  end

  it "returns 1 if a > b" do
    (@pos_int <=> @neg_int).should == 1
    (@pos_frac <=> @neg_frac).should == 1
    (@pos_frac <=> @zero).should == 1
    @values.each { |val|
      (@infinity <=> val).should == 1
    }
  end

  it "returns -1 if a < b" do
    (@zero <=> @pos_frac).should == -1
    (@neg_int <=> @pos_frac).should == -1
    (@pos_frac <=> @pos_int).should == -1
    @values.each { |val|
      (@infinity_neg <=> val).should == -1
    }
  end

  it "returns nil if NaN is involved" do
    @values += [@infinity, @infinity_neg, @nan]
    @values << nil
    @values << Object.new
    @values.each { |val|
      (@nan <=> val).should == nil
    }
  end

  it "returns nil if the argument is nil" do
    (@zero <=> nil).should == nil
    (@infinity <=> nil).should == nil
    (@infinity_neg <=> nil).should == nil
    (@mixed <=> nil).should == nil
    (@pos_int <=> nil).should == nil
    (@neg_frac <=> nil).should == nil
  end
end
