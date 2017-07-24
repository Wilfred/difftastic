require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::CData#initialize" do
  it "creates a new CData object" do
    c = REXML::CData.new("some    text")
    c.should be_kind_of(REXML::CData)
    c.should be_kind_of(REXML::Text)
  end

  it "respects whitespace if whitespace is true" do
    c = REXML::CData.new("whitespace     test", true)
    c1 = REXML::CData.new("whitespace     test", false)

    c.to_s.should == "whitespace     test"
    c1.to_s.should == "whitespace test"
  end

  it "receives parent as third argument" do
    e = REXML::Element.new("root")
    REXML::CData.new("test", true, e)
    e.to_s.should == "<root><![CDATA[test]]></root>"
  end
end
