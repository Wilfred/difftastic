require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#to_s" do
  it "returns the full constant path leading to the module" do
    ModuleSpecs::LookupMod.to_s.should == "ModuleSpecs::LookupMod"
  end

  it "works with an anonymous module" do
    m = Module.new
    m.to_s.should =~ /#<Module:0x[0-9a-f]+>/
  end

  it "works with an anonymous class" do
    c = Class.new
    c.to_s.should =~ /#<Class:0x[0-9a-f]+>/
  end
end
