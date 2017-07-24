require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#trust" do
  before :each do
    @delegate = DelegateSpecs::Delegator.new([])
  end

  it "returns self" do
    @delegate.trust.equal?(@delegate).should be_true
  end

  it "trusts the delegator" do
    @delegate.trust
    @delegate.untrusted?.should be_false
  end

  it "trusts the delegated object" do
    @delegate.trust
    @delegate.__getobj__.untrusted?.should be_false
  end
end
