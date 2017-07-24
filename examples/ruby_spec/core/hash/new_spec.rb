require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash.new" do
  it "creates an empty Hash if passed no arguments" do
    Hash.new.should == {}
    Hash.new.size.should == 0
  end

  it "creates a new Hash with default object if passed a default argument" do
    Hash.new(5).default.should == 5
    Hash.new({}).default.should == {}
  end

  it "does not create a copy of the default argument" do
    str = "foo"
    Hash.new(str).default.should equal(str)
  end

  it "creates a Hash with a default_proc if passed a block" do
    Hash.new.default_proc.should == nil

    h = Hash.new { |x| "Answer to #{x}" }
    h.default_proc.call(5).should == "Answer to 5"
    h.default_proc.call("x").should == "Answer to x"
  end

  it "raises an ArgumentError if more than one argument is passed" do
    lambda { Hash.new(5,6) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if passed both default argument and default block" do
    lambda { Hash.new(5) { 0 }   }.should raise_error(ArgumentError)
    lambda { Hash.new(nil) { 0 } }.should raise_error(ArgumentError)
  end
end
