require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_sqrt, shared: true do
  it "returns the square root for positive numbers" do
    @object.send(:sqrt, 4).should == 2
    @object.send(:sqrt, 19.36).should == 4.4
  end

  it "returns the square root for negative numbers" do
    @object.send(:sqrt, -4).should == Complex(0, 2.0)
    @object.send(:sqrt, -19.36).should == Complex(0, 4.4)
  end

  it "returns the square root for Complex numbers" do
    @object.send(:sqrt, Complex(4, 5)).should be_close(Complex(2.2806933416653, 1.09615788950152), TOLERANCE)
    @object.send(:sqrt, Complex(4, -5)).should be_close(Complex(2.2806933416653, -1.09615788950152), TOLERANCE)
  end
end

describe :complex_math_sqrt_bang, shared: true do
  it "returns the square root for positive numbers" do
    @object.send(:sqrt!, 4).should == 2
    @object.send(:sqrt!, 19.36).should == 4.4
  end

  it "raises Errno::EDOM when the passed argument is negative" do
    lambda { @object.send(:sqrt!, -4) }.should raise_error(Errno::EDOM)
    lambda { @object.send(:sqrt!, -19.36) }.should raise_error(Errno::EDOM)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:sqrt!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
