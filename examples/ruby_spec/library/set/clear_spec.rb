require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#clear" do
  before :each do
    @set = Set["one", "two", "three", "four"]
  end

  it "removes all elements from self" do
    @set.clear
    @set.should be_empty
  end

  it "returns self" do
    @set.clear.should equal(@set)
  end
end
