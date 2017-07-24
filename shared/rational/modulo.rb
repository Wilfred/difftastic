require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_modulo, shared: true do
  it "returns the remainder when this value is divided by other" do
    Rational(2, 3).send(@method, Rational(2, 3)).should == Rational(0, 1)
    Rational(4, 3).send(@method, Rational(2, 3)).should == Rational(0, 1)
    Rational(2, -3).send(@method, Rational(-2, 3)).should == Rational(0, 1)
    Rational(0, -1).send(@method, -1).should == Rational(0, 1)

    Rational(7, 4).send(@method, Rational(1, 2)).should == Rational(1, 4)
    Rational(7, 4).send(@method, 1).should == Rational(3, 4)
    Rational(7, 4).send(@method, Rational(1, 7)).should == Rational(1, 28)

    Rational(3, 4).send(@method, -1).should == Rational(-1, 4)
    Rational(1, -5).send(@method, -1).should == Rational(-1, 5)
  end

  it "returns a Float value when the argument is Float" do
    Rational(7, 4).send(@method, 1.0).should be_kind_of(Float)
    Rational(7, 4).send(@method, 1.0).should == 0.75
    Rational(7, 4).send(@method, 0.26).should be_close(0.19, 0.0001)
  end

  it "raises ZeroDivisionError on zero denominator" do
    lambda {
      Rational(3, 5).send(@method, Rational(0, 1))
    }.should raise_error(ZeroDivisionError)

    lambda {
      Rational(0, 1).send(@method, Rational(0, 1))
    }.should raise_error(ZeroDivisionError)

    lambda {
      Rational(3, 5).send(@method, 0)
    }.should raise_error(ZeroDivisionError)
  end

  it "raises a ZeroDivisionError when the argument is 0.0" do
    lambda {
      Rational(3, 5).send(@method, 0.0)
    }.should raise_error(ZeroDivisionError)
  end
end
