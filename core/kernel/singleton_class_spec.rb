describe "Kernel#singleton_class" do
  it "returns class extended from an object" do
    x = Object.new
    xs = class << x; self; end
    xs.should == x.singleton_class
  end

  it "returns NilClass for nil" do
    nil.singleton_class.should == NilClass
  end

  it "returns TrueClass for true" do
    true.singleton_class.should == TrueClass
  end

  it "returns FalseClass for false" do
    false.singleton_class.should == FalseClass
  end

  it "raises TypeError for Fixnum" do
    lambda { 123.singleton_class }.should raise_error(TypeError)
  end

  it "raises TypeError for Symbol" do
    lambda { :foo.singleton_class }.should raise_error(TypeError)
  end
end
