require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#html" do
  before :each do
    @html = CGISpecs.cgi_new
    @html.stub!(:doctype).and_return("<!DOCTYPE SUPA-FUNKAY-RUBYSPEC-DOCTYPE>")
  end

  describe "when passed no arguments" do
    it "returns a self's doctype and an 'html'-element" do
      expected = '<!DOCTYPE SUPA-FUNKAY-RUBYSPEC-DOCTYPE><HTML>'
      @html.html.should == expected
    end

    it "includes the passed block when passed a block" do
      expected = '<!DOCTYPE SUPA-FUNKAY-RUBYSPEC-DOCTYPE><HTML>test</HTML>'
      @html.html { "test" }.should == expected
    end
  end

  describe "when passed 'PRETTY'" do
    it "returns pretty output when the passed String is 'PRETTY" do
      expected = "<!DOCTYPE SUPA-FUNKAY-RUBYSPEC-DOCTYPE>\n<HTML>\n"
      @html.html("PRETTY").should == expected
    end

    it "includes the passed block when passed a block" do
      expected = "<!DOCTYPE SUPA-FUNKAY-RUBYSPEC-DOCTYPE>\n<HTML>\n  test\n</HTML>\n"
      @html.html("PRETTY") { "test" }.should == expected
    end
  end

  describe "when passed a Hash" do
    it "returns an 'html'-element using the passed Hash for attributes" do
      expected = '<!DOCTYPE HTML PUBLIC "-//IETF//DTD HTML//EN"><HTML BLA="TEST">'
      @html.html("DOCTYPE" => '<!DOCTYPE HTML PUBLIC "-//IETF//DTD HTML//EN">', "BLA" => "TEST").should == expected
    end

    it "omits the doctype when the Hash contains a 'DOCTYPE' entry that's false or nil" do
      @html.html("DOCTYPE" => false).should == "<HTML>"
      @html.html("DOCTYPE" => nil).should == "<HTML>"
    end
  end

  describe "when each HTML generation" do
    it "returns the doctype declaration for HTML3" do
      expect = '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 3.2 Final//EN">'
      CGISpecs.cgi_new("html3").html.should == expect + "<HTML>"
      CGISpecs.cgi_new("html3").html { "html body" }.should == expect + "<HTML>html body</HTML>"
    end

    it "returns the doctype declaration for HTML4" do
      expect = '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">'
      CGISpecs.cgi_new("html4").html.should == expect + "<HTML>"
      CGISpecs.cgi_new("html4").html { "html body" }.should == expect + "<HTML>html body</HTML>"
    end

    it "returns the doctype declaration for the Transitional version of HTML4" do
      expect = '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">'
      CGISpecs.cgi_new("html4Tr").html.should == expect + "<HTML>"
      CGISpecs.cgi_new("html4Tr").html { "html body" }.should == expect + "<HTML>html body</HTML>"
    end
  end
end
