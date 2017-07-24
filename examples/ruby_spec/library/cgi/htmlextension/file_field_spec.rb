require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#file_field" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed no arguments" do
    it "returns a file-'input'-element without a name and a size of 20" do
      output = @html.file_field
      output.should equal_element("INPUT", {"SIZE" => 20, "NAME" => "", "TYPE" => "file"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.file_field { "test" }
      output.should equal_element("INPUT", {"SIZE" => 20, "NAME" => "", "TYPE" => "file"}, "", not_closed: true)
    end
  end

  describe "when passed name" do
    it "returns a checkbox-'input'-element with the passed name" do
      output = @html.file_field("Example")
      output.should equal_element("INPUT", {"SIZE" => 20, "NAME" => "Example", "TYPE" => "file"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.file_field("Example") { "test" }
      output.should equal_element("INPUT", {"SIZE" => 20, "NAME" => "Example", "TYPE" => "file"}, "", not_closed: true)
    end
  end

  describe "when passed name, size" do
    it "returns a checkbox-'input'-element with the passed name and size" do
      output = @html.file_field("Example", 40)
      output.should equal_element("INPUT", {"SIZE" => 40, "NAME" => "Example", "TYPE" => "file"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.file_field("Example", 40) { "test" }
      output.should equal_element("INPUT", {"SIZE" => 40, "NAME" => "Example", "TYPE" => "file"}, "", not_closed: true)
    end
  end

  describe "when passed name, size, maxlength" do
    it "returns a checkbox-'input'-element with the passed name, size and maxlength" do
      output = @html.file_field("Example", 40, 100)
      output.should equal_element("INPUT", {"SIZE" => 40, "NAME" => "Example", "TYPE" => "file", "MAXLENGTH" => 100}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.file_field("Example", 40, 100) { "test" }
      output.should equal_element("INPUT", {"SIZE" => 40, "NAME" => "Example", "TYPE" => "file", "MAXLENGTH" => 100}, "", not_closed: true)
    end
  end

  describe "when passed a Hash" do
    it "returns a file-'input'-element using the passed Hash for attributes" do
      output = @html.file_field("NAME" => "test", "SIZE" => 40)
      output.should equal_element("INPUT", {"NAME" => "test", "SIZE" => 40}, "", not_closed: true)

      output = @html.file_field("NAME" => "test", "MAXLENGTH" => 100)
      output.should equal_element("INPUT", {"NAME" => "test", "MAXLENGTH" => 100}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.file_field("NAME" => "test", "SIZE" => 40) { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "SIZE" => 40}, "", not_closed: true)
    end
  end
end
