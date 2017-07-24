require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_divmod_rat, shared: true do
  it "returns the quotient as Integer and the remainder as Rational" do
    Rational(7, 4).divmod(Rational(1, 2)).should eql([3, Rational(1, 4)])
    Rational(7, 4).divmod(Rational(-1, 2)).should eql([-4, Rational(-1, 4)])
    Rational(0, 4).divmod(Rational(4, 3)).should eql([0, Rational(0, 1)])

    Rational(bignum_value, 4).divmod(Rational(4, 3)).should eql([1729382256910270464, Rational(0, 1)])
  end

  it "raises a ZeroDivisonError when passed a Rational with a numerator of 0" do
    lambda { Rational(7, 4).divmod(Rational(0, 3)) }.should raise_error(ZeroDivisionError)
  end
end

describe :rational_divmod_int, shared: true do
  it "returns the quotient as Integer and the remainder as Rational" do
    Rational(7, 4).divmod(2).should eql([0, Rational(7, 4)])
    Rational(7, 4).divmod(-2).should eql([-1, Rational(-1, 4)])

    Rational(bignum_value, 4).divmod(3).should == [768614336404564650, Rational(2, 1)]
  end

  it "raises a ZeroDivisionError when passed 0" do
    lambda { Rational(7, 4).divmod(0) }.should raise_error(ZeroDivisionError)
  end
end

describe :rational_divmod_float, shared: true do
  it "returns the quotient as Integer and the remainder as Float" do
    Rational(7, 4).divmod(0.5).should eql([3, 0.25])
  end

  it "returns the quotient as Integer and the remainder as Float" do
    Rational(7, 4).divmod(-0.5).should eql([-4, -0.25])
  end

  it "raises a ZeroDivisionError when passed 0" do
    lambda { Rational(7, 4).divmod(0.0) }.should raise_error(ZeroDivisionError)
  end
end
