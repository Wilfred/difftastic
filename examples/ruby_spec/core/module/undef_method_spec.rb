require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

module ModuleSpecs
  class Parent
    def method_to_undef() 1 end
    def another_method_to_undef() 1 end
  end

  class Ancestor
    def method_to_undef() 1 end
    def another_method_to_undef() 1 end
  end
end

describe "Module#undef_method" do
  before :each do
    @module = Module.new { def method_to_undef; end }
  end

  it "is a private method" do
    Module.should have_private_instance_method(:undef_method, false)
  end

  it "requires multiple arguments" do
    Module.instance_method(:undef_method).arity.should < 0
  end

  it "allows multiple methods to be removed at once" do
    klass = Class.new do
      def method_to_undef() 1 end
      def another_method_to_undef() 1 end
    end
    x = klass.new
    klass.send(:undef_method, :method_to_undef, :another_method_to_undef)

    lambda { x.method_to_undef }.should raise_error(NoMethodError)
    lambda { x.another_method_to_undef }.should raise_error(NoMethodError)
  end

  it "does not undef any instance methods when argument not given" do
    before = @module.instance_methods(true) + @module.private_instance_methods(true)
    @module.send :undef_method
    after = @module.instance_methods(true) + @module.private_instance_methods(true)
    before.sort.should == after.sort
  end

  it "returns self" do
    @module.send(:undef_method, :method_to_undef).should equal(@module)
  end

  it "raises a NameError when passed a missing name" do
    lambda { @module.send :undef_method, :not_exist }.should raise_error(NameError) { |e|
      # a NameError and not a NoMethodError
      e.class.should == NameError
    }
  end

  describe "on frozen instance" do
    before :each do
      @frozen = @module.dup.freeze
    end

    it "raises a RuntimeError when passed a name" do
      lambda { @frozen.send :undef_method, :method_to_undef }.should raise_error(RuntimeError)
    end

    it "raises a RuntimeError when passed a missing name" do
      lambda { @frozen.send :undef_method, :not_exist }.should raise_error(RuntimeError)
    end

    it "raises a TypeError when passed a not name" do
      lambda { @frozen.send :undef_method, Object.new }.should raise_error(TypeError)
    end

    it "does not raise exceptions when no arguments given" do
      @frozen.send(:undef_method).should equal(@frozen)
    end
  end
end

describe "Module#undef_method with symbol" do
  it "removes a method defined in a class" do
    klass = Class.new do
      def method_to_undef() 1 end
      def another_method_to_undef() 1 end
    end
    x = klass.new

    x.method_to_undef.should == 1

    klass.send :undef_method, :method_to_undef

    lambda { x.method_to_undef }.should raise_error(NoMethodError)
  end

  it "removes a method defined in a super class" do
    child_class = Class.new(ModuleSpecs::Parent)
    child = child_class.new
    child.method_to_undef.should == 1

    child_class.send :undef_method, :method_to_undef

    lambda { child.method_to_undef }.should raise_error(NoMethodError)
  end

  it "does not remove a method defined in a super class when removed from a subclass" do
    descendant = Class.new(ModuleSpecs::Ancestor)
    ancestor = ModuleSpecs::Ancestor.new
    ancestor.method_to_undef.should == 1

    descendant.send :undef_method, :method_to_undef

    ancestor.method_to_undef.should == 1
  end
end

describe "Module#undef_method with string" do
  it "removes a method defined in a class" do
    klass = Class.new do
      def method_to_undef() 1 end
      def another_method_to_undef() 1 end
    end
    x = klass.new

    x.another_method_to_undef.should == 1

    klass.send :undef_method, 'another_method_to_undef'

    lambda { x.another_method_to_undef }.should raise_error(NoMethodError)
  end

  it "removes a method defined in a super class" do
    child_class = Class.new(ModuleSpecs::Parent)
    child = child_class.new
    child.another_method_to_undef.should == 1

    child_class.send :undef_method, 'another_method_to_undef'

    lambda { child.another_method_to_undef }.should raise_error(NoMethodError)
  end

  it "does not remove a method defined in a super class when removed from a subclass" do
    descendant = Class.new(ModuleSpecs::Ancestor)
    ancestor = ModuleSpecs::Ancestor.new
    ancestor.another_method_to_undef.should == 1

    descendant.send :undef_method, 'another_method_to_undef'

    ancestor.another_method_to_undef.should == 1
  end
end
