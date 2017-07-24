require File.expand_path('../../../spec_helper', __FILE__)
require 'find'

describe "Find.prune" do
  it "should throw :prune" do
    msg = catch(:prune) do
      Find.prune
    end

    msg.should == nil
  end
end
