require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../fixtures/reflection', __FILE__)

# TODO: rewrite
describe "Module#protected_instance_methods" do
  it "returns a list of protected methods in module and its ancestors" do
    methods = ModuleSpecs::CountsMixin.protected_instance_methods
    methods.should include(:protected_3)

    methods = ModuleSpecs::CountsParent.protected_instance_methods
    methods.should include(:protected_3)
    methods.should include(:protected_2)

    methods = ModuleSpecs::CountsChild.protected_instance_methods
    methods.should include(:protected_3)
    methods.should include(:protected_2)
    methods.should include(:protected_1)
  end

  it "when passed false as a parameter, should return only methods defined in that module" do
    ModuleSpecs::CountsMixin.protected_instance_methods(false).should == [:protected_3]
    ModuleSpecs::CountsParent.protected_instance_methods(false).should == [:protected_2]
    ModuleSpecs::CountsChild.protected_instance_methods(false).should == [:protected_1]
  end

  it "default list should be the same as passing true as an argument" do
    ModuleSpecs::CountsMixin.protected_instance_methods(true).should ==
      ModuleSpecs::CountsMixin.protected_instance_methods
    ModuleSpecs::CountsParent.protected_instance_methods(true).should ==
      ModuleSpecs::CountsParent.protected_instance_methods
    ModuleSpecs::CountsChild.protected_instance_methods(true).should ==
      ModuleSpecs::CountsChild.protected_instance_methods
  end
end

describe :module_protected_instance_methods_supers, shared: true do
  it "returns a unique list for a class including a module" do
    m = ReflectSpecs::D.protected_instance_methods(*@object)
    m.select { |x| x == :pro }.sort.should == [:pro]
  end

  it "returns a unique list for a subclass" do
    m = ReflectSpecs::E.protected_instance_methods(*@object)
    m.select { |x| x == :pro }.sort.should == [:pro]
  end
end

describe "Module#protected_instance_methods" do
  describe "when not passed an argument" do
    it_behaves_like :module_protected_instance_methods_supers, nil, []
  end

  describe "when passed true" do
    it_behaves_like :module_protected_instance_methods_supers, nil, true
  end
end
