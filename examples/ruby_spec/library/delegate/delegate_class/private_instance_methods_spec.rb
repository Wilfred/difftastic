require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "DelegateClass.private_instance_methods" do
  before :all do
    @methods = DelegateSpecs::DelegateClass.private_instance_methods
  end

  it "does not include any instance methods of the delegated class" do
    @methods.should_not include :pub
    @methods.should_not include :prot
    @methods.should_not include :priv # since these are not forwarded...
  end

  it "includes private instance methods of the DelegateClass class" do
    @methods.should include :extra_private
  end

  it "does not include public or protected instance methods of the DelegateClass class" do
    @methods.should_not include :extra
    @methods.should_not include :extra_protected
  end
end
