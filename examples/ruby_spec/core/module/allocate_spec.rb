require File.expand_path('../../../spec_helper', __FILE__)

describe "Module.allocate" do
  it "returns an instance of Module" do
    mod = Module.allocate
    mod.should be_an_instance_of(Module)
  end

  it "returns a fully-formed instance of Module" do
    mod = Module.allocate
    mod.constants.should_not == nil
    mod.methods.should_not == nil
  end
end
