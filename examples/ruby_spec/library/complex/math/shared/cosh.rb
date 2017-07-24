require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_cosh, shared: true do
  it "returns the hyperbolic cosine of the passed argument" do
    @object.send(:cosh, 0.0).should == 1.0
    @object.send(:cosh, -0.0).should == 1.0
    @object.send(:cosh, 1.5).should be_close(2.35240961524325, TOLERANCE)
    @object.send(:cosh, -2.99).should be_close(9.96798496414416, TOLERANCE)
  end

  it "returns the hyperbolic cosine for Complex numbers" do
    @object.send(:cosh, Complex(0, CMath::PI)).should be_close(Complex(-1.0, 0.0), TOLERANCE)
    @object.send(:cosh, Complex(3, 4)).should be_close(Complex(-6.58066304055116, -7.58155274274654), TOLERANCE)
  end
end

describe :complex_math_cosh_bang, shared: true do
  it "returns the hyperbolic cosine of the passed argument" do
    @object.send(:cosh!, 0.0).should == 1.0
    @object.send(:cosh!, -0.0).should == 1.0
    @object.send(:cosh!, 1.5).should be_close(2.35240961524325, TOLERANCE)
    @object.send(:cosh!, -2.99).should be_close(9.96798496414416, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:cosh!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
