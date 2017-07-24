require File.expand_path('../../../spec_helper', __FILE__)

describe "Integer#to_r" do
  it "returns a Rational object" do
    309.to_r.should be_an_instance_of(Rational)
  end

  it "constructs a rational number with self as the numerator" do
    34.to_r.numerator.should == 34
  end

  it "constructs a rational number with 1 as the denominator" do
    298.to_r.denominator.should == 1
  end

  it "works even if self is a Bignum" do
    bignum = 99999**999
    bignum.should be_an_instance_of(Bignum)
    bignum.to_r.should == Rational(bignum, 1)
  end

  it "raises an ArgumentError if given any arguments" do
    lambda { 287.to_r(2) }.should raise_error(ArgumentError)
    lambda { 9102826.to_r(309, [], 71) }.should raise_error(ArgumentError)
  end
end
