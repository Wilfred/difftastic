require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_atanh_complex, shared: true do
  it "returns the inverse hyperbolic tangent as a Complex number for arguments greater than 1.0" do
    value = Complex(18.36840028483855, 1.5707963267948966)
    @object.send(@method, 1.0 + Float::EPSILON).should be_close(value, TOLERANCE)

    value = Complex(0.100335347731076, 1.5707963267949)
    @object.send(@method, 10).should be_close(value, TOLERANCE)
  end

  it "returns the inverse hyperbolic tangent as a Complex number for arguments greater than 1.0" do
    value = Complex(-18.36840028483855, 1.5707963267948966)
    @object.send(@method, -1.0 - Float::EPSILON).should be_close(value, TOLERANCE)

    value = Complex(0.100335347731076, 1.5707963267949)
    @object.send(@method, 10).should be_close(value, TOLERANCE)
  end

  it "returns the inverse hyperbolic tangent for Complex numbers" do
    value = Complex(0.117500907311434, 1.40992104959658)
    @object.send(@method, Complex(3, 4)).should be_close(value, TOLERANCE)
  end
end

describe :complex_math_atanh_no_complex, shared: true do
  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:atanh!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
