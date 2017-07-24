require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#eql?" do
  it "returns true when the passed argument is a Set and contains the same elements" do
    Set[].should eql(Set[])
    Set[1, 2, 3].should eql(Set[1, 2, 3])
    Set[1, 2, 3].should eql(Set[3, 2, 1])
    Set["a", :b, ?c].should eql(Set[?c, :b, "a"])

    Set[1, 2, 3].should_not eql(Set[1.0, 2, 3])
    Set[1, 2, 3].should_not eql(Set[2, 3])
    Set[1, 2, 3].should_not eql(Set[])
  end
end
