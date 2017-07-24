require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_atan2, shared: true do
  it "returns the arc tangent of the passed arguments" do
    @object.send(:atan2, 4.2, 0.3).should be_close(1.49948886200961, TOLERANCE)
    @object.send(:atan2, 0.0, 1.0).should be_close(0.0, TOLERANCE)
    @object.send(:atan2, -9.1, 3.2).should be_close(-1.23265379809025, TOLERANCE)
    @object.send(:atan2, 7.22, -3.3).should be_close(1.99950888779256, TOLERANCE)
  end

  it "returns the arc tangent for two Complex numbers" do
    CMath.atan2(Complex(3, 4), Complex(3.5, -4)).should be_close(Complex(-0.641757436698881, 1.10829873031207), TOLERANCE)
  end

  it "returns the arc tangent for Complex and real numbers" do
    CMath.atan2(Complex(3, 4), -7).should be_close(Complex(2.61576754731561, -0.494290673139855), TOLERANCE)
    CMath.atan2(5, Complex(3.5, -4)).should be_close(Complex(0.739102348493673, 0.487821626522923), TOLERANCE)
  end
end

describe :complex_math_atan2_bang, shared: true do
  it "returns the arc tangent of the passed arguments" do
    @object.send(:atan2!, 4.2, 0.3).should be_close(1.49948886200961, TOLERANCE)
    @object.send(:atan2!, 0.0, 1.0).should be_close(0.0, TOLERANCE)
    @object.send(:atan2!, -9.1, 3.2).should be_close(-1.23265379809025, TOLERANCE)
    @object.send(:atan2!, 7.22, -3.3).should be_close(1.99950888779256, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:atan2!, Complex(4, 5), Complex(4, 5)) }.should raise_error(TypeError)
    lambda { @object.send(:atan2!, 4, Complex(4, 5)) }.should raise_error(TypeError)
    lambda { @object.send(:atan2!, Complex(4, 5), 5) }.should raise_error(TypeError)
  end
end
