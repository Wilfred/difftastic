require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#a" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed a String" do
    it "returns an 'a'-element, using the passed String as the 'href'-attribute" do
      output = @html.a("http://www.example.com")
      output.should equal_element("A", "HREF" => "http://www.example.com")
    end

    it "includes the passed block's return value when passed a block" do
      output = @html.a("http://www.example.com") { "Example" }
      output.should equal_element("A", { "HREF" => "http://www.example.com" }, "Example")
    end
  end

  describe "when passed a Hash" do
    it "returns an 'a'-element, using the passed Hash for attributes" do
      attributes = {"HREF" => "http://www.example.com", "TARGET" => "_top"}
      @html.a(attributes).should equal_element("A", attributes)
    end

    it "includes the passed block's return value when passed a block" do
      attributes = {"HREF" => "http://www.example.com", "TARGET" => "_top"}
      @html.a(attributes) { "Example" }.should equal_element("A", attributes, "Example")
    end
  end

  describe "when each HTML generation" do
    it "returns the doctype declaration for HTML3" do
      CGISpecs.cgi_new("html3").a.should == %(<A HREF=""></A>)
      CGISpecs.cgi_new("html3").a { "link text" }.should == %(<A HREF="">link text</A>)
    end

    it "returns the doctype declaration for HTML4" do
      CGISpecs.cgi_new("html4").a.should == %(<A HREF=""></A>)
      CGISpecs.cgi_new("html4").a { "link text" }.should == %(<A HREF="">link text</A>)
    end
    it "returns the doctype declaration for the Transitional version of HTML4" do
      CGISpecs.cgi_new("html4Tr").a.should == %(<A HREF=""></A>)
      CGISpecs.cgi_new("html4Tr").a { "link text" }.should == %(<A HREF="">link text</A>)
    end
  end
end
