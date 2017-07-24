require File.expand_path('../../../spec_helper', __FILE__)

describe "Module#public_constant" do
  it "can only be passed constant names defined in the target (self) module" do
    cls1 = Class.new
    cls1.const_set :Foo, true
    cls2 = Class.new(cls1)

    lambda do
      cls2.send :public_constant, :Foo
    end.should raise_error(NameError)
  end

  it "accepts strings as constant names" do
    cls = Class.new
    cls.const_set :Foo, true

    cls.send :private_constant, :Foo
    cls.send :public_constant, "Foo"

    cls::Foo.should == true
  end

  # [ruby-list:48558]
  it "accepts multiple names" do
    mod = Module.new
    mod.const_set :Foo, true
    mod.const_set :Bar, true

    mod.send :private_constant, :Foo
    mod.send :private_constant, :Bar

    mod.send :public_constant, :Foo, :Bar

    mod::Foo.should == true
    mod::Bar.should == true
  end
end
