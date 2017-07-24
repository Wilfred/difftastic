require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#submit" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed no arguments" do
    it "returns a submit-'input'-element" do
      output = @html.submit
      output.should equal_element("INPUT", {"TYPE" => "submit"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.submit { "test" }
      output.should equal_element("INPUT", {"TYPE" => "submit"}, "", not_closed: true)
    end
  end

  describe "when passed value" do
    it "returns a submit-'input'-element with the passed value" do
      output = @html.submit("Example")
      output.should equal_element("INPUT", {"TYPE" => "submit", "VALUE" => "Example"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.submit("Example") { "test" }
      output.should equal_element("INPUT", {"TYPE" => "submit", "VALUE" => "Example"}, "", not_closed: true)
    end
  end

  describe "when passed value, name" do
    it "returns a submit-'input'-element with the passed value and the passed name" do
      output = @html.submit("Example", "test-name")
      output.should equal_element("INPUT", {"TYPE" => "submit", "VALUE" => "Example", "NAME" => "test-name"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.submit("Example", "test-name") { "test" }
      output.should equal_element("INPUT", {"TYPE" => "submit", "VALUE" => "Example", "NAME" => "test-name"}, "", not_closed: true)
    end
  end

  describe "when passed Hash" do
    it "returns a submit-'input'-element with the passed value" do
      output = @html.submit("Example")
      output.should equal_element("INPUT", {"TYPE" => "submit", "VALUE" => "Example"}, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.submit("Example") { "test" }
      output.should equal_element("INPUT", {"TYPE" => "submit", "VALUE" => "Example"}, "", not_closed: true)
    end
  end
end
