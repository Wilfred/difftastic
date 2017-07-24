require File.expand_path('../../fixtures/classes', __FILE__)

describe :complex_math_exp, shared: true do
  it "returns the base-e exponential of the passed argument" do
    @object.send(:exp, 0.0).should == 1.0
    @object.send(:exp, -0.0).should == 1.0
    @object.send(:exp, -1.8).should be_close(0.165298888221587, TOLERANCE)
    @object.send(:exp, 1.25).should be_close(3.49034295746184, TOLERANCE)
  end

  it "returns the base-e exponential for Complex numbers" do
    @object.send(:exp, Complex(0, 0)).should == Complex(1.0, 0.0)
    @object.send(:exp, Complex(1, 3)).should be_close(Complex(-2.69107861381979, 0.383603953541131), TOLERANCE)
  end
end

describe :complex_math_exp_bang, shared: true do
  it "returns the base-e exponential of the passed argument" do
    @object.send(:exp!, 0.0).should == 1.0
    @object.send(:exp!, -0.0).should == 1.0
    @object.send(:exp!, -1.8).should be_close(0.165298888221587, TOLERANCE)
    @object.send(:exp!, 1.25).should be_close(3.49034295746184, TOLERANCE)
  end

  it "raises a TypeError when passed a Complex number" do
    lambda { @object.send(:exp!, Complex(1, 3)) }.should raise_error(TypeError)
  end
end
