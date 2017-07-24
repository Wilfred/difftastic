require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#pretty_print" do
  it "passes the 'pretty print' representation of self to the pretty print writer" do
    pp = mock("PrettyPrint")
    set = SortedSet[1, 2, 3]

    pp.should_receive(:text).with("#<SortedSet: {")
    pp.should_receive(:text).with("}>")

    pp.should_receive(:nest).with(1).and_yield
    pp.should_receive(:seplist).with(set)

    set.pretty_print(pp)
  end
end
