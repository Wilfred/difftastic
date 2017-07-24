describe :binding_clone, shared: true do
  before :each do
    @b1 = BindingSpecs::Demo.new(99).get_binding
    @b2 = @b1.send(@method)
    @b3 = BindingSpecs::Demo.new(99).get_binding_in_block
    @b4 = @b3.send(@method)
  end

  it "returns a copy of the Binding object" do
    [[@b1, @b2, "a"],
     [@b3, @b4, "a", "b"]].each do |b1, b2, *vars|
      b1.should_not == b2

      eval("@secret", b1).should == eval("@secret", b2)
      eval("square(2)", b1).should == eval("square(2)", b2)
      eval("self.square(2)", b1).should == eval("self.square(2)", b2)
      vars.each do |v|
        eval("#{v}", b1).should == eval("#{v}", b2)
      end
    end
  end

  it "is a shallow copy of the Binding object" do
    [[@b1, @b2, "a"],
     [@b3, @b4, "a", "b"]].each do |b1, b2, *vars|
      vars.each do |v|
        eval("#{v} = false", b1)
        eval("#{v}", b2).should == false
      end
      b1.local_variable_set(:x, 37)
      b2.local_variable_defined?(:x).should == false
    end
  end
end
