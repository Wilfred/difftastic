require File.expand_path('../../../spec_helper', __FILE__)

describe "Integer#lcm" do
  it "returns self if equal to the argument" do
    1.lcm(1).should == 1
    398.lcm(398).should == 398
  end

  it "returns an Integer" do
    36.lcm(6).should be_kind_of(Integer)
    4.lcm(20981).should be_kind_of(Integer)
  end

  it "returns the least common multiple of self and argument" do
    200.lcm(2001).should == 400200
    99.lcm(90).should == 990
  end

  it "returns a positive integer even if self is negative" do
    -12.lcm(6).should == 12
    -100.lcm(100).should == 100
  end

  it "returns a positive integer even if the argument is negative" do
    12.lcm(-6).should == 12
    100.lcm(-100).should == 100
  end

  it "returns a positive integer even if both self and argument are negative" do
    -12.lcm(-6).should == 12
    -100.lcm(-100).should == 100
  end

  it "accepts a Bignum argument" do
    bignum = 9999**99
    bignum.should be_kind_of(Bignum)
    99.lcm(bignum).should == bignum
  end

  it "works if self is a Bignum" do
    bignum = 9999**99
    bignum.should be_kind_of(Bignum)
    bignum.lcm(99).should == bignum
  end

  it "raises an ArgumentError if not given an argument" do
    lambda { 12.lcm }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if given more than one argument" do
    lambda { 12.lcm(30, 20) }.should raise_error(ArgumentError)
  end

  it "raises a TypeError unless the argument is an Integer" do
    lambda { 39.lcm(3.8)   }.should raise_error(TypeError)
    lambda { 45872.lcm([]) }.should raise_error(TypeError)
  end
end
