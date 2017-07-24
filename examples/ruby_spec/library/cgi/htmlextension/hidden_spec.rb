require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#hidden" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed no arguments" do
    it "returns an hidden-'input'-element without a name" do
      output = @html.hidden
      output.should equal_element("INPUT", {"NAME" => "", "TYPE" => "hidden"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.hidden { "test" }
      output.should equal_element("INPUT", {"NAME" => "", "TYPE" => "hidden"}, "", not_closed: true)
    end
  end

  describe "when passed name" do
    it "returns an hidden-'input'-element with the passed name" do
      output = @html.hidden("test")
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "hidden"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.hidden("test") { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "hidden"}, "", not_closed: true)
    end
  end

  describe "when passed name, value" do
    it "returns an hidden-'input'-element with the passed name and value" do
      output = @html.hidden("test", "some value")
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "hidden", "VALUE" => "some value"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.hidden("test", "some value") { "test" }
      output.should equal_element("INPUT", {"NAME" => "test", "TYPE" => "hidden", "VALUE" => "some value"}, "", not_closed: true)
    end
  end

  describe "when passed Hash" do
    it "returns a checkbox-'input'-element using the passed Hash for attributes" do
      attributes = { "NAME" => "test", "VALUE" => "some value" }
      output = @html.hidden("test", "some value")
      output.should equal_element("INPUT", attributes, "", not_closed: true)
    end

    it "ignores a passed block" do
      attributes = { "NAME" => "test", "VALUE" => "some value" }
      output = @html.hidden("test", "some value") { "test" }
      output.should equal_element("INPUT", attributes, "", not_closed: true)
    end
  end
end
