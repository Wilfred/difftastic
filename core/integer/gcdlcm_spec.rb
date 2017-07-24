require File.expand_path('../../../spec_helper', __FILE__)

describe "Integer#gcdlcm" do
  it "returns [self, self] if self is equal to the argument" do
    1.gcdlcm(1).should == [1, 1]
    398.gcdlcm(398).should == [398, 398]
  end

  it "returns an Array" do
    36.gcdlcm(6).should be_kind_of(Array)
    4.gcdlcm(20981).should be_kind_of(Array)
  end

  it "returns a two-element Array" do
    36.gcdlcm(876).size.should == 2
    29.gcdlcm(17).size.should == 2
  end

  it "returns the greatest common divisor of self and argument as the first element" do
    10.gcdlcm(5)[0].should == 10.gcd(5)
    200.gcdlcm(20)[0].should == 200.gcd(20)
  end

  it "returns the least common multiple of self and argument as the last element" do
    10.gcdlcm(5)[1].should == 10.lcm(5)
    200.gcdlcm(20)[1].should == 200.lcm(20)
  end

  it "accepts a Bignum argument" do
    bignum = 91999**99
    bignum.should be_kind_of(Bignum)
    99.gcdlcm(bignum).should == [99.gcd(bignum), 99.lcm(bignum)]
  end

  it "works if self is a Bignum" do
    bignum = 9999**89
    bignum.should be_kind_of(Bignum)
    bignum.gcdlcm(99).should == [bignum.gcd(99), bignum.lcm(99)]
  end

  it "raises an ArgumentError if not given an argument" do
    lambda { 12.gcdlcm }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if given more than one argument" do
    lambda { 12.gcdlcm(30, 20) }.should raise_error(ArgumentError)
  end

  it "raises a TypeError unless the argument is an Integer" do
    lambda { 39.gcdlcm(3.8)   }.should raise_error(TypeError)
    lambda { 45872.gcdlcm([]) }.should raise_error(TypeError)
  end
end
