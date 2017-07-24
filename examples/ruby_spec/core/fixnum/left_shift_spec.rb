require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#<< with n << m" do
  it "returns n shifted left m bits when n > 0, m > 0" do
    (1 << 1).should == 2
  end

  it "returns n shifted left m bits when n < 0, m > 0" do
    (-1 << 1).should == -2
    (-7 << 1).should == -14
    (-42 << 2).should == -168
  end

  it "returns n shifted right m bits when n > 0, m < 0" do
    (2 << -1).should == 1
  end

  it "returns n shifted right m bits when n < 0, m < 0" do
    (-2 << -1).should == -1
  end

  it "returns 0 when n == 0" do
    (0 << 1).should == 0
  end

  it "returns n when n > 0, m == 0" do
    (1 << 0).should == 1
  end

  it "returns n when n < 0, m == 0" do
    (-1 << 0).should == -1
  end

  it "returns 0 when n > 0, m < 0 and n < 2**-m" do
    (3 << -2).should == 0
    (7 << -3).should == 0
    (127 << -7).should == 0

    # To make sure the exponent is not truncated
    (7 << -32).should == 0
    (7 << -64).should == 0
  end

  it "returns -1 when n < 0, m < 0 and n > -(2**-m)" do
    (-3 << -2).should == -1
    (-7 << -3).should == -1
    (-127 << -7).should == -1

    # To make sure the exponent is not truncated
    (-7 << -32).should == -1
    (-7 << -64).should == -1
  end

  it "returns 0 when m < 0 and m is a Bignum" do
    (3 << -bignum_value).should == 0
  end

  it "returns a Bignum == fixnum_max * 2 when fixnum_max << 1 and n > 0" do
    result = fixnum_max << 1
    result.should be_an_instance_of(Bignum)
    result.should == fixnum_max * 2
  end

  it "returns a Bignum == fixnum_min * 2 when fixnum_min << 1 and n < 0" do
    result = fixnum_min << 1
    result.should be_an_instance_of(Bignum)
    result.should == fixnum_min * 2
  end

  it "calls #to_int to convert the argument to an Integer" do
    obj = mock("4")
    obj.should_receive(:to_int).and_return(4)

    (3 << obj).should == 48
  end

  it "raises a TypeError when #to_int does not return an Integer" do
    obj = mock("a string")
    obj.should_receive(:to_int).and_return("asdf")

    lambda { 3 << obj }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed nil" do
    lambda { 3 << nil }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a String" do
    lambda { 3 << "4" }.should raise_error(TypeError)
  end
end
