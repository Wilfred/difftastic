require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_log, shared: true do
  it "returns the natural logarithm of the passed argument" do
    @object.send(:log, 0.0001).should be_close(-9.21034037197618, TOLERANCE)
    @object.send(:log, 0.000000000001e-15).should be_close(-62.1697975108392, TOLERANCE)
    @object.send(:log, 1).should be_close(0.0, TOLERANCE)
    @object.send(:log, 10).should be_close( 2.30258509299405, TOLERANCE)
    @object.send(:log, 10e15).should be_close(36.8413614879047, TOLERANCE)
  end

  it "returns the natural logarithm for Complex numbers" do
    @object.send(:log, Complex(3, 4)).should be_close(Complex(1.6094379124341, 0.927295218001612), TOLERANCE)
    @object.send(:log, Complex(-3, 4)).should be_close(Complex(1.6094379124341, 2.21429743558818), TOLERANCE)
  end

  it "returns the natural logarithm for negative numbers as a Complex number" do
    @object.send(:log, -10).should be_close(Complex(2.30258509299405, 3.14159265358979), TOLERANCE)
    @object.send(:log, -20).should be_close(Complex(2.99573227355399, 3.14159265358979), TOLERANCE)
  end
end

describe :complex_math_log_bang, shared: true do
  it "returns the natural logarithm of the argument" do
    @object.send(:log!, 0.0001).should be_close(-9.21034037197618, TOLERANCE)
    @object.send(:log!, 0.000000000001e-15).should be_close(-62.1697975108392, TOLERANCE)
    @object.send(:log!, 1).should be_close(0.0, TOLERANCE)
    @object.send(:log!, 10).should be_close( 2.30258509299405, TOLERANCE)
    @object.send(:log!, 10e15).should be_close(36.8413614879047, TOLERANCE)
  end

  it "raises an Errno::EDOM if the argument is less than 0" do
    lambda { @object.send(:log!, -10) }.should raise_error(Errno::EDOM)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:log!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
