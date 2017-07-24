require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#value" do
  it "returns the text value of this node" do
    REXML::Text.new("test").value.should == "test"
  end

  it "does not escape entities" do
    REXML::Text.new("& \"").value.should == "& \""
  end

  it "follows the respect_whitespace attribute" do
    REXML::Text.new("test     bar", false).value.should == "test bar"
    REXML::Text.new("test     bar", true).value.should == "test     bar"
  end

  it "ignores the raw attribute" do
    REXML::Text.new("sean russell", false, nil, true).value.should == "sean russell"
  end
end

describe "REXML::Text#value=" do
  before :each do
    @t = REXML::Text.new("new")
  end

  it "sets the text of the node" do
    @t.value = "another text"
    @t.to_s.should == "another text"
  end

  it "escapes entities" do
    @t.value = "<a>"
    @t.to_s.should == "&lt;a&gt;"
  end
end
