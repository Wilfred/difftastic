require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#eql?" do
  ruby_version_is ""..."2.5" do
    it "is delegated" do
      base = mock('base')
      delegator = DelegateSpecs::Delegator.new(base)
      base.should_receive(:eql?).with(42).and_return(:foo)
      delegator.eql?(42).should == :foo
    end
  end

  ruby_version_is "2.5" do
    it "returns true when compared with same delegator" do
      base = mock('base')
      delegator = DelegateSpecs::Delegator.new(base)

      delegator.eql?(delegator).should be_true
    end

    it "returns true when compared with the inner object" do
      base = mock('base')
      delegator = DelegateSpecs::Delegator.new(base)

      delegator.eql?(base).should be_true
    end

    it "returns false when compared with the delegator with other object" do
      base = mock('base')
      other = mock('other')
      delegator0 = DelegateSpecs::Delegator.new(base)
      delegator1 = DelegateSpecs::Delegator.new(other)

      delegator0.eql?(delegator1).should be_false
    end

    it "returns false when compared with the other object" do
      base = mock('base')
      other = mock('other')
      delegator = DelegateSpecs::Delegator.new(base)

      delegator.eql?(other).should be_false
    end
  end
end
