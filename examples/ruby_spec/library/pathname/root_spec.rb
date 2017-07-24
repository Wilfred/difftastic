require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#root?" do

  it "returns true for root directories" do
    Pathname.new('/').root?.should == true
  end

  it "returns false for empty string" do
    Pathname.new('').root?.should == false
  end

  it "returns false for a top level directory" do
    Pathname.new('/usr').root?.should == false
  end

  it "returns false for a top level with .. appended directory" do
    Pathname.new('/usr/..').root?.should == false
  end

  it "returns false for a directory below top level" do
    Pathname.new('/usr/local/bin/').root?.should == false
  end

end

