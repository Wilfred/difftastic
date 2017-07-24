require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#join" do
  it "without separators" do
    Pathname.new('/usr').join(Pathname.new('foo')).should == Pathname.new('/usr/foo')
  end

  it "with separators" do
    Pathname.new('/usr').join(Pathname.new('/foo')).should == Pathname.new('/foo')
  end

  it "with a string" do
    Pathname.new('/usr').join('foo').should == Pathname.new('/usr/foo')
  end

  it "with root" do
    Pathname.new('/usr').join(Pathname.new('/')).should == Pathname.new('/')
  end

  it "with a relative path" do
    Pathname.new('/usr').join(Pathname.new('../foo')).should == Pathname.new('/foo')
  end

  it "a relative path with current" do
    Pathname.new('.').join(Pathname.new('foo')).should == Pathname.new('foo')
  end

  it "an absolute path with current" do
    Pathname.new('.').join(Pathname.new('/foo')).should == Pathname.new('/foo')
  end

  it "a prefixed relative path with current" do
    Pathname.new('.').join(Pathname.new('./foo')).should == Pathname.new('foo')
  end

  it "multiple paths" do
    Pathname.new('.').join(Pathname.new('./foo'), 'bar').should == Pathname.new('foo/bar')
  end
end
