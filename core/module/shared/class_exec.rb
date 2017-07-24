describe :module_class_exec, shared: true do
  it "does not add defined methods to other classes" do
    FalseClass.send(@method) do
      def foo
        'foo'
      end
    end
    lambda {42.foo}.should raise_error(NoMethodError)
  end

  it "defines method in the receiver's scope" do
    ModuleSpecs::Subclass.send(@method) { def foo; end }
    ModuleSpecs::Subclass.new.respond_to?(:foo).should == true
  end

  it "evaluates a given block in the context of self" do
    ModuleSpecs::Subclass.send(@method) { self }.should == ModuleSpecs::Subclass
    ModuleSpecs::Subclass.new.send(@method) { 1 + 1 }.should == 2
  end

  it "raises a LocalJumpError when no block is given" do
    lambda { ModuleSpecs::Subclass.send(@method) }.should raise_error(LocalJumpError)
  end

  it "passes arguments to the block" do
    a = ModuleSpecs::Subclass
    a.send(@method, 1) { |b| b }.should equal(1)
  end
end
