require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_div_rat, shared: true do
  it "performs integer division and returns the result" do
    Rational(2, 3).div(Rational(2, 3)).should == 1
    Rational(-2, 9).div(Rational(-9, 2)).should == 0
  end

  it "raises a ZeroDivisionError when the argument has a numerator of 0" do
    lambda { Rational(3, 4).div(Rational(0, 3)) }.should raise_error(ZeroDivisionError)
  end

  it "raises a ZeroDivisionError when the argument has a numerator of 0.0" do
    lambda { Rational(3, 4).div(Rational(0.0, 3)) }.should raise_error(ZeroDivisionError)
  end
end

describe :rational_div_float, shared: true do
  it "performs integer division and returns the result" do
    Rational(2, 3).div(30.333).should == 0
    Rational(2, 9).div(Rational(-8.6)).should == -1
    Rational(3.12).div(0.5).should == 6
  end

  it "raises a ZeroDivisionError when the argument is 0.0" do
    lambda { Rational(3, 4).div(0.0) }.should raise_error(ZeroDivisionError)
  end
end

describe :rational_div_int, shared: true do
  it "performs integer division and returns the result" do
    Rational(2, 1).div(1).should == 2
    Rational(25, 5).div(-50).should == -1
  end

  it "raises a ZeroDivisionError when the argument is 0" do
    lambda { Rational(3, 4).div(0) }.should raise_error(ZeroDivisionError)
  end
end

describe :rational_div, shared: true do
  it "returns an Integer" do
    Rational(229, 21).div(82).should be_kind_of(Integer)
  end

  it "raises an ArgumentError if passed more than one argument" do
    lambda { Rational(3, 4).div(2,3) }.should raise_error(ArgumentError)
  end

  # See http://redmine.ruby-lang.org/issues/show/1648
  it "raises a TypeError if passed a non-numeric argument" do
    lambda { Rational(3, 4).div([]) }.should raise_error(TypeError)
  end
end
