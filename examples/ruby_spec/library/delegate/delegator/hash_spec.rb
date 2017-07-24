require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#hash" do
  it "is delegated" do
    base = mock('base')
    delegator = DelegateSpecs::Delegator.new(base)
    base.should_receive(:hash).and_return(42)
    delegator.hash.should == 42
  end
end
