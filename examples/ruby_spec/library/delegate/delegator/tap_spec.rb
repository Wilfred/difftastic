require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#tap" do
  it "yield the delegator object" do
    obj = mock('base')
    delegator = DelegateSpecs::Delegator.new(obj)
    obj.should_not_receive(:tap)
    yielded = []
    delegator.tap do |x|
      yielded << x
    end
    yielded.size.should == 1
    yielded[0].equal?(delegator).should be_true
  end
end
