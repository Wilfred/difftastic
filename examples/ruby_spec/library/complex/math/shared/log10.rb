require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_log10, shared: true do
  it "returns the base-10 logarithm of the passed argument" do
    @object.send(:log10, 0.0001).should be_close(-4.0, TOLERANCE)
    @object.send(:log10, 0.000000000001e-15).should be_close(-27.0, TOLERANCE)
    @object.send(:log10, 1).should be_close(0.0, TOLERANCE)
    @object.send(:log10, 10).should be_close(1.0, TOLERANCE)
    @object.send(:log10, 10e15).should be_close(16.0, TOLERANCE)
  end

  it "returns the base-10 logarithm for Complex numbers" do
    @object.send(:log10, Complex(3, 4)).should be_close(Complex(0.698970004336019, 0.402719196273373), TOLERANCE)
    @object.send(:log10, Complex(-3, 4)).should be_close(Complex(0.698970004336019, 0.961657157568468), TOLERANCE)
  end

  # BUG: does not work correctly, because Math#log10
  # does not check for negative values
  #it "returns the base-10 logarithm for negative numbers as a Complex number" do
  #  @object.send(:log10, -10).should be_close(Complex(2.30258509299405, 3.14159265358979), TOLERANCE)
  #  @object.send(:log10, -20).should be_close(Complex(2.99573227355399, 3.14159265358979), TOLERANCE)
  #end
end

describe :complex_math_log10_bang, shared: true do
  it "returns the base-10 logarithm of the argument" do
    @object.send(:log10!, 0.0001).should be_close(-4.0, TOLERANCE)
    @object.send(:log10!, 0.000000000001e-15).should be_close(-27.0, TOLERANCE)
    @object.send(:log10!, 1).should be_close(0.0, TOLERANCE)
    @object.send(:log10!, 10).should be_close(1.0, TOLERANCE)
    @object.send(:log10!, 10e15).should be_close(16.0, TOLERANCE)
  end

  it "raises an Errno::EDOM when the passed argument is negative" do
    lambda { @object.send(:log10!, -10) }.should raise_error(Errno::EDOM)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:log10!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
