require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_acos, shared: true do
  it "returns the arccosine of the passed argument" do
    @object.send(:acos, 1).should be_close(0.0, TOLERANCE)
    @object.send(:acos, 0).should be_close(1.5707963267949, TOLERANCE)
    @object.send(:acos, -1).should be_close(Math::PI,TOLERANCE)
  end

  it "returns the arccosine for Complex numbers" do
    @object.send(:acos, Complex(3, 4)).should be_close(Complex(0.93681246115572, -2.30550903124348), TOLERANCE)
  end

  it "returns the arccosine for numbers greater than 1.0 as a Complex number" do
    @object.send(:acos, 1.0001).should be_close(Complex(0.0, 0.0141420177752494), TOLERANCE)
  end

  it "returns the arccosine for numbers less than -1.0 as a Complex number" do
    @object.send(:acos, -1.0001).should be_close(Complex(3.14159265358979, -0.0141420177752495), TOLERANCE)
  end
end

describe :complex_math_acos_bang, shared: true do
  it "returns the arccosine of the argument" do
    @object.send(:acos!, 1).should be_close(0.0, TOLERANCE)
    @object.send(:acos!, 0).should be_close(1.5707963267949, TOLERANCE)
    @object.send(:acos!, -1).should be_close(Math::PI,TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:acos!, Complex(4, 5)) }.should raise_error(TypeError)
  end

  it "raises an Errno::EDOM for numbers greater than 1.0" do
    lambda { @object.send(:acos!, 1.0001) }.should raise_error(Errno::EDOM)
  end

  it "raises an Errno::EDOM for numbers less than -1.0" do
    lambda { @object.send(:acos!, -1.0001) }.should raise_error(Errno::EDOM)
  end
end
