require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Document#stand_alone?" do
  it "returns the XMLDecl standalone value" do
    d = REXML::Document.new
    decl = REXML::XMLDecl.new("1.0", "UTF-8", "yes")
    d.add decl
    d.stand_alone?.should == "yes"
  end

  # According to the docs this should return the default XMLDecl but that
  # will carry some more problems when printing the document. Currently, it
  # returns nil. See http://www.ruby-forum.com/topic/146812#650061
  it "returns the default value when no XML declaration present" do
    REXML::Document.new.stand_alone?.should == nil
  end

end
