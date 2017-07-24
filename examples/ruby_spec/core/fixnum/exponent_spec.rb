require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#**" do
  it "returns self raised to the given power" do
    (2 ** 0).should eql 1
    (2 ** 1).should eql 2
    (2 ** 2).should eql 4

    (9 ** 0.5).should eql 3.0
    (5 ** -1).to_f.to_s.should == '0.2'

    (2 ** 40).should eql 1099511627776
  end

  it "overflows the answer to a bignum transparantly" do
    (2 ** 29).should eql 536870912
    (2 ** 30).should eql 1073741824
    (2 ** 31).should eql 2147483648
    (2 ** 32).should eql 4294967296

    (2 ** 61).should eql 2305843009213693952
    (2 ** 62).should eql 4611686018427387904
    (2 ** 63).should eql 9223372036854775808
    (2 ** 64).should eql 18446744073709551616
    (8 ** 23).should eql 590295810358705651712
  end

  it "raises negative numbers to the given power" do
    ((-2) ** 29).should eql(-536870912)
    ((-2) ** 30).should eql(1073741824)
    ((-2) ** 31).should eql(-2147483648)
    ((-2) ** 32).should eql(4294967296)

    ((-2) ** 61).should eql(-2305843009213693952)
    ((-2) ** 62).should eql(4611686018427387904)
    ((-2) ** 63).should eql(-9223372036854775808)
    ((-2) ** 64).should eql(18446744073709551616)
  end

  it "can raise 1 to a Bignum safely" do
    big = bignum_value(4611686018427387904)
    (1 ** big).should eql 1
  end

  it "can raise -1 to a Bignum safely" do
    ((-1) ** bignum_value(0)).should eql(1)
    ((-1) ** bignum_value(1)).should eql(-1)
  end

  it "switches to a Float when the number is too big" do
    big = bignum_value(4611686018427387904)
    flt = (2 ** big)
    flt.should be_kind_of(Float)
    flt.infinite?.should == 1
  end

  conflicts_with :Rational do
    it "raises a ZeroDivisionError for 0**-1" do
      lambda { (0**-1) }.should raise_error(ZeroDivisionError)
    end

    it "raises a TypeError when given a non-Integer" do
      lambda {
        (obj = mock('10')).should_receive(:to_int).any_number_of_times.and_return(10)
        13 ** obj
      }.should raise_error(TypeError)
      lambda { 13 ** "10"    }.should raise_error(TypeError)
      lambda { 13 ** :symbol }.should raise_error(TypeError)
    end
  end

  it "returns a complex number when negative and raised to a fractional power" do
    ((-8) ** (1.0/3))      .should be_close(Complex(1, 1.73205), TOLERANCE)
    ((-8) ** Rational(1,3)).should be_close(Complex(1, 1.73205), TOLERANCE)
  end
end
