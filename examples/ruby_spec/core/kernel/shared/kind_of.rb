require File.expand_path('../../fixtures/classes', __FILE__)

describe :kernel_kind_of, shared: true do
  before :each do
    @o = KernelSpecs::KindaClass.new
  end

  it "returns true if given class is the object's class" do
    @o.send(@method, KernelSpecs::KindaClass).should == true
  end

  it "returns true if given class is an ancestor of the object's class" do
    @o.send(@method, KernelSpecs::AncestorClass).should == true
    @o.send(@method, String).should == true
    @o.send(@method, Object).should == true
  end

  it "returns false if the given class is not object's class nor an ancestor" do
    @o.send(@method, Array).should == false
  end

  it "returns true if given a Module that is included in object's class" do
    @o.send(@method, KernelSpecs::MyModule).should == true
  end

  it "returns true if given a Module that is included one of object's ancestors only" do
    @o.send(@method, KernelSpecs::AncestorModule).should == true
  end

  it "returns true if given a Module that object has been extended with" do
    @o.send(@method, KernelSpecs::MyExtensionModule).should == true
  end

  it "returns false if given a Module not included in object's class nor ancestors" do
    @o.send(@method, KernelSpecs::SomeOtherModule).should == false
  end

  it "raises a TypeError if given an object that is not a Class nor a Module" do
    lambda { @o.send(@method, 1) }.should raise_error(TypeError)
    lambda { @o.send(@method, 'KindaClass') }.should raise_error(TypeError)
    lambda { @o.send(@method, :KindaClass) }.should raise_error(TypeError)
    lambda { @o.send(@method, Object.new) }.should raise_error(TypeError)
  end
end
