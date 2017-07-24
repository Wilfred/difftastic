require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#add_attribute" do
  before :each do
    @person = REXML::Element.new "person"
    @person.attributes["name"] = "Bill"
  end

  it "adds multiple attributes from a hash" do
    @person.add_attributes({"name" => "Joe", "age" => "27"})
    @person.attributes["name"].should == "Joe"
    @person.attributes["age"].should == "27"
  end

  it "adds multiple attributes from an array" do
    attrs =  { "name" => "Joe", "age" => "27"}
    @person.add_attributes attrs.to_a
    @person.attributes["name"].should == "Joe"
    @person.attributes["age"].should == "27"
  end
end
