require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#doctype" do
  describe "when each HTML generation" do
    it "returns the doctype declaration for HTML3" do
      expect = '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 3.2 Final//EN">'
      CGISpecs.cgi_new("html3").doctype.should == expect
    end

    it "returns the doctype declaration for HTML4" do
      expect = '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">'
      CGISpecs.cgi_new("html4").doctype.should == expect
    end

    it "returns the doctype declaration for the Frameset version of HTML4" do
      expect = '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Frameset//EN" "http://www.w3.org/TR/html4/frameset.dtd">'
      CGISpecs.cgi_new("html4Fr").doctype.should == expect
    end

    it "returns the doctype declaration for the Transitional version of HTML4" do
      expect = '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">'
      CGISpecs.cgi_new("html4Tr").doctype.should == expect
    end
  end
end
