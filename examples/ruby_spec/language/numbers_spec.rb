require File.expand_path('../../spec_helper', __FILE__)

describe "A number literal" do

  it "can be a sequence of decimal digits" do
    435.should == 435
  end

  it "can have '_' characters between digits" do
    4_3_5_7.should == 4357
  end

  it "cannot have a leading underscore" do
    lambda { eval("_4_2") }.should raise_error(NameError)
  end

  it "can have a decimal point" do
    4.35.should == 4.35
  end

  it "must have a digit before the decimal point" do
    0.75.should == 0.75
    lambda { eval(".75")  }.should raise_error(SyntaxError)
    lambda { eval("-.75") }.should raise_error(SyntaxError)
  end

  it "can have an exponent" do
    1.2e-3.should == 0.0012
  end

  it "can be a sequence of hexadecimal digits with a leading '0x'" do
    0xffff.should == 65535
  end

  it "can be a sequence of binary digits with a leading '0x'" do
    0b01011.should == 11
  end

  it "can be a sequence of octal digits with a leading '0'" do
    0377.should == 255
  end

  it "can be an integer literal with trailing 'r' to represent a Rational" do
    eval('3r').should == Rational(3, 1)
    eval('-3r').should == Rational(-3, 1)
  end

  it "can be an bignum literal with trailing 'r' to represent a Rational" do
    eval('1111111111111111111111111111111111111111111111r').should == Rational(1111111111111111111111111111111111111111111111, 1)
    eval('-1111111111111111111111111111111111111111111111r').should == Rational(-1111111111111111111111111111111111111111111111, 1)
  end

  it "can be a decimal literal with trailing 'r' to represent a Rational" do
    eval('0.3r').should == Rational(3, 10)
    eval('-0.3r').should == Rational(-3, 10)
  end

  it "can be a hexadecimal literal with trailing 'r' to represent a Rational" do
    eval('0xffr').should == Rational(255, 1)
    eval('-0xffr').should == Rational(-255, 1)
  end

  it "can be an octal literal with trailing 'r' to represent a Rational"  do
    eval('042r').should == Rational(34, 1)
    eval('-042r').should == Rational(-34, 1)
  end

  it "can be a binary literal with trailing 'r' to represent a Rational" do
    eval('0b1111r').should == Rational(15, 1)
    eval('-0b1111r').should == Rational(-15, 1)
  end

  it "can be an integer literal with trailing 'i' to represent a Complex" do
    eval('5i').should == Complex(0, 5)
    eval('-5i').should == Complex(0, -5)
  end

  it "can be a decimal literal with trailing 'i' to represent a Complex" do
    eval('0.6i').should == Complex(0, 0.6)
    eval('-0.6i').should == Complex(0, -0.6)
  end

  it "can be a hexadecimal literal with trailing 'i' to represent a Complex" do
    eval('0xffi').should == Complex(0, 255)
    eval('-0xffi').should == Complex(0, -255)
  end

  it "can be a octal literal with trailing 'i' to represent a Complex" do
    eval("042i").should == Complex(0, 34)
    eval("-042i").should == Complex(0, -34)
  end

  it "can be a binary literal with trailing 'i' to represent a Complex" do
    eval('0b1110i').should == Complex(0, 14)
    eval('-0b1110i').should == Complex(0, -14)
  end
end
