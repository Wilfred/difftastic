require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#class_variable_get" do
  it "returns the value of the class variable with the given name" do
    c = Class.new { class_variable_set :@@class_var, "test" }
    c.send(:class_variable_get, :@@class_var).should == "test"
    c.send(:class_variable_get, "@@class_var").should == "test"
  end

  it "returns the value of a class variable with the given name defined in an included module" do
    c = Class.new { include ModuleSpecs::MVars }
    c.send(:class_variable_get, "@@mvar").should == :mvar
  end

  it "raises a NameError for a class variable named '@@'" do
    c = Class.new
    lambda { c.send(:class_variable_get, "@@") }.should raise_error(NameError)
    lambda { c.send(:class_variable_get, :"@@") }.should raise_error(NameError)
  end

  it "raises a NameError for a class variables with the given name defined in an extended module" do
    c = Class.new
    c.extend ModuleSpecs::MVars
    lambda {
      c.send(:class_variable_get, "@@mvar")
    }.should raise_error(NameError)
  end

  it "returns class variables defined in the class body and accessed in the metaclass" do
    ModuleSpecs::CVars.cls.should == :class
  end

  it "returns class variables defined in the metaclass and accessed by class methods" do
    ModuleSpecs::CVars.meta.should == :metainfo
  end

  it "returns class variables defined in the metaclass and accessed by instance methods" do
    ModuleSpecs::CVars.new.meta.should == :metainfo
  end

  it "returns a class variable defined in a metaclass" do
    obj = mock("metaclass class variable")
    meta = obj.singleton_class
    meta.send :class_variable_set, :@@var, :cvar_value
    meta.send(:class_variable_get, :@@var).should == :cvar_value
  end

  it "raises a NameError when an uninitialized class variable is accessed" do
    c = Class.new
    [:@@no_class_var, "@@no_class_var"].each do |cvar|
      lambda  { c.send(:class_variable_get, cvar) }.should raise_error(NameError)
    end
  end

  it "raises a NameError when the given name is not allowed" do
    c = Class.new

    lambda { c.send(:class_variable_get, :invalid_name)   }.should raise_error(NameError)
    lambda { c.send(:class_variable_get, "@invalid_name") }.should raise_error(NameError)
  end

  it "converts a non string/symbol/fixnum name to string using to_str" do
    c = Class.new { class_variable_set :@@class_var, "test" }
    (o = mock('@@class_var')).should_receive(:to_str).and_return("@@class_var")
    c.send(:class_variable_get, o).should == "test"
  end

  it "raises a TypeError when the given names can't be converted to strings using to_str" do
    c = Class.new { class_variable_set :@@class_var, "test" }
    o = mock('123')
    lambda { c.send(:class_variable_get, o) }.should raise_error(TypeError)
    o.should_receive(:to_str).and_return(123)
    lambda { c.send(:class_variable_get, o) }.should raise_error(TypeError)
  end
end
