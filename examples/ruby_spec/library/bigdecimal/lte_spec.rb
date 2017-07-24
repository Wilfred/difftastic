require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#<=" do
  before :each do
    @zero = BigDecimal("0")
    @zero_pos = BigDecimal("+0")
    @zero_neg = BigDecimal("-0")
    @mixed = BigDecimal("1.23456789")
    @pos_int = BigDecimal("2E5555")
    @neg_int = BigDecimal("-2E5555")
    @pos_frac = BigDecimal("2E-9999")
    @neg_frac = BigDecimal("-2E-9999")

    @int_mock = mock('123')
    class << @int_mock
      def coerce(other)
        return [other, BigDecimal('123')]
      end
      def <= (other)
        BigDecimal('123') <= other
      end
    end

    @values = [@mixed, @pos_int, @neg_int, @pos_frac, @neg_frac,
      -2**32, -2**31, -2**30, -2**16, -2**8, -100, -10, -1,
      @zero , 1, 2, 10, 10.5, 2**8, 2**16, 2**32, @int_mock, @zero_pos, @zero_neg]

    @infinity = BigDecimal("Infinity")
    @infinity_neg = BigDecimal("-Infinity")

    @float_infinity = Float::INFINITY
    @float_infinity_neg = -Float::INFINITY

    @nan = BigDecimal("NaN")
  end

  it "returns true if a <= b" do
    one = BigDecimal("1")
    two = BigDecimal("2")

    frac_1 = BigDecimal("1E-99999")
    frac_2 = BigDecimal("0.9E-99999")

    (@zero <= one).should == true
    (two <= @zero).should == false

    (frac_2 <= frac_1).should == true
    (two <= two).should == true
    (frac_1 <= frac_1).should == true

    (@neg_int <= @pos_int).should == true
    (@pos_int <= @neg_int).should == false
    (@neg_int <= @pos_frac).should == true
    (@pos_frac <= @neg_int).should == false
    (@zero <= @zero_pos).should == true
    (@zero <= @zero_neg).should == true
    (@zero_neg <= @zero_pos).should == true
    (@zero_pos <= @zero_neg).should == true
  end

  it "properly handles infinity values" do
    @values.each { |val|
      (val <= @infinity).should == true
      (@infinity <= val).should == false
      (val <= @infinity_neg).should == false
      (@infinity_neg <= val).should == true
    }
    (@infinity <= @infinity).should == true
    (@infinity_neg <= @infinity_neg).should == true
    (@infinity <= @infinity_neg).should == false
    (@infinity_neg <= @infinity).should == true
  end

  ruby_bug "#13674", ""..."2.4" do
    it "properly handles Float infinity values" do
      @values.each { |val|
        (val <= @float_infinity).should == true
        (@float_infinity <= val).should == false
        (val <= @float_infinity_neg).should == false
        (@float_infinity_neg <= val).should == true
      }
    end
  end

  it "properly handles NaN values" do
    @values += [@infinity, @infinity_neg, @nan]
    @values.each { |val|
      (@nan <= val).should == false
      (val <= @nan).should == false
    }
  end

  it "raises an ArgumentError if the argument can't be coerced into a BigDecimal" do
    lambda {@zero         <= nil }.should raise_error(ArgumentError)
    lambda {@infinity     <= nil }.should raise_error(ArgumentError)
    lambda {@infinity_neg <= nil }.should raise_error(ArgumentError)
    lambda {@mixed        <= nil }.should raise_error(ArgumentError)
    lambda {@pos_int      <= nil }.should raise_error(ArgumentError)
    lambda {@neg_frac     <= nil }.should raise_error(ArgumentError)
  end
end
