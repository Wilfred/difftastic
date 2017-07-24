require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#<< with n << m" do
  before :each do
    @bignum = bignum_value * 16
  end

  it "returns n shifted left m bits when n > 0, m > 0" do
    (@bignum << 4).should == 2361183241434822606848
  end

  it "returns n shifted left m bits when n < 0, m > 0" do
    (-@bignum << 9).should == -75557863725914323419136
  end

  it "returns n shifted right m bits when n > 0, m < 0" do
    (@bignum << -1).should == 73786976294838206464
  end

  it "returns n shifted right m bits when n < 0, m < 0" do
    (-@bignum << -2).should == -36893488147419103232
  end

  it "returns n when n > 0, m == 0" do
    (@bignum << 0).should == @bignum
  end

  it "returns n when n < 0, m == 0" do
    (-@bignum << 0).should == -@bignum
  end

  it "returns 0 when m < 0 and m == p where 2**p > n >= 2**(p-1)" do
    (@bignum << -68).should == 0
  end

  it "returns 0 when m < 0 and m is a Bignum" do
    (@bignum << -bignum_value).should == 0
  end

  it "returns a Fixnum == fixnum_max when (fixnum_max * 2) << -1 and n > 0" do
    result = (fixnum_max * 2) << -1
    result.should be_an_instance_of(Fixnum)
    result.should == fixnum_max
  end

  it "returns a Fixnum == fixnum_min when (fixnum_min * 2) << -1 and n < 0" do
    result = (fixnum_min * 2) << -1
    result.should be_an_instance_of(Fixnum)
    result.should == fixnum_min
  end

  it "calls #to_int to convert the argument to an Integer" do
    obj = mock("4")
    obj.should_receive(:to_int).and_return(4)

    (@bignum << obj).should == 2361183241434822606848
  end

  it "raises a TypeError when #to_int does not return an Integer" do
    obj = mock("a string")
    obj.should_receive(:to_int).and_return("asdf")

    lambda { @bignum << obj }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed nil" do
    lambda { @bignum << nil }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a String" do
    lambda { @bignum << "4" }.should raise_error(TypeError)
  end
end
