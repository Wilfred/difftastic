require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname.new" do
  it "returns a new Pathname Object with 1 argument" do
    Pathname.new('').should be_kind_of(Pathname)
  end

  it "raises an ArgumentError when called with \0" do
    lambda { Pathname.new("\0")}.should raise_error(ArgumentError)
  end

  it "is tainted if path is tainted" do
    path = '/usr/local/bin'.taint
    Pathname.new(path).tainted?.should == true
  end

  it "raises a TypeError if not passed a String type" do
    lambda { Pathname.new(nil)   }.should raise_error(TypeError)
    lambda { Pathname.new(0)     }.should raise_error(TypeError)
    lambda { Pathname.new(true)  }.should raise_error(TypeError)
    lambda { Pathname.new(false) }.should raise_error(TypeError)
  end

  it "initializes with an object with to_path" do
    Pathname.new(mock_to_path('foo')).should == Pathname.new('foo')
  end
end
