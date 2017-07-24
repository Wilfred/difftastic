describe :math_atanh_base, shared: true do
  it "returns a float" do
    @object.send(@method, 0.5).should be_an_instance_of(Float)
  end

  it "returns the inverse hyperbolic tangent of the argument" do
    @object.send(@method, 0.0).should == 0.0
    @object.send(@method, -0.0).should == -0.0
    @object.send(@method, 0.5).should be_close(0.549306144334055, TOLERANCE)
    @object.send(@method, -0.2).should be_close(-0.202732554054082, TOLERANCE)
  end

  it "raises a TypeError if the argument is nil" do
    lambda { @object.send(@method, nil) }.should raise_error(TypeError)
  end

  it "raises a TypeError if the argument is not a Numeric" do
    lambda { @object.send(@method, "test") }.should raise_error(TypeError)
  end

  it "returns Infinity if x == 1.0" do
    @object.send(@method, 1.0).should == Float::INFINITY
  end

  it "return -Infinity if x == -1.0" do
    @object.send(@method, -1.0).should == -Float::INFINITY
  end
end

describe :math_atanh_private, shared: true do
  it "is a private instance method" do
    Math.should have_private_instance_method(@method)
  end
end

describe :math_atanh_no_complex, shared: true do
  it "raises a Math::DomainError for arguments greater than 1.0" do
    lambda { @object.send(@method, 1.0 + Float::EPSILON)  }.should raise_error(Math::DomainError)
  end

  it "raises a Math::DomainError for arguments less than -1.0" do
    lambda { @object.send(@method, -1.0 - Float::EPSILON) }.should raise_error(Math::DomainError)
  end
end
