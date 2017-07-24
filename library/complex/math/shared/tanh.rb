require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_tanh, shared: true do
  it "returns the hyperbolic tangent of the argument" do
    @object.send(:tanh, 0.0).should == 0.0
    @object.send(:tanh, -0.0).should == -0.0
    @object.send(:tanh, infinity_value).should == 1.0
    @object.send(:tanh, -infinity_value).should == -1.0
    @object.send(:tanh, 2.5).should be_close(0.98661429815143, TOLERANCE)
    @object.send(:tanh, -4.892).should be_close(-0.999887314427707, TOLERANCE)
  end

  it "returns the hyperbolic tangent for Complex numbers" do
    @object.send(:tanh, Complex(0, CMath::PI)).should be_close(Complex(0.0, -1.22464679914735e-16), TOLERANCE)
    @object.send(:tanh, Complex(3, 4)).should be_close(Complex(1.00070953606723, 0.00490825806749599), TOLERANCE)
  end
end

describe :complex_math_tanh_bang, shared: true do
  it "returns the hyperbolic tangent of the argument" do
    @object.send(:tanh!, 0.0).should == 0.0
    @object.send(:tanh!, -0.0).should == -0.0
    @object.send(:tanh!, infinity_value).should == 1.0
    @object.send(:tanh!, -infinity_value).should == -1.0
    @object.send(:tanh!, 2.5).should be_close(0.98661429815143, TOLERANCE)
    @object.send(:tanh!, -4.892).should be_close(-0.999887314427707, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:tanh!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
