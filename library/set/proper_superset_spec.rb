require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#proper_superset?" do
  before :each do
    @set = Set[1, 2, 3, 4]
  end

  it "returns true if passed a Set that self is a proper superset of" do
    @set.proper_superset?(Set[]).should be_true
    Set[1, 2, 3].proper_superset?(Set[]).should be_true
    Set["a", :b, ?c].proper_superset?(Set[]).should be_true

    @set.proper_superset?(Set[1, 2, 3]).should be_true
    @set.proper_superset?(Set[1, 3]).should be_true
    @set.proper_superset?(Set[1, 2]).should be_true
    @set.proper_superset?(Set[1]).should be_true

    @set.proper_superset?(Set[5]).should be_false
    @set.proper_superset?(Set[1, 5]).should be_false
    @set.proper_superset?(Set[nil]).should be_false
    @set.proper_superset?(Set["test"]).should be_false

    @set.proper_superset?(@set).should be_false
    Set[].proper_superset?(Set[]).should be_false
  end

  it "raises an ArgumentError when passed a non-Set" do
    lambda { Set[].proper_superset?([]) }.should raise_error(ArgumentError)
    lambda { Set[].proper_superset?(1) }.should raise_error(ArgumentError)
    lambda { Set[].proper_superset?("test") }.should raise_error(ArgumentError)
    lambda { Set[].proper_superset?(Object.new) }.should raise_error(ArgumentError)
  end
end
