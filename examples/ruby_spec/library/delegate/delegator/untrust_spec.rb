require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#untrust" do
  before :each do
    @delegate = DelegateSpecs::Delegator.new("")
  end

  it "returns self" do
    @delegate.untrust.equal?(@delegate).should be_true
  end

  it "untrusts the delegator" do
    @delegate.__setobj__(nil)
    @delegate.untrust
    @delegate.untrusted?.should be_true
  end

  it "untrusts the delegated object" do
    @delegate.untrust
    @delegate.__getobj__.untrusted?.should be_true
  end
end
