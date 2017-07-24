require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#select!" do
  before :each do
    @set = Set["one", "two", "three"]
  end

  it "yields every element of self" do
    ret = []
    @set.select! { |x| ret << x }
    ret.sort.should == ["one", "two", "three"].sort
  end

  it "keeps every element from self for which the passed block returns true" do
    @set.select! { |x| x.size != 3 }
    @set.size.should eql(1)

    @set.should_not include("one")
    @set.should_not include("two")
    @set.should include("three")
  end

  it "returns self when self was modified" do
    @set.select! { false }.should equal(@set)
  end

  it "returns nil when self was not modified" do
    @set.select! { true }.should be_nil
  end

  it "returns an Enumerator when passed no block" do
    enum = @set.select!
    enum.should be_an_instance_of(Enumerator)

    enum.each { |x| x.size != 3 }

    @set.should_not include("one")
    @set.should_not include("two")
    @set.should include("three")
  end
end
