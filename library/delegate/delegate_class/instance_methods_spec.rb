require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "DelegateClass.instance_methods" do
  before :all do
    @methods = DelegateSpecs::DelegateClass.instance_methods
  end

  it "includes all public methods of the delegated class" do
    @methods.should include :pub
  end

  it "includes all protected methods of the delegated class" do
    @methods.should include :prot
  end

  it "includes instance methods of the DelegateClass class" do
    @methods.should include :extra
    @methods.should include :extra_protected
  end

  it "does not include private methods" do
    @methods.should_not include :priv
    @methods.should_not include :extra_private
  end
end
