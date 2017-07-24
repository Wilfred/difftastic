require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#private_methods" do
  before :all do
    @simple = DelegateSpecs::Simple.new
    @delegate = DelegateSpecs::Delegator.new(@simple)
    @methods = @delegate.private_methods
  end

  it "does not include any method of the delegate object" do # since delegates does not forward private calls
    @methods.should_not include :priv
    @methods.should_not include :prot
    @methods.should_not include :pub
  end

  it "includes all private instance methods of the Delegate class" do
    @methods.should include :extra_private
  end
end
