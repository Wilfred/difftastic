require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "UnboundMethod#bind" do
  before :each do
    @normal_um = UnboundMethodSpecs::Methods.new.method(:foo).unbind
    @parent_um = UnboundMethodSpecs::Parent.new.method(:foo).unbind
    @child1_um = UnboundMethodSpecs::Child1.new.method(:foo).unbind
    @child2_um = UnboundMethodSpecs::Child2.new.method(:foo).unbind
  end

  it "raises TypeError if object is not kind_of? the Module the method defined in" do
    lambda { @normal_um.bind(UnboundMethodSpecs::B.new) }.should raise_error(TypeError)
  end

  it "returns Method for any object that is kind_of? the Module method was extracted from" do
    @normal_um.bind(UnboundMethodSpecs::Methods.new).should be_kind_of(Method)
  end

  it "returns Method on any object when UnboundMethod is unbound from a module" do
    UnboundMethodSpecs::Mod.instance_method(:from_mod).bind(Object.new).should be_kind_of(Method)
  end

  it "returns Method returned for obj is equal to one directly returned by obj.method" do
    obj = UnboundMethodSpecs::Methods.new
    @normal_um.bind(obj).should == obj.method(:foo)
  end

  it "returns a callable method" do
    obj = UnboundMethodSpecs::Methods.new
    @normal_um.bind(obj).call.should == obj.foo
  end

  it "binds a Parent's class method to any Child's class methods" do
    m = UnboundMethodSpecs::Parent.method(:class_method).unbind.bind(UnboundMethodSpecs::Child1)
    m.should be_an_instance_of(Method)
    m.call.should == "I am UnboundMethodSpecs::Child1"
  end

  it "will raise when binding a an object singleton's method to another object" do
    other = UnboundMethodSpecs::Parent.new
    p = UnboundMethodSpecs::Parent.new
    class << p
      def singleton_method
        :single
      end
    end
    um = p.method(:singleton_method).unbind
    lambda{ um.bind(other) }.should raise_error(TypeError)
  end
end
