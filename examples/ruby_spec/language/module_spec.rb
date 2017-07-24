require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/module', __FILE__)

describe "The module keyword" do
  it "creates a new module without semicolon" do
    module ModuleSpecsKeywordWithoutSemicolon end
    ModuleSpecsKeywordWithoutSemicolon.should be_an_instance_of(Module)
  end

  it "creates a new module with a non-qualified constant name" do
    module ModuleSpecsToplevel; end
    ModuleSpecsToplevel.should be_an_instance_of(Module)
  end

  it "creates a new module with a qualified constant name" do
    module ModuleSpecs::Nested; end
    ModuleSpecs::Nested.should be_an_instance_of(Module)
  end

  it "creates a new module with a variable qualified constant name" do
    m = Module.new
    module m::N; end
    m::N.should be_an_instance_of(Module)
  end

  it "reopens an existing module" do
    module ModuleSpecs; Reopened = true; end
    ModuleSpecs::Reopened.should be_true
  end

  it "reopens a module included in Object" do
    module IncludedModuleSpecs; Reopened = true; end
    ModuleSpecs::IncludedInObject::IncludedModuleSpecs::Reopened.should be_true
  end

  it "raises a TypeError if the constant is a Class" do
    lambda do
      module ModuleSpecs::Modules::Klass; end
    end.should raise_error(TypeError)
  end

  it "raises a TypeError if the constant is a String" do
    lambda { module ModuleSpecs::Modules::A; end }.should raise_error(TypeError)
  end

  it "raises a TypeError if the constant is a Fixnum" do
    lambda { module ModuleSpecs::Modules::B; end }.should raise_error(TypeError)
  end

  it "raises a TypeError if the constant is nil" do
    lambda { module ModuleSpecs::Modules::C; end }.should raise_error(TypeError)
  end

  it "raises a TypeError if the constant is true" do
    lambda { module ModuleSpecs::Modules::D; end }.should raise_error(TypeError)
  end

  it "raises a TypeError if the constant is false" do
    lambda { module ModuleSpecs::Modules::D; end }.should raise_error(TypeError)
  end
end

describe "Assigning an anonymous module to a constant" do
  it "sets the name of the module" do
    mod = Module.new
    mod.name.should be_nil

    ::ModuleSpecs_CS1 = mod
    mod.name.should == "ModuleSpecs_CS1"
  end

  it "does not set the name of a module scoped by an anonymous module" do
    a, b = Module.new, Module.new
    a::B = b
    b.name.should be_nil
  end

  it "sets the name of contained modules when assigning a toplevel anonymous module" do
    a, b, c, d = Module.new, Module.new, Module.new, Module.new
    a::B = b
    a::B::C = c
    a::B::C::E = c
    a::D = d

    ::ModuleSpecs_CS2 = a
    a.name.should == "ModuleSpecs_CS2"
    b.name.should == "ModuleSpecs_CS2::B"
    c.name.should == "ModuleSpecs_CS2::B::C"
    d.name.should == "ModuleSpecs_CS2::D"
  end
end
