require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#>> with n >> m" do
  before :each do
    @bignum = bignum_value * 16
  end

  it "returns n shifted right m bits when n > 0, m > 0" do
    (@bignum >> 1).should == 73786976294838206464
  end

  it "returns n shifted right m bits when n < 0, m > 0" do
    (-@bignum >> 2).should == -36893488147419103232
  end

  it "respects twos complement signed shifting" do
    # This explicit left hand value is important because it is the
    # exact bit pattern that matters, so it's important it's right
    # here to show the significance.
    #

    (-42949672980000000000000 >> 14).should == -2621440001220703125
    (-42949672980000000000001 >> 14).should == -2621440001220703126
    # Note the off by one -------------------- ^^^^^^^^^^^^^^^^^^^^
    # This is because even though we discard the lowest bit, in twos
    # complement it would influence the bits to the left of it.

    (-42949672980000000000000 >> 15).should == -1310720000610351563
    (-42949672980000000000001 >> 15).should == -1310720000610351563

    (-0xfffffffffffffffff >> 32).should == -68719476736
  end

  it "respects twos complement signed shifting for very large values" do
    giant = 42949672980000000000000000000000000000000000000000000000000000000000000000000000000000000000
    neg = -giant

    (giant >> 84).should == 2220446050284288846538547929770901490087453566957265138626098632812
    (neg >> 84).should == -2220446050284288846538547929770901490087453566957265138626098632813
  end

  it "returns n shifted left m bits when  n > 0, m < 0" do
    (@bignum >> -2).should == 590295810358705651712
  end

  it "returns n shifted left m bits when  n < 0, m < 0" do
    (-@bignum >> -3).should == -1180591620717411303424
  end

  it "returns n when n > 0, m == 0" do
    (@bignum >> 0).should == @bignum
  end

  it "returns n when n < 0, m == 0" do
    (-@bignum >> 0).should == -@bignum
  end

  it "returns 0 when m > 0 and m == p where 2**p > n >= 2**(p-1)" do
    (@bignum >> 68).should == 0
  end

  it "returns 0 when m is a Bignum" do
    (@bignum >> bignum_value).should == 0
  end

  it "returns a Fixnum == fixnum_max when (fixnum_max * 2) >> 1 and n > 0" do
    result = (fixnum_max * 2) >> 1
    result.should be_an_instance_of(Fixnum)
    result.should == fixnum_max
  end

  it "returns a Fixnum == fixnum_min when (fixnum_min * 2) >> 1 and n < 0" do
    result = (fixnum_min * 2) >> 1
    result.should be_an_instance_of(Fixnum)
    result.should == fixnum_min
  end

  it "calls #to_int to convert the argument to an Integer" do
    obj = mock("2")
    obj.should_receive(:to_int).and_return(2)

    (@bignum >> obj).should == 36893488147419103232
  end

  it "raises a TypeError when #to_int does not return an Integer" do
    obj = mock("a string")
    obj.should_receive(:to_int).and_return("asdf")

    lambda { @bignum >> obj }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed nil" do
    lambda { @bignum >> nil }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a String" do
    lambda { @bignum >> "4" }.should raise_error(TypeError)
  end
end
