require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#indent_text" do
  before :each do
    @t = REXML::Text.new("")
  end
  it "indents a string with default parameters" do
    @t.indent_text("foo").should == "\tfoo"
  end

  it "accepts a custom indentation level as second argument" do
    @t.indent_text("foo", 2, "\t", true).should == "\t\tfoo"
  end

  it "accepts a custom separator as third argument" do
    @t.indent_text("foo", 1, "\n", true).should == "\nfoo"
  end

  it "accepts a fourth parameter to skip the first line" do
    @t.indent_text("foo", 1, "\t", false).should == "foo"
  end
end

