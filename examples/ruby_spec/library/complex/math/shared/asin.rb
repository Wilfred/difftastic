require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_asin, shared: true do
  it "returns the arcsine of the argument" do
    @object.send(:asin, 1).should be_close(Math::PI/2, TOLERANCE)
    @object.send(:asin, 0).should be_close(0.0, TOLERANCE)
    @object.send(:asin, -1).should be_close(-Math::PI/2, TOLERANCE)
    @object.send(:asin, 0.25).should be_close(0.252680255142079, TOLERANCE)
    @object.send(:asin, 0.50).should be_close(0.523598775598299, TOLERANCE)
    @object.send(:asin, 0.75).should be_close(0.8480620789814816,TOLERANCE)
  end

  it "returns the arcsine for Complex numbers" do
    @object.send(:asin, Complex(3, 4)).should be_close(Complex(0.633983865639174, 2.30550903124347), TOLERANCE)
  end

  it "returns a Complex number when the argument is greater than 1.0" do
    @object.send(:asin, 1.0001).should be_close(Complex(1.5707963267949, -0.0141420177752494), TOLERANCE)
  end

  it "returns a Complex number when the argument is less than -1.0" do
    @object.send(:asin, -1.0001).should be_close(Complex(-1.5707963267949, 0.0141420177752494), TOLERANCE)
  end
end

describe :complex_math_asin_bang, shared: true do
  it "returns the arcsine of the argument" do
    @object.send(:asin!, 1).should be_close(Math::PI/2, TOLERANCE)
    @object.send(:asin!, 0).should be_close(0.0, TOLERANCE)
    @object.send(:asin!, -1).should be_close(-Math::PI/2, TOLERANCE)
    @object.send(:asin!, 0.25).should be_close(0.252680255142079, TOLERANCE)
    @object.send(:asin!, 0.50).should be_close(0.523598775598299, TOLERANCE)
    @object.send(:asin!, 0.75).should be_close(0.8480620789814816,TOLERANCE)
  end

  it "raises an Errno::EDOM if the argument is greater than 1.0" do
    lambda { @object.send(:asin!, 1.0001) }.should raise_error( Errno::EDOM)
  end

  it "raises an Errno::EDOM if the argument is less than -1.0" do
    lambda { @object.send(:asin!, -1.0001) }.should raise_error( Errno::EDOM)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:asin!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
