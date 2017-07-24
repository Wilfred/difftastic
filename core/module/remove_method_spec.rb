require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

module ModuleSpecs
  class Parent
    def method_to_remove; 1; end
  end

  class First
    def method_to_remove; 1; end
  end

  class Second < First
    def method_to_remove; 2; end
  end
end

describe "Module#remove_method" do
  before :each do
    @module = Module.new { def method_to_remove; end }
  end

  it "is a private method" do
    Module.should have_private_instance_method(:remove_method, false)
  end

  it "removes the method from a class" do
    klass = Class.new do
      def method_to_remove; 1; end
    end
    x = klass.new
    klass.send(:remove_method, :method_to_remove)
    x.respond_to?(:method_to_remove).should == false
  end

  it "removes method from subclass, but not parent" do
    child = Class.new(ModuleSpecs::Parent) do
      def method_to_remove; 2; end
      remove_method :method_to_remove
    end
    x = child.new
    x.respond_to?(:method_to_remove).should == true
    x.method_to_remove.should == 1
  end

  it "removes multiple methods with 1 call" do
    klass = Class.new do
      def method_to_remove_1; 1; end
      def method_to_remove_2; 2; end
      remove_method :method_to_remove_1, :method_to_remove_2
    end
    x = klass.new
    x.respond_to?(:method_to_remove_1).should == false
    x.respond_to?(:method_to_remove_2).should == false
  end

  it "accepts multiple arguments" do
    Module.instance_method(:remove_method).arity.should < 0
  end

  it "does not remove any instance methods when argument not given" do
    before = @module.instance_methods(true) + @module.private_instance_methods(true)
    @module.send :remove_method
    after = @module.instance_methods(true) + @module.private_instance_methods(true)
    before.sort.should == after.sort
  end

  it "returns self" do
    @module.send(:remove_method, :method_to_remove).should equal(@module)
  end

  it "raises a NameError when attempting to remove method further up the inheritance tree" do
    lambda {
      class Third < ModuleSpecs::Second
        remove_method :method_to_remove
      end
    }.should raise_error(NameError)
  end

  it "raises a NameError when attempting to remove a missing method" do
    lambda {
      class Third < ModuleSpecs::Second
        remove_method :blah
      end
    }.should raise_error(NameError)
  end

  describe "on frozen instance" do
    before :each do
      @frozen = @module.dup.freeze
    end

    it "raises a RuntimeError when passed a name" do
      lambda { @frozen.send :remove_method, :method_to_remove }.should raise_error(RuntimeError)
    end

    it "raises a RuntimeError when passed a missing name" do
      lambda { @frozen.send :remove_method, :not_exist }.should raise_error(RuntimeError)
    end

    it "raises a TypeError when passed a not name" do
      lambda { @frozen.send :remove_method, Object.new }.should raise_error(TypeError)
    end

    it "does not raise exceptions when no arguments given" do
      @frozen.send(:remove_method).should equal(@frozen)
    end
  end
end
