require File.expand_path('../../../spec_helper', __FILE__)

describe "Module#private_constant" do
  it "can only be passed constant names defined in the target (self) module" do
    cls1 = Class.new
    cls1.const_set :Foo, true
    cls2 = Class.new(cls1)

    lambda do
      cls2.send :private_constant, :Foo
    end.should raise_error(NameError)
  end

  it "accepts strings as constant names" do
    cls = Class.new
    cls.const_set :Foo, true
    cls.send :private_constant, "Foo"

    lambda { cls::Foo }.should raise_error(NameError)
  end

  it "accepts multiple names" do
    mod = Module.new
    mod.const_set :Foo, true
    mod.const_set :Bar, true

    mod.send :private_constant, :Foo, :Bar

    lambda {mod::Foo}.should raise_error(NameError)
    lambda {mod::Bar}.should raise_error(NameError)
  end
end
