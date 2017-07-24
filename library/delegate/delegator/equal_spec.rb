require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#equal?" do
  it "returns true only when compared with the delegator" do
    obj = mock('base')
    delegator = DelegateSpecs::Delegator.new(obj)
    obj.should_not_receive(:equal?)
    delegator.equal?(obj).should be_false
    delegator.equal?(nil).should be_false
    delegator.equal?(delegator).should be_true
  end
end
