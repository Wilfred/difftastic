require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_acosh, shared: true do
  it "returns the principle value of the inverse hyperbolic cosine of the argument" do
    @object.send(:acosh, 14.2).should be_close(3.345146999647, TOLERANCE)
    @object.send(:acosh, 1.0).should be_close(0.0, TOLERANCE)
  end

  it "returns the principle value of the inverse hyperbolic cosine for numbers less than 1.0 as a Complex number" do
    @object.send(:acosh, 1.0 - TOLERANCE).should be_close(Complex(0.0, 0.00774598605746135), TOLERANCE)
    @object.send(:acosh, 0).should be_close(Complex(0.0, 1.5707963267949), TOLERANCE)
    @object.send(:acosh, -1.0).should be_close(Complex(0.0, 3.14159265358979), TOLERANCE)
  end

  it "returns the principle value of the inverse hyperbolic cosine for Complex numbers" do
    @object.send(:acosh, Complex(3, 4))
    @object.send(:acosh, Complex(3, 4)).imaginary.should be_close(0.93681246115572, TOLERANCE)
    @object.send(:acosh, Complex(3, 4)).real.should be_close(2.305509031243477, TOLERANCE)
  end
end

describe :complex_math_acosh_bang, shared: true do
  it "returns the principle value of the inverse hyperbolic cosine of the argument" do
    @object.send(:acosh!, 14.2).should be_close(3.345146999647, TOLERANCE)
    @object.send(:acosh!, 1.0).should be_close(0.0, TOLERANCE)
  end

  it "raises Errno::EDOM for numbers less than 1.0" do
    lambda { @object.send(:acosh!, 1.0 - TOLERANCE) }.should raise_error(Errno::EDOM)
    lambda { @object.send(:acosh!, 0) }.should raise_error(Errno::EDOM)
    lambda { @object.send(:acosh!, -1.0) }.should raise_error(Errno::EDOM)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:acosh!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
