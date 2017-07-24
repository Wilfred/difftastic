require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#subset?" do
  before :each do
    @set = Set[1, 2, 3, 4]
  end

  it "returns true if passed a Set that is equal to self or self is a subset of" do
    @set.subset?(@set).should be_true
    Set[].subset?(Set[]).should be_true

    Set[].subset?(@set).should be_true
    Set[].subset?(Set[1, 2, 3]).should be_true
    Set[].subset?(Set["a", :b, ?c]).should be_true

    Set[1, 2, 3].subset?(@set).should be_true
    Set[1, 3].subset?(@set).should be_true
    Set[1, 2].subset?(@set).should be_true
    Set[1].subset?(@set).should be_true

    Set[5].subset?(@set).should be_false
    Set[1, 5].subset?(@set).should be_false
    Set[nil].subset?(@set).should be_false
    Set["test"].subset?(@set).should be_false
  end

  it "raises an ArgumentError when passed a non-Set" do
    lambda { Set[].subset?([]) }.should raise_error(ArgumentError)
    lambda { Set[].subset?(1) }.should raise_error(ArgumentError)
    lambda { Set[].subset?("test") }.should raise_error(ArgumentError)
    lambda { Set[].subset?(Object.new) }.should raise_error(ArgumentError)
  end
end
