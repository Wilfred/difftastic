require File.expand_path('../../../spec_helper', __FILE__)

describe "String#to_c" do
  it "returns a Complex object" do
    '9'.to_c.should be_an_instance_of(Complex)
  end

  it "understands integers" do
    '20'.to_c.should == Complex(20)
  end

  it "understands negative integers" do
    '-3'.to_c.should == Complex(-3)
  end

  it "understands fractions (numerator/denominator) for the real part" do
    '2/3'.to_c.should == Complex(Rational(2, 3))
  end

  it "understands fractions (numerator/denominator) for the imaginary part" do
    '4+2/3i'.to_c.should == Complex(4, Rational(2, 3))
  end

  it "understands negative fractions (-numerator/denominator) for the real part" do
    '-2/3'.to_c.should == Complex(Rational(-2, 3))
  end

  it "understands negative fractions (-numerator/denominator) for the imaginary part" do
    '7-2/3i'.to_c.should == Complex(7, Rational(-2, 3))
  end

  it "understands floats (a.b) for the real part" do
    '2.3'.to_c.should == Complex(2.3)
  end

  it "understands floats (a.b) for the imaginary part" do
    '4+2.3i'.to_c.should == Complex(4, 2.3)
  end

  it "understands negative floats (-a.b) for the real part" do
    '-2.33'.to_c.should == Complex(-2.33)
  end

  it "understands negative floats (-a.b) for the imaginary part" do
    '7-28.771i'.to_c.should == Complex(7, -28.771)
  end

  it "understands an integer followed by 'i' to mean that integer is the imaginary part" do
    '35i'.to_c.should == Complex(0,35)
  end

  it "understands a negative integer followed by 'i' to mean that negative integer is the imaginary part" do
    '-29i'.to_c.should == Complex(0,-29)
  end

  it "understands an 'i' by itself as denoting a complex number with an imaginary part of 1" do
    'i'.to_c.should == Complex(0,1)
  end

  it "understands a '-i' by itself as denoting a complex number with an imaginary part of -1" do
    '-i'.to_c.should == Complex(0,-1)
  end

  it "understands 'a+bi' to mean a complex number with 'a' as the real part, 'b' as the imaginary" do
    '79+4i'.to_c.should == Complex(79,4)
  end

  it "understands 'a-bi' to mean a complex number with 'a' as the real part, '-b' as the imaginary" do
    '79-4i'.to_c.should == Complex(79,-4)
  end

  it "understands scientific notation for the real part" do
    '2e3+4i'.to_c.should == Complex(2e3,4)
  end

  it "understands negative scientific notation for the real part" do
    '-2e3+4i'.to_c.should == Complex(-2e3,4)
  end

  it "understands scientific notation for the imaginary part" do
    '4+2e3i'.to_c.should == Complex(4, 2e3)
  end

  it "understands negative scientific notation for the imaginary part" do
    '4-2e3i'.to_c.should == Complex(4, -2e3)
  end

  it "understands scientific notation for the real and imaginary part in the same String" do
    '2e3+2e4i'.to_c.should == Complex(2e3,2e4)
  end

  it "understands negative scientific notation for the real and imaginary part in the same String" do
    '-2e3-2e4i'.to_c.should == Complex(-2e3,-2e4)
  end

  it "returns a complex number with 0 as the real part, 0 as the imaginary part for unrecognised Strings" do
  'ruby'.to_c.should == Complex(0,0)
  end
end
