require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#extend_object" do
  before :each do
    ScratchPad.clear
  end

  it "is a private method" do
    Module.should have_private_instance_method(:extend_object)
  end

  describe "on Class" do
    it "is undefined" do
      Class.should_not have_private_instance_method(:extend_object, true)
    end

    it "raises a TypeError if calling after rebinded to Class" do
      lambda {
        Module.instance_method(:extend_object).bind(Class.new).call Object.new
      }.should raise_error(TypeError)
    end
  end

  it "is called when #extend is called on an object" do
    ModuleSpecs::ExtendObject.should_receive(:extend_object)
    obj = mock("extended object")
    obj.extend ModuleSpecs::ExtendObject
  end

  it "extends the given object with its constants and methods by default" do
    obj = mock("extended direct")
    ModuleSpecs::ExtendObject.send :extend_object, obj

    obj.test_method.should == "hello test"
    obj.singleton_class.const_get(:C).should == :test
  end

  it "is called even when private" do
    obj = mock("extended private")
    obj.extend ModuleSpecs::ExtendObjectPrivate
    ScratchPad.recorded.should == :extended
  end

  it "does not copy own tainted status to the given object" do
    other = Object.new
    Module.new.taint.send :extend_object, other
    other.tainted?.should be_false
  end

  it "does not copy own untrusted status to the given object" do
    other = Object.new
    Module.new.untrust.send :extend_object, other
    other.untrusted?.should be_false
  end

  describe "when given a frozen object" do
    before :each do
      @receiver = Module.new
      @object = Object.new.freeze
    end

    it "raises a RuntimeError before extending the object" do
      lambda { @receiver.send(:extend_object, @object) }.should raise_error(RuntimeError)
      @object.should_not be_kind_of(@receiver)
    end
  end
end
