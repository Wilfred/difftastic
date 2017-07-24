require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#blockquote" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed a String" do
    it "returns a 'blockquote'-element, using the passed String for the 'cite'-attribute" do
      output = @html.blockquote("http://www.example.com/quotes/foo.html")
      output.should equal_element("BLOCKQUOTE", "CITE" => "http://www.example.com/quotes/foo.html")
    end

    it "includes the passed block's return value when passed a block" do
      output = @html.blockquote("http://www.example.com/quotes/foo.html") { "Foo!" }
      output.should equal_element("BLOCKQUOTE", { "CITE" => "http://www.example.com/quotes/foo.html" }, "Foo!")
    end
  end

  describe "when passed a Hash" do
    it "returns a 'blockquote'-element, using the passed Hash for attributes" do
      output = @html.blockquote("CITE" => "http://www.example.com/quotes/foo.html", "ID" => "test")
      output.should equal_element("BLOCKQUOTE", "CITE" => "http://www.example.com/quotes/foo.html", "ID" => "test")
    end

    it "includes the passed block's return value when passed a block" do
      output = @html.blockquote("CITE" => "http://www.example.com/quotes/foo.html", "ID" => "test") { "Foo!" }
      output.should equal_element("BLOCKQUOTE", {"CITE" => "http://www.example.com/quotes/foo.html", "ID" => "test"}, "Foo!")
    end
  end
end
