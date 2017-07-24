describe :module_equal, shared: true do
  it "returns true if self and the given module are the same" do
    ModuleSpecs.send(@method, ModuleSpecs).should == true
    ModuleSpecs::Child.send(@method, ModuleSpecs::Child).should == true
    ModuleSpecs::Parent.send(@method, ModuleSpecs::Parent).should == true
    ModuleSpecs::Basic.send(@method, ModuleSpecs::Basic).should == true
    ModuleSpecs::Super.send(@method, ModuleSpecs::Super).should == true

    ModuleSpecs::Child.send(@method, ModuleSpecs).should == false
    ModuleSpecs::Child.send(@method, ModuleSpecs::Parent).should == false
    ModuleSpecs::Child.send(@method, ModuleSpecs::Basic).should == false
    ModuleSpecs::Child.send(@method, ModuleSpecs::Super).should == false
  end
end
