require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text.new" do

  it "creates a Text child node with no parent" do
    t = REXML::Text.new("test")
    t.should be_kind_of(REXML::Child)
    t.should == "test"
    t.parent.should == nil
  end

  it "respects whitespace if second argument is true" do
    t = REXML::Text.new("testing   whitespace", true)
    t.should == "testing   whitespace"
    t = REXML::Text.new("   ", true)
    t.should == "   "
  end

  it "receives a parent as third argument" do
    e = REXML::Element.new("root")
    t = REXML::Text.new("test", false, e)
    t.parent.should == e
    e.to_s.should == "<root>test</root>"
  end

  it "expects escaped text if raw is true" do
    t = REXML::Text.new("&lt;&amp;&gt;", false, nil, true)
    t.should == "&lt;&amp;&gt;"

    lambda{ REXML::Text.new("<&>", false, nil, true)}.should raise_error(Exception)
  end

  it "uses raw value of the parent if raw is nil" do
    e1 = REXML::Element.new("root", nil, { raw: :all})
    lambda {REXML::Text.new("<&>", false, e1)}.should raise_error(Exception)

    e2 = REXML::Element.new("root", nil, { raw: []})
    e2.raw.should be_false
    t1 = REXML::Text.new("<&>", false, e2)
    t1.should == "&lt;&amp;&gt;"
  end

  it "escapes the values if raw is false" do
    t = REXML::Text.new("<&>", false, nil, false)
    t.should == "&lt;&amp;&gt;"
  end
end

