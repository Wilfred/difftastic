require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#^" do
  before :each do
    @set = Set[1, 2, 3, 4]
  end

  it "returns a new Set containing elements that are not in both self and the passed Enumberable" do
    (@set ^ Set[3, 4, 5]).should == Set[1, 2, 5]
    (@set ^ [3, 4, 5]).should == Set[1, 2, 5]
  end

  it "raises an ArgumentError when passed a non-Enumerable" do
    lambda { @set ^ 3 }.should raise_error(ArgumentError)
    lambda { @set ^ Object.new }.should raise_error(ArgumentError)
  end
end
