require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_tan, shared: true do
  it "returns the tangent of the argument" do
    @object.send(:tan, 0.0).should == 0.0
    @object.send(:tan, -0.0).should == -0.0
    @object.send(:tan, 4.22).should be_close(1.86406937682395, TOLERANCE)
    @object.send(:tan, -9.65).should be_close(-0.229109052606441, TOLERANCE)
  end

  it "returns the tangent for Complex numbers" do
    @object.send(:tan, Complex(0, CMath::PI)).should be_close(Complex(0.0, 0.99627207622075), TOLERANCE)
    @object.send(:tan, Complex(3, 4)).should be_close(Complex(-0.000187346204629452, 0.999355987381473), TOLERANCE)
  end
end

describe :complex_math_tan_bang, shared: true do
  it "returns the tangent of the argument" do
    @object.send(:tan!, 0.0).should == 0.0
    @object.send(:tan!, -0.0).should == -0.0
    @object.send(:tan!, 4.22).should be_close(1.86406937682395, TOLERANCE)
    @object.send(:tan!, -9.65).should be_close(-0.229109052606441, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:tan!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
