require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#keep_if" do
  before :each do
    @set = Set["one", "two", "three"]
  end

  it "yields every element of self" do
    ret = []
    @set.keep_if { |x| ret << x }
    ret.sort.should == ["one", "two", "three"].sort
  end

  it "keeps every element from self for which the passed block returns true" do
    @set.keep_if { |x| x.size != 3 }
    @set.size.should eql(1)

    @set.should_not include("one")
    @set.should_not include("two")
    @set.should include("three")
  end

  it "returns self" do
    @set.keep_if {}.should equal(@set)
  end

  it "returns an Enumerator when passed no block" do
    enum = @set.keep_if
    enum.should be_an_instance_of(Enumerator)

    enum.each { |x| x.size != 3 }

    @set.should_not include("one")
    @set.should_not include("two")
    @set.should include("three")
  end
end
