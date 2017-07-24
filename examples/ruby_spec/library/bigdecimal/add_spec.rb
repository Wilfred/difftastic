require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

require 'bigdecimal'

describe "BigDecimal#add" do

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
    @frac_3 = BigDecimal("12345E10")
    @frac_4 = BigDecimal("98765E10")
    @dot_ones = BigDecimal("0.1111111111")
  end

  it "returns a + b with given precision" do
    # documentation states, that precision ist optional, but it ain't,
    @two.add(@one, 1).should == @three
    @one .add(@two, 1).should == @three
    @one.add(@one_minus, 1).should == @zero
    @ten.add(@one, 2).should == @eleven
    @zero.add(@one, 1).should == @one
    @frac_2.add(@frac_1, 10000).should == BigDecimal("1.9E-99999")
    @frac_1.add(@frac_1, 10000).should == BigDecimal("2E-99999")
    @frac_3.add(@frac_4, 0).should == BigDecimal("0.11111E16")
    @frac_3.add(@frac_4, 1).should == BigDecimal("0.1E16")
    @frac_3.add(@frac_4, 2).should == BigDecimal("0.11E16")
    @frac_3.add(@frac_4, 3).should == BigDecimal("0.111E16")
    @frac_3.add(@frac_4, 4).should == BigDecimal("0.1111E16")
    @frac_3.add(@frac_4, 5).should == BigDecimal("0.11111E16")
    @frac_3.add(@frac_4, 6).should == BigDecimal("0.11111E16")
  end

  it "returns a + [Fixnum value] with given precision" do
    (1..10).each {|precision|
      @dot_ones.add(0, precision).should == BigDecimal("0." + "1" * precision)
    }
    BigDecimal("0.88").add(0, 1).should == BigDecimal("0.9")
  end

  it "returns a + [Bignum value] with given precision" do
    bignum = 10000000000000000000
    (1..20).each {|precision|
      @dot_ones.add(bignum, precision).should == BigDecimal("0.1E20")
    }
    (21..30).each {|precision|
      @dot_ones.add(bignum, precision).should == BigDecimal(
        "0.10000000000000000000" + "1" * (precision - 20) + "E20")
    }
  end

#  TODO:
#  http://blade.nagaokaut.ac.jp/cgi-bin/scat.rb/ruby/ruby-core/17374
#
#  This doesn't work on MRI and looks like a bug to me:
#  one can use BigDecimal + Float, but not Bigdecimal.add(Float)
#
#  it "returns a + [Float value] with given precision" do
#    (1..10).each {|precision|
#      @dot_ones.add(0.0, precision).should == BigDecimal("0." + "1" * precision)
#    }
#
#    BigDecimal("0.88").add(0.0, 1).should == BigDecimal("0.9")
#  end

  it "favors the precision specified in the second argument over the global limit" do
    BigDecimalSpecs.with_limit(1) do
      BigDecimal('0.888').add(@zero, 3).should == BigDecimal('0.888')
    end

    BigDecimalSpecs.with_limit(2) do
      BigDecimal('0.888').add(@zero, 1).should == BigDecimal('0.9')
    end
  end

  it "uses the current rounding mode if rounding is needed" do
    BigDecimalSpecs.with_rounding(BigDecimal::ROUND_UP) do
      BigDecimal('0.111').add(@zero, 1).should == BigDecimal('0.2')
      BigDecimal('-0.111').add(@zero, 1).should == BigDecimal('-0.2')
    end
    BigDecimalSpecs.with_rounding(BigDecimal::ROUND_DOWN) do
      BigDecimal('0.999').add(@zero, 1).should == BigDecimal('0.9')
      BigDecimal('-0.999').add(@zero, 1).should == BigDecimal('-0.9')
    end
    BigDecimalSpecs.with_rounding(BigDecimal::ROUND_HALF_UP) do
      BigDecimal('0.85').add(@zero, 1).should == BigDecimal('0.9')
      BigDecimal('-0.85').add(@zero, 1).should == BigDecimal('-0.9')
    end
    BigDecimalSpecs.with_rounding(BigDecimal::ROUND_HALF_DOWN) do
      BigDecimal('0.85').add(@zero, 1).should == BigDecimal('0.8')
      BigDecimal('-0.85').add(@zero, 1).should == BigDecimal('-0.8')
    end
    BigDecimalSpecs.with_rounding(BigDecimal::ROUND_HALF_EVEN) do
      BigDecimal('0.75').add(@zero, 1).should == BigDecimal('0.8')
      BigDecimal('0.85').add(@zero, 1).should == BigDecimal('0.8')
      BigDecimal('-0.75').add(@zero, 1).should == BigDecimal('-0.8')
      BigDecimal('-0.85').add(@zero, 1).should == BigDecimal('-0.8')
    end
    BigDecimalSpecs.with_rounding(BigDecimal::ROUND_CEILING) do
      BigDecimal('0.85').add(@zero, 1).should == BigDecimal('0.9')
      BigDecimal('-0.85').add(@zero, 1).should == BigDecimal('-0.8')
    end
    BigDecimalSpecs.with_rounding(BigDecimal::ROUND_FLOOR) do
      BigDecimal('0.85').add(@zero, 1).should == BigDecimal('0.8')
      BigDecimal('-0.85').add(@zero, 1).should == BigDecimal('-0.9')
    end
  end

  it "uses the default ROUND_HALF_UP rounding if it wasn't explicitly changed" do
    BigDecimal('0.85').add(@zero, 1).should == BigDecimal('0.9')
    BigDecimal('-0.85').add(@zero, 1).should == BigDecimal('-0.9')
  end

  it "returns NaN if NaN is involved" do
    @one.add(@nan, 10000).nan?.should == true
    @nan.add(@one, 1).nan?.should == true
  end

  it "returns Infinity or -Infinity if these are involved" do
    @zero.add(@infinity, 1).should == @infinity
    @frac_2.add(@infinity, 1).should == @infinity
    @one_minus.add(@infinity, 1).should == @infinity
    @two.add(@infinity, 1).should == @infinity

    @zero.add(@infinity_minus, 1).should == @infinity_minus
    @frac_2.add(@infinity_minus, 1).should == @infinity_minus
    @one_minus.add(@infinity_minus, 1).should == @infinity_minus
    @two.add(@infinity_minus, 1).should == @infinity_minus

    @infinity.add(@zero, 1).should == @infinity
    @infinity.add(@frac_2, 1).should == @infinity
    @infinity.add(@one_minus, 1).should == @infinity
    @infinity.add(@two, 1).should == @infinity

    @infinity_minus.add(@zero, 1).should == @infinity_minus
    @infinity_minus.add(@frac_2, 1).should == @infinity_minus
    @infinity_minus.add(@one_minus, 1).should == @infinity_minus
    @infinity_minus.add(@two, 1).should == @infinity_minus

    @infinity.add(@infinity, 10000).should == @infinity
    @infinity_minus.add(@infinity_minus, 10000).should == @infinity_minus
  end

  it "returns NaN if Infinity + (- Infinity)" do
    @infinity.add(@infinity_minus, 10000).nan?.should == true
    @infinity_minus.add(@infinity, 10000).nan?.should == true
  end

  it "raises TypeError when adds nil" do
    lambda {
      @one.add(nil, 10)
    }.should raise_error(TypeError)
    lambda {
      @one.add(nil, 0)
    }.should raise_error(TypeError)
  end

  it "raises TypeError when precision parameter is nil" do
    lambda {
      @one.add(@one, nil)
    }.should raise_error(TypeError)
  end

  it "raises ArgumentError when precision parameter is negative" do
    lambda {
      @one.add(@one, -10)
    }.should raise_error(ArgumentError)
  end
end
