require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set[]" do
  it "returns a new Set populated with the passed Objects" do
    set = Set[1, 2, 3]

    set.instance_of?(Set).should be_true
    set.size.should eql(3)

    set.should include(1)
    set.should include(2)
    set.should include(3)
  end
end
