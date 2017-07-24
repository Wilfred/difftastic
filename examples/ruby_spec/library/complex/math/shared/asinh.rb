require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_asinh, shared: true do
  it "returns the inverse hyperbolic sin of the argument" do
    @object.send(:asinh, 1.5).should be_close(1.19476321728711, TOLERANCE)
    @object.send(:asinh, -2.97).should be_close(-1.8089166921397, TOLERANCE)
    @object.send(:asinh, 0.0).should == 0.0
    @object.send(:asinh, -0.0).should == -0.0
    @object.send(:asinh, 1.05367e-08).should be_close(1.05367e-08, TOLERANCE)
    @object.send(:asinh, -1.05367e-08).should be_close(-1.05367e-08, TOLERANCE)
  end

  it "returns the inverse hyperbolic sin for Complex numbers" do
    @object.send(:asinh, Complex(3, 4)).should be_close(Complex(2.29991404087927, 0.917616853351479), TOLERANCE)
    @object.send(:asinh, Complex(3.5, -4)).should be_close(Complex(2.36263337274419, -0.843166327537659), TOLERANCE)
  end
end

describe :complex_math_asinh_bang, shared: true do
  it "returns the inverse hyperbolic sin of the argument" do
    @object.send(:asinh!, 1.5).should be_close(1.19476321728711, TOLERANCE)
    @object.send(:asinh!, -2.97).should be_close(-1.8089166921397, TOLERANCE)
    @object.send(:asinh!, 0.0).should == 0.0
    @object.send(:asinh!, -0.0).should == -0.0
    @object.send(:asinh!, 1.05367e-08).should be_close(1.05367e-08, TOLERANCE)
    @object.send(:asinh!, -1.05367e-08).should be_close(-1.05367e-08, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:asinh!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
