require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#multipart_form" do
  before :each do
    @html = CGISpecs.cgi_new
    @html.stub!(:script_name).and_return("/path/to/some/script.rb")
  end

  describe "when passed no arguments" do
    it "returns a 'form'-element with it's enctype set to multipart" do
      output = @html.multipart_form
      output.should equal_element("FORM", { "ENCTYPE" => "multipart/form-data", "METHOD" => "post" }, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.multipart_form { "test" }
      output.should equal_element("FORM", { "ENCTYPE" => "multipart/form-data", "METHOD" => "post" }, "test")
    end
  end

  describe "when passed action" do
    it "returns a 'form'-element with the passed action" do
      output = @html.multipart_form("/some/other/script.rb")
      output.should equal_element("FORM", { "ENCTYPE" => "multipart/form-data", "METHOD" => "post", "ACTION" => "/some/other/script.rb" }, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.multipart_form("/some/other/script.rb") { "test" }
      output.should equal_element("FORM", { "ENCTYPE" => "multipart/form-data", "METHOD" => "post", "ACTION" => "/some/other/script.rb" }, "test")
    end
  end

  describe "when passed action, enctype" do
    it "returns a 'form'-element with the passed action and enctype" do
      output = @html.multipart_form("/some/other/script.rb", "application/x-www-form-urlencoded")
      output.should equal_element("FORM", { "ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "post", "ACTION" => "/some/other/script.rb" }, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.multipart_form("/some/other/script.rb", "application/x-www-form-urlencoded") { "test" }
      output.should equal_element("FORM", { "ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "post", "ACTION" => "/some/other/script.rb" }, "test")
    end
  end

  describe "when passed Hash" do
    it "returns a 'form'-element with the passed Hash as attributes" do
      output = @html.multipart_form("ID" => "test")
      output.should equal_element("FORM", { "ENCTYPE" => "multipart/form-data", "METHOD" => "post", "ID" => "test" }, "")

      output = @html.multipart_form("ID" => "test", "ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "get")
      output.should equal_element("FORM", { "ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "get", "ID" => "test" }, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.multipart_form("ID" => "test") { "test" }
      output.should equal_element("FORM", { "ENCTYPE" => "multipart/form-data", "METHOD" => "post", "ID" => "test" }, "test")

      output = @html.multipart_form("ID" => "test", "ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "get") { "test" }
      output.should equal_element("FORM", { "ENCTYPE" => "application/x-www-form-urlencoded", "METHOD" => "get", "ID" => "test" }, "test")
    end
  end
end
