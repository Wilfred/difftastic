require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "DelegateClass.public_instance_methods" do
  before :all do
    @methods = DelegateSpecs::DelegateClass.public_instance_methods
  end

  it "includes all public methods of the delegated class" do
    @methods.should include :pub
  end

  it "does not include the protected methods of the delegated class" do
    @methods.should_not include :prot
  end

  it "includes public instance methods of the DelegateClass class" do
    @methods.should include :extra
  end

  it "does not include private methods" do
    @methods.should_not include :priv
    @methods.should_not include :extra_private
  end
end
