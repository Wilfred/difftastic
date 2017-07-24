require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#textarea" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed no arguments" do
    it "returns an 'textarea'-element without a name" do
      output = @html.textarea
      output.should equal_element("TEXTAREA", {"NAME" => "", "COLS" => "70", "ROWS" => "10"}, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.textarea { "Example" }
      output.should equal_element("TEXTAREA", {"NAME" => "", "COLS" => "70", "ROWS" => "10"}, "Example")
    end
  end

  describe "when passed name" do
    it "returns an 'textarea'-element with the passed name" do
      output = @html.textarea("test")
      output.should equal_element("TEXTAREA", {"NAME" => "test", "COLS" => "70", "ROWS" => "10"}, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.textarea("test") { "Example" }
      output.should equal_element("TEXTAREA", {"NAME" => "test", "COLS" => "70", "ROWS" => "10"}, "Example")
    end
  end

  describe "when passed name, cols" do
    it "returns an 'textarea'-element with the passed name and the passed amount of columns" do
      output = @html.textarea("test", 40)
      output.should equal_element("TEXTAREA", {"NAME" => "test", "COLS" => "40", "ROWS" => "10"}, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.textarea("test", 40) { "Example" }
      output.should equal_element("TEXTAREA", {"NAME" => "test", "COLS" => "40", "ROWS" => "10"}, "Example")
    end
  end

  describe "when passed name, cols, rows" do
    it "returns an 'textarea'-element with the passed name, the passed amount of columns and the passed number of rows" do
      output = @html.textarea("test", 40, 5)
      output.should equal_element("TEXTAREA", {"NAME" => "test", "COLS" => "40", "ROWS" => "5"}, "")
    end

    it "includes the return value of the passed block when passed a block" do
      output = @html.textarea("test", 40, 5) { "Example" }
      output.should equal_element("TEXTAREA", {"NAME" => "test", "COLS" => "40", "ROWS" => "5"}, "Example")
    end
  end

  describe "when passed Hash" do
    it "uses the passed Hash as attributes" do
      @html.textarea("ID" => "test").should == '<TEXTAREA ID="test"></TEXTAREA>'

      attributes = {"ID" => "test-id", "NAME" => "test-name"}
      output = @html.textarea(attributes)
      output.should equal_element("TEXTAREA", attributes, "")
    end

    it "includes the return value of the passed block when passed a block" do
      attributes = {"ID" => "test-id", "NAME" => "test-name"}
      output = @html.textarea(attributes) { "test" }
      output.should equal_element("TEXTAREA", attributes, "test")
    end
  end
end
