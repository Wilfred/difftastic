require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#proper_subset?" do
  before :each do
    @set = Set[1, 2, 3, 4]
  end

  it "returns true if passed a Set that self is a proper subset of" do
    Set[].proper_subset?(@set).should be_true
    Set[].proper_subset?(Set[1, 2, 3]).should be_true
    Set[].proper_subset?(Set["a", :b, ?c]).should be_true

    Set[1, 2, 3].proper_subset?(@set).should be_true
    Set[1, 3].proper_subset?(@set).should be_true
    Set[1, 2].proper_subset?(@set).should be_true
    Set[1].proper_subset?(@set).should be_true

    Set[5].proper_subset?(@set).should be_false
    Set[1, 5].proper_subset?(@set).should be_false
    Set[nil].proper_subset?(@set).should be_false
    Set["test"].proper_subset?(@set).should be_false

    @set.proper_subset?(@set).should be_false
    Set[].proper_subset?(Set[]).should be_false
  end

  it "raises an ArgumentError when passed a non-Set" do
    lambda { Set[].proper_subset?([]) }.should raise_error(ArgumentError)
    lambda { Set[].proper_subset?(1) }.should raise_error(ArgumentError)
    lambda { Set[].proper_subset?("test") }.should raise_error(ArgumentError)
    lambda { Set[].proper_subset?(Object.new) }.should raise_error(ArgumentError)
  end
end
