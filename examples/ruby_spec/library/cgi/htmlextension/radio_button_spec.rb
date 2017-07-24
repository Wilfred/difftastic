require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#radio_button" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed no arguments" do
    it "returns a radio-'input'-element without a name" do
      output = @html.radio_button
      output.should equal_element("INPUT", {"NAME" => "", "TYPE" => "radio"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.radio_button { "test" }
      output.should equal_element("INPUT", {"NAME" => "", "TYPE" => "radio"}, "", not_closed: true)
    end
  end

  describe "when passed name" do
    it "returns a radio-'input'-element with the passed name" do
      output = @html.radio_button("test")
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "radio"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.radio_button("test") { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "radio"}, "", not_closed: true)
    end
  end

  describe "CGI::HtmlExtension#checkbox when passed name, value" do
    it "returns a radio-'input'-element with the passed name and value" do
      output = @html.radio_button("test", "test-value")
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "radio", "VALUE" => "test-value"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.radio_button("test", "test-value") { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "radio", "VALUE" => "test-value"}, "", not_closed: true)
    end
  end

  describe "when passed name, value, checked" do
    it "returns a checked radio-'input'-element with the passed name and value when checked is true" do
      output = @html.radio_button("test", "test-value", true)
      output.should equal_element("INPUT", {"CHECKED" => true, "NAME" => "test", "TYPE" => "radio", "VALUE" => "test-value"}, "", not_closed: true)

      output = @html.radio_button("test", "test-value", false)
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "radio", "VALUE" => "test-value"}, "", not_closed: true)

      output = @html.radio_button("test", "test-value", nil)
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "radio", "VALUE" => "test-value"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.radio_button("test", "test-value", nil) { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "radio", "VALUE" => "test-value"}, "", not_closed: true)
    end
  end

  describe "when passed Hash" do
    it "returns a radio-'input'-element using the passed Hash for attributes" do
      attributes = {"NAME" => "test", "VALUE" => "test-value", "CHECKED" => true}
      output = @html.radio_button(attributes)
      output.should equal_element("INPUT", attributes, "", not_closed: true)
    end

    it "ignores a passed block" do
      attributes = {"NAME" => "test", "VALUE" => "test-value", "CHECKED" => true}
      output = @html.radio_button(attributes) { "test" }
      output.should equal_element("INPUT", attributes, "", not_closed: true)
    end
  end
end
