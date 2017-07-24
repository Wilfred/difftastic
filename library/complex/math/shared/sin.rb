require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_sin, shared: true do
  it "returns the sine of the passed argument expressed in radians" do
    @object.send(:sin, CMath::PI).should be_close(0.0, TOLERANCE)
    @object.send(:sin, 0).should be_close(0.0, TOLERANCE)
    @object.send(:sin, CMath::PI/2).should be_close(1.0, TOLERANCE)
    @object.send(:sin, 3*Math::PI/2).should be_close(-1.0, TOLERANCE)
    @object.send(:sin, 2*Math::PI).should be_close(0.0, TOLERANCE)
  end

  it "returns the sine for Complex numbers" do
    @object.send(:sin, Complex(0, CMath::PI)).should be_close(Complex(0.0, 11.5487393572577), TOLERANCE)
    @object.send(:sin, Complex(3, 4)).should be_close(Complex(3.85373803791938, -27.0168132580039), TOLERANCE)
  end
end

describe :complex_math_sin_bang, shared: true do
  it "returns the sine of the passed argument expressed in radians" do
    @object.send(:sin!, CMath::PI).should be_close(0.0, TOLERANCE)
    @object.send(:sin!, 0).should be_close(0.0, TOLERANCE)
    @object.send(:sin!, CMath::PI/2).should be_close(1.0, TOLERANCE)
    @object.send(:sin!, 3*Math::PI/2).should be_close(-1.0, TOLERANCE)
    @object.send(:sin!, 2*Math::PI).should be_close(0.0, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:sin!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
