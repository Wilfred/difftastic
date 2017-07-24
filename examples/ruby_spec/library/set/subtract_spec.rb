require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#subtract" do
  before :each do
    @set = Set[:a, :b, :c]
  end

  it "deletes any elements contained in other and returns self" do
    @set.subtract(Set[:b, :c]).should == @set
    @set.should == Set[:a]
  end

  it "accepts any enumerable as other" do
    @set.subtract([:c]).should == Set[:a, :b]
  end
end
