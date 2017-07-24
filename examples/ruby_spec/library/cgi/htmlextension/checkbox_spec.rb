require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#checkbox" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed no arguments" do
    it "returns a checkbox-'input'-element without a name" do
      output = @html.checkbox
      output.should equal_element("INPUT", {"NAME" => "", "TYPE" => "checkbox"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.checkbox { "test" }
      output.should equal_element("INPUT", {"NAME" => "", "TYPE" => "checkbox"}, "", not_closed: true)
    end
  end

  describe "when passed name" do
    it "returns a checkbox-'input'-element with the passed name" do
      output = @html.checkbox("test")
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.checkbox("test") { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox"}, "", not_closed: true)
    end
  end

  describe "CGI::HtmlExtension#checkbox when passed name, value" do
    it "returns a checkbox-'input'-element with the passed name and value" do
      output = @html.checkbox("test", "test-value")
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "test-value"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.checkbox("test", "test-value") { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "test-value"}, "", not_closed: true)
    end
  end

  describe "when passed name, value, checked" do
    it "returns a checked checkbox-'input'-element with the passed name and value when checked is true" do
      output = @html.checkbox("test", "test-value", true)
      output.should equal_element("INPUT", {"CHECKED" => true, "NAME" => "test", "TYPE" => "checkbox", "VALUE" => "test-value"}, "", not_closed: true)

      output = @html.checkbox("test", "test-value", false)
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "test-value"}, "", not_closed: true)

      output = @html.checkbox("test", "test-value", nil)
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "test-value"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.checkbox("test", "test-value", nil) { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "test-value"}, "", not_closed: true)
    end
  end

  describe "when passed Hash" do
    it "returns a checkbox-'input'-element using the passed Hash for attributes" do
      attributes = {"NAME" => "test", "VALUE" => "test-value", "CHECKED" => true}
      output = @html.checkbox(attributes)
      output.should equal_element("INPUT", attributes, "", not_closed: true)
    end

    it "ignores a passed block" do
      attributes = {"NAME" => "test", "VALUE" => "test-value", "CHECKED" => true}
      output = @html.checkbox(attributes) { "test" }
      output.should equal_element("INPUT", attributes, "", not_closed: true)
    end
  end
end
