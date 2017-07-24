require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#protected_method_defined?" do
  it "returns true if the named protected method is defined by module or its ancestors" do
    ModuleSpecs::CountsMixin.protected_method_defined?("protected_3").should == true

    ModuleSpecs::CountsParent.protected_method_defined?("protected_3").should == true
    ModuleSpecs::CountsParent.protected_method_defined?("protected_2").should == true

    ModuleSpecs::CountsChild.protected_method_defined?("protected_3").should == true
    ModuleSpecs::CountsChild.protected_method_defined?("protected_2").should == true
    ModuleSpecs::CountsChild.protected_method_defined?("protected_1").should == true
  end

  it "returns false if method is not a protected method" do
    ModuleSpecs::CountsChild.protected_method_defined?("public_3").should == false
    ModuleSpecs::CountsChild.protected_method_defined?("public_2").should == false
    ModuleSpecs::CountsChild.protected_method_defined?("public_1").should == false

    ModuleSpecs::CountsChild.protected_method_defined?("private_3").should == false
    ModuleSpecs::CountsChild.protected_method_defined?("private_2").should == false
    ModuleSpecs::CountsChild.protected_method_defined?("private_1").should == false
  end

  it "returns false if the named method is not defined by the module or its ancestors" do
    ModuleSpecs::CountsMixin.protected_method_defined?(:protected_10).should == false
  end

  it "accepts symbols for the method name" do
    ModuleSpecs::CountsMixin.protected_method_defined?(:protected_3).should == true
  end

  it "raises a TypeError if passed a Fixnum" do
    lambda do
      ModuleSpecs::CountsMixin.protected_method_defined?(1)
    end.should raise_error(TypeError)
  end

  it "raises a TypeError if passed nil" do
    lambda do
      ModuleSpecs::CountsMixin.protected_method_defined?(nil)
    end.should raise_error(TypeError)
  end

  it "raises a TypeError if passed false" do
    lambda do
      ModuleSpecs::CountsMixin.protected_method_defined?(false)
    end.should raise_error(TypeError)
  end

  it "raises a TypeError if passed an object that does not defined #to_str" do
    lambda do
      ModuleSpecs::CountsMixin.protected_method_defined?(mock('x'))
    end.should raise_error(TypeError)
  end

  it "raises a TypeError if passed an object that defines #to_sym" do
    sym = mock('symbol')
    def sym.to_sym() :protected_3 end

    lambda do
      ModuleSpecs::CountsMixin.protected_method_defined?(sym)
    end.should raise_error(TypeError)
  end

  it "calls #to_str to convert an Object" do
    str = mock('protected_3')
    str.should_receive(:to_str).and_return("protected_3")
    ModuleSpecs::CountsMixin.protected_method_defined?(str).should == true
  end
end
