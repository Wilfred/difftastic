require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#protected_methods" do
  before :all do
    @simple = DelegateSpecs::Simple.new
    @delegate = DelegateSpecs::Delegator.new(@simple)
    @methods = @delegate.protected_methods
  end

  it "includes protected methods of the delegate object" do
    @methods.should include :prot
  end

  it "includes protected instance methods of the Delegator class" do
    @methods.should include :extra_protected
  end
end
