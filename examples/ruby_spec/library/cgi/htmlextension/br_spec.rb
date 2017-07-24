require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#br" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when each HTML generation" do
    it "returns the doctype declaration for HTML3" do
      CGISpecs.cgi_new("html3").br.should == "<BR>"
    end

    it "returns the doctype declaration for HTML4" do
      CGISpecs.cgi_new("html4").br.should == "<BR>"
    end
    it "returns the doctype declaration for the Transitional version of HTML4" do
      CGISpecs.cgi_new("html4Tr").br.should == "<BR>"
    end
  end
end
