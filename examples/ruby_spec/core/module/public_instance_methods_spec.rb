require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../fixtures/reflection', __FILE__)

# TODO: rewrite

describe "Module#public_instance_methods" do
  it "returns a list of public methods in module and its ancestors" do
    methods = ModuleSpecs::CountsMixin.public_instance_methods
    methods.should include(:public_3)

    methods = ModuleSpecs::CountsParent.public_instance_methods
    methods.should include(:public_3)
    methods.should include(:public_2)

    methods = ModuleSpecs::CountsChild.public_instance_methods
    methods.should include(:public_3)
    methods.should include(:public_2)
    methods.should include(:public_1)

    methods = ModuleSpecs::Child2.public_instance_methods
    methods.should include(:foo)
  end

  it "when passed false as a parameter, should return only methods defined in that module" do
    ModuleSpecs::CountsMixin.public_instance_methods(false).should == [:public_3]
    ModuleSpecs::CountsParent.public_instance_methods(false).should == [:public_2]
    ModuleSpecs::CountsChild.public_instance_methods(false).should == [:public_1]
  end

  it "default list should be the same as passing true as an argument" do
    ModuleSpecs::CountsMixin.public_instance_methods(true).should ==
      ModuleSpecs::CountsMixin.public_instance_methods
    ModuleSpecs::CountsParent.public_instance_methods(true).should ==
      ModuleSpecs::CountsParent.public_instance_methods
    ModuleSpecs::CountsChild.public_instance_methods(true).should ==
      ModuleSpecs::CountsChild.public_instance_methods
  end
end

describe :module_public_instance_methods_supers, shared: true do
  it "returns a unique list for a class including a module" do
    m = ReflectSpecs::D.public_instance_methods(*@object)
    m.select { |x| x == :pub }.sort.should == [:pub]
  end

  it "returns a unique list for a subclass" do
    m = ReflectSpecs::E.public_instance_methods(*@object)
    m.select { |x| x == :pub }.sort.should == [:pub]
  end
end

describe "Module#public_instance_methods" do
  describe "when not passed an argument" do
    it_behaves_like :module_public_instance_methods_supers, nil, []
  end

  describe "when passed true" do
    it_behaves_like :module_public_instance_methods_supers, nil, true
  end
end
