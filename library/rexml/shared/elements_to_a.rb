require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe :rexml_elements_to_a, shared: true do
  before :each do
    @e = REXML::Element.new "root"
    @first = REXML::Element.new("FirstChild")
    @second = REXML::Element.new("SecondChild")
    @e << @first
    @e << @second
  end

  it "returns elements that match xpath" do
    @e.elements.send(@method, "FirstChild").first.should == @first
  end

  # According to the docs REXML::Element#get_elements is an alias for
  # REXML::Elements.to_a. Implementation wise there's a difference, get_elements
  # always needs the first param (even if it's nil).
  # A patch was submitted:
  # http://rubyforge.org/tracker/index.php?func=detail&aid=19354&group_id=426&atid=1698
  it "returns all childs if xpath is nil" do
    @e.elements.send(@method).should == [@first, @second]
  end

end

describe "REXML::REXML::Elements#to_a" do
  it_behaves_like :rexml_elements_to_a, :to_a
end

describe "REXML::REXML::Element#get_elements" do
  it_behaves_like :rexml_elements_to_a, :get_elements
end
