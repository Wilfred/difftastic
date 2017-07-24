require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_cos, shared: true do
  it "returns the cosine of the argument expressed in radians" do
    @object.send(:cos, CMath::PI).should be_close(-1.0, TOLERANCE)
    @object.send(:cos, 0).should be_close(1.0, TOLERANCE)
    @object.send(:cos, CMath::PI/2).should be_close(0.0, TOLERANCE)
    @object.send(:cos, 3*Math::PI/2).should be_close(0.0, TOLERANCE)
    @object.send(:cos, 2*Math::PI).should be_close(1.0, TOLERANCE)
  end

  it "returns the cosine for Complex numbers" do
    @object.send(:cos, Complex(0, CMath::PI)).should be_close(Complex(11.5919532755215, 0.0), TOLERANCE)
    @object.send(:cos, Complex(3, 4)).should be_close(Complex(-27.0349456030742, -3.85115333481178), TOLERANCE)
  end
end

describe :complex_math_cos_bang, shared: true do
  it "returns the cosine of the argument expressed in radians" do
    @object.send(:cos!, CMath::PI).should be_close(-1.0, TOLERANCE)
    @object.send(:cos!, 0).should be_close(1.0, TOLERANCE)
    @object.send(:cos!, CMath::PI/2).should be_close(0.0, TOLERANCE)
    @object.send(:cos!, 3*Math::PI/2).should be_close(0.0, TOLERANCE)
    @object.send(:cos!, 2*Math::PI).should be_close(1.0, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:cos!, Complex(3, 4)) }.should raise_error(TypeError)
  end
end
