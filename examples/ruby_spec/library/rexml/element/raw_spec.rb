require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#raw" do
  it "returns true if raw mode is set to all" do
    REXML::Element.new("MyElem", nil, {raw: :all}).raw.should == true
  end

  it "returns true if raw mode is set to expanded_name" do
    REXML::Element.new("MyElem", nil, {raw: "MyElem"}).raw.should == true
  end

  it "returns false if raw mode is not set" do
    REXML::Element.new("MyElem", nil, {raw: ""}).raw.should == false
  end

  it "returns false if raw is not :all or expanded_name" do
    REXML::Element.new("MyElem", nil, {raw: "Something"}).raw.should == false
  end

  it "returns nil if context is not set" do
    REXML::Element.new("MyElem").raw.should == nil
  end
end
