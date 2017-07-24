require File.expand_path('../../../spec_helper', __FILE__)
require 'shellwords'
include Shellwords

describe "Shellwords#shellwords" do
  it "honors quoted strings" do
    shellwords('a "b b" a').should == ['a', 'b b', 'a']
  end

  it "honors escaped double quotes" do
    shellwords('a "\"b\" c" d').should == ['a', '"b" c', 'd']
  end

  it "honors escaped single quotes" do
    shellwords("a \"'b' c\" d").should == ['a', "'b' c", 'd']
  end

  it "honors escaped spaces" do
    shellwords('a b\ c d').should == ['a', 'b c', 'd']
  end

  it "raises ArgumentError when double quoted strings are misquoted" do
    lambda { shellwords('a "b c d e') }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError when single quoted strings are misquoted" do
    lambda { shellwords("a 'b c d e") }.should raise_error(ArgumentError)
  end
end
