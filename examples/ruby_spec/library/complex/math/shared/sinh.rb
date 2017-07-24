require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_sinh, shared: true do
  it "returns the hyperbolic sin of the argument" do
    @object.send(:sinh, 0.0).should == 0.0
    @object.send(:sinh, -0.0).should == 0.0
    @object.send(:sinh, 1.5).should be_close(2.12927945509482, TOLERANCE)
    @object.send(:sinh, -2.8).should be_close(-8.19191835423591, TOLERANCE)
  end

  it "returns the hyperbolic sin for Complex numbers" do
    @object.send(:sinh, Complex(0, CMath::PI)).should be_close(Complex(-0.0, 1.22464679914735e-16), TOLERANCE)
    @object.send(:sinh, Complex(3, 4)).should be_close(Complex(-6.548120040911, -7.61923172032141), TOLERANCE)
  end
end

describe :complex_math_sinh_bang, shared: true do
  it "returns the hyperbolic sin of the argument" do
    @object.send(:sinh!, 0.0).should == 0.0
    @object.send(:sinh!, -0.0).should == 0.0
    @object.send(:sinh!, 1.5).should be_close(2.12927945509482, TOLERANCE)
    @object.send(:sinh!, -2.8).should be_close(-8.19191835423591, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:sinh!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
