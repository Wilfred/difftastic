require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_atan, shared: true do
  it "returns the arctangent of the argument" do
    @object.send(:atan, 1).should be_close(Math::PI/4, TOLERANCE)
    @object.send(:atan, 0).should be_close(0.0, TOLERANCE)
    @object.send(:atan, -1).should be_close(-Math::PI/4, TOLERANCE)
    @object.send(:atan, 0.25).should be_close(0.244978663126864, TOLERANCE)
    @object.send(:atan, 0.50).should be_close(0.463647609000806, TOLERANCE)
    @object.send(:atan, 0.75).should be_close(0.643501108793284, TOLERANCE)
  end

  it "returns the arctangent for Complex numbers" do
    @object.send(:atan, Complex(3, 4)).should be_close(Complex(1.44830699523146, 0.158997191679999), TOLERANCE)
    @object.send(:atan, Complex(3.5, -4)).should be_close(Complex(1.44507428165589, -0.140323762363786), TOLERANCE)
  end
end

describe :complex_math_atan_bang, shared: true do
  it "returns the arctangent of the argument" do
    @object.send(:atan!, 1).should be_close(Math::PI/4, TOLERANCE)
    @object.send(:atan!, 0).should be_close(0.0, TOLERANCE)
    @object.send(:atan!, -1).should be_close(-Math::PI/4, TOLERANCE)
    @object.send(:atan!, 0.25).should be_close(0.244978663126864, TOLERANCE)
    @object.send(:atan!, 0.50).should be_close(0.463647609000806, TOLERANCE)
    @object.send(:atan!, 0.75).should be_close(0.643501108793284, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:atan!, Complex(4, 5)) }.should raise_error(TypeError)
  end
end
