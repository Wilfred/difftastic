require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#split" do

  before :each do
    @arr = BigDecimal("0.314159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593014782083152134043E1").split
    @arr_neg = BigDecimal("-0.314159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593014782083152134043E1").split
    @digits = "922337203685477580810101333333333333333333333333333"
    @arr_big = BigDecimal("00#{@digits}000").split
    @arr_big_neg = BigDecimal("-00#{@digits}000").split
    @huge = BigDecimal('100000000000000000000000000000000000000000001E90000000').split

    @infinity = BigDecimal("Infinity")
    @infinity_neg = BigDecimal("-Infinity")
    @nan = BigDecimal("NaN")
    @zero = BigDecimal("0")
    @zero_neg = BigDecimal("-0")
  end

  it "splits BigDecimal in an array with four values" do
    @arr.size.should == 4
  end

  it "first value: 1 for numbers > 0" do
    @arr[0].should == 1
    @arr_big[0].should == 1
    @zero.split[0].should == 1
    @huge[0].should == 1
    BigDecimal("+0").split[0].should == 1
    BigDecimal("1E400").split[0].should == 1
    @infinity.split[0].should == 1
  end

  it "first value: -1 for numbers < 0" do
    @arr_neg[0].should == -1
    @arr_big_neg[0].should == -1
    @zero_neg.split[0].should == -1
    BigDecimal("-1E400").split[0].should == -1
    @infinity_neg.split[0].should == -1
  end

  it "first value: 0 if BigDecimal is NaN" do
    BigDecimal("NaN").split[0].should == 0
  end

  it "second value: a string with the significant digits" do
    string = "314159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593014782083152134043"
    @arr[1].should == string
    @arr_big[1].should == @digits
    @arr_big_neg[1].should == @digits
    @huge[1].should == "100000000000000000000000000000000000000000001"
    @infinity.split[1].should == @infinity.to_s
    @nan.split[1].should == @nan.to_s
    @infinity_neg.split[1].should == @infinity.to_s
    @zero.split[1].should == "0"
    BigDecimal("-0").split[1].should == "0"
  end

  it "third value: the base (currently always ten)" do
   @arr[2].should == 10
   @arr_neg[2].should == 10
   @arr_big[2].should == 10
   @arr_big_neg[2].should == 10
   @huge[2].should == 10
   @infinity.split[2].should == 10
   @nan.split[2].should == 10
   @infinity_neg.split[2].should == 10
   @zero.split[2].should == 10
   @zero_neg.split[2].should == 10
  end

  it "fourth value: the exponent" do
    @arr[3].should == 1
    @arr_neg[3].should == 1
    @arr_big[3].should == 54
    @arr_big_neg[3].should == 54
    @huge[3].should == 90000045
    @infinity.split[3].should == 0
    @nan.split[3].should == 0
    @infinity_neg.split[3].should == 0
    @zero.split[3].should == 0
    @zero_neg.split[3].should == 0
  end

end


