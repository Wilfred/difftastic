require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#form" do
  before :each do
    @html = CGISpecs.cgi_new
    @html.stub!(:script_name).and_return("/path/to/some/script")
  end

  describe "when passed no arguments" do
    it "returns a 'form'-element" do
      output = @html.form
      output.should equal_element("FORM", {"ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "post", "ACTION" => "/path/to/some/script"}, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.form { "test" }
      output.should equal_element("FORM", {"ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "post", "ACTION" => "/path/to/some/script"}, "test")
    end
  end

  describe "when passed method" do
    it "returns a 'form'-element with the passed method" do
      output = @html.form("get")
      output.should equal_element("FORM", {"ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "get", "ACTION" => "/path/to/some/script"}, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.form("get") { "test" }
      output.should equal_element("FORM", {"ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "get", "ACTION" => "/path/to/some/script"}, "test")
    end
  end

  describe "when passed method, action" do
    it "returns a 'form'-element with the passed method and the passed action" do
      output = @html.form("get", "/some/other/script")
      output.should equal_element("FORM", {"ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "get", "ACTION" => "/some/other/script"}, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.form("get", "/some/other/script") { "test" }
      output.should equal_element("FORM", {"ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "get", "ACTION" => "/some/other/script"}, "test")
    end
  end

  describe "when passed method, action, enctype" do
    it "returns a 'form'-element with the passed method, action and enctype" do
      output = @html.form("get", "/some/other/script", "multipart/form-data")
      output.should equal_element("FORM", {"ENCTYPE" => "multipart/form-data", "METHOD" => "get", "ACTION" => "/some/other/script"}, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.form("get", "/some/other/script", "multipart/form-data") { "test" }
      output.should equal_element("FORM", {"ENCTYPE" => "multipart/form-data", "METHOD" => "get", "ACTION" => "/some/other/script"}, "test")
    end
  end
end
