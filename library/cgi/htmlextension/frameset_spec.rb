require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require 'cgi'

describe "CGI::HtmlExtension#frameset" do
  before :each do
    @html = CGISpecs.cgi_new("html4Fr")
  end

  it "initializes the HTML Generation methods for the Frameset version of HTML4" do
    @html.frameset.should == "<FRAMESET></FRAMESET>"
    @html.frameset { "link text" }.should == "<FRAMESET>link text</FRAMESET>"
  end
end
