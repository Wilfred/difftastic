require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#base" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when bassed a String" do
    it "returns a 'base'-element, using the passed String as the 'href'-attribute" do
      output = @html.base("http://www.example.com")
      output.should equal_element("BASE", {"HREF" => "http://www.example.com"}, nil, not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.base("http://www.example.com") { "Example" }
      output.should equal_element("BASE", {"HREF" => "http://www.example.com"}, nil, not_closed: true)
    end
  end

  describe "when passed a Hash" do
    it "returns a 'base'-element, using the passed Hash for attributes" do
      output = @html.base("HREF" => "http://www.example.com", "ID" => "test")
      output.should equal_element("BASE", {"HREF" => "http://www.example.com", "ID" => "test"}, nil, not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.base("HREF" => "http://www.example.com", "ID" => "test") { "Example" }
      output.should equal_element("BASE", {"HREF" => "http://www.example.com", "ID" => "test"}, nil, not_closed: true)
    end
  end
end
