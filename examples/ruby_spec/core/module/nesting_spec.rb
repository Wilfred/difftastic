require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module::Nesting" do

  it "returns the list of Modules nested at the point of call" do
    ModuleSpecs::Nesting[:root_level].should == []
    ModuleSpecs::Nesting[:first_level].should == [ModuleSpecs]
    ModuleSpecs::Nesting[:basic].should == [ModuleSpecs::Nesting, ModuleSpecs]
    ModuleSpecs::Nesting[:open_first_level].should ==
      [ModuleSpecs, ModuleSpecs::Nesting, ModuleSpecs]
    ModuleSpecs::Nesting[:open_meta].should ==
      [ModuleSpecs::Nesting.meta, ModuleSpecs::Nesting, ModuleSpecs]
    ModuleSpecs::Nesting[:nest_class].should ==
      [ModuleSpecs::Nesting::NestedClass, ModuleSpecs::Nesting, ModuleSpecs]
  end

  it "returns the nesting for module/class declaring the called method" do
    ModuleSpecs::Nesting.called_from_module_method.should ==
      [ModuleSpecs::Nesting, ModuleSpecs]
    ModuleSpecs::Nesting::NestedClass.called_from_class_method.should ==
      [ModuleSpecs::Nesting::NestedClass, ModuleSpecs::Nesting, ModuleSpecs]
    ModuleSpecs::Nesting::NestedClass.new.called_from_inst_method.should ==
      [ModuleSpecs::Nesting::NestedClass, ModuleSpecs::Nesting, ModuleSpecs]
  end

end

describe "Module.nesting" do
  it "needs to be reviewed for spec completeness"
end
