require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../fixtures/reflection', __FILE__)

# TODO: rewrite
describe "Module#private_instance_methods" do
  it "returns a list of private methods in module and its ancestors" do
    ModuleSpecs::CountsMixin.should have_private_instance_method(:private_3)

    ModuleSpecs::CountsParent.should have_private_instance_method(:private_2)
    ModuleSpecs::CountsParent.should have_private_instance_method(:private_3)

    ModuleSpecs::CountsChild.should have_private_instance_method(:private_1)
    ModuleSpecs::CountsChild.should have_private_instance_method(:private_2)
    ModuleSpecs::CountsChild.should have_private_instance_method(:private_3)
  end

  it "when passed false as a parameter, should return only methods defined in that module" do
    ModuleSpecs::CountsMixin.should have_private_instance_method(:private_3, false)
    ModuleSpecs::CountsParent.should have_private_instance_method(:private_2, false)
    ModuleSpecs::CountsChild.should have_private_instance_method(:private_1, false)
  end

  it "default list should be the same as passing true as an argument" do
    ModuleSpecs::CountsMixin.private_instance_methods(true).should ==
      ModuleSpecs::CountsMixin.private_instance_methods
    ModuleSpecs::CountsParent.private_instance_methods(true).should ==
      ModuleSpecs::CountsParent.private_instance_methods
    ModuleSpecs::CountsChild.private_instance_methods(true).should ==
      ModuleSpecs::CountsChild.private_instance_methods
  end
end

describe :module_private_instance_methods_supers, shared: true do
  it "returns a unique list for a class including a module" do
    m = ReflectSpecs::D.private_instance_methods(*@object)
    m.select { |x| x == :pri }.sort.should == [:pri]
  end

  it "returns a unique list for a subclass" do
    m = ReflectSpecs::E.private_instance_methods(*@object)
    m.select { |x| x == :pri }.sort.should == [:pri]
  end
end

describe "Module#private_instance_methods" do
  describe "when not passed an argument" do
    it_behaves_like :module_private_instance_methods_supers, nil, []
  end

  describe "when passed true" do
    it_behaves_like :module_private_instance_methods_supers, nil, true
  end
end
