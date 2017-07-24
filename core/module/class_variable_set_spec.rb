require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#class_variable_set" do
  it "sets the class variable with the given name to the given value" do
    c = Class.new

    c.send(:class_variable_set, :@@test, "test")
    c.send(:class_variable_set, "@@test3", "test3")

    c.send(:class_variable_get, :@@test).should == "test"
    c.send(:class_variable_get, :@@test3).should == "test3"
  end

  it "sets a class variable on a metaclass" do
    obj = mock("metaclass class variable")
    meta = obj.singleton_class
    meta.send(:class_variable_set, :@@var, :cvar_value).should == :cvar_value
    meta.send(:class_variable_get, :@@var).should == :cvar_value
  end

  it "sets the value of a class variable with the given name defined in an included module" do
    c = Class.new { include ModuleSpecs::MVars.dup }
    c.send(:class_variable_set, "@@mvar", :new_mvar).should == :new_mvar
    c.send(:class_variable_get, "@@mvar").should == :new_mvar
  end

  it "raises a RuntimeError when self is frozen" do
    lambda {
      Class.new.freeze.send(:class_variable_set, :@@test, "test")
    }.should raise_error(RuntimeError)
    lambda {
      Module.new.freeze.send(:class_variable_set, :@@test, "test")
    }.should raise_error(RuntimeError)
  end

  it "raises a NameError when the given name is not allowed" do
    c = Class.new

    lambda {
      c.send(:class_variable_set, :invalid_name, "test")
    }.should raise_error(NameError)
    lambda {
      c.send(:class_variable_set, "@invalid_name", "test")
    }.should raise_error(NameError)
  end

  it "converts a non string/symbol/fixnum name to string using to_str" do
    (o = mock('@@class_var')).should_receive(:to_str).and_return("@@class_var")
    c = Class.new
    c.send(:class_variable_set, o, "test")
    c.send(:class_variable_get, :@@class_var).should == "test"
  end

  it "raises a TypeError when the given names can't be converted to strings using to_str" do
    c = Class.new { class_variable_set :@@class_var, "test" }
    o = mock('123')
    lambda { c.send(:class_variable_set, o, "test") }.should raise_error(TypeError)
    o.should_receive(:to_str).and_return(123)
    lambda { c.send(:class_variable_set, o, "test") }.should raise_error(TypeError)
  end
end
