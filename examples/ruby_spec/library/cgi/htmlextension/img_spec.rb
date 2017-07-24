require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#img" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed no arguments" do
    it "returns an 'img'-element without an src-url or alt-text" do
      output = @html.img
      output.should equal_element("IMG", { "SRC" => "", "ALT" => "" }, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.img { "test" }
      output.should equal_element("IMG", { "SRC" => "", "ALT" => "" }, "", not_closed: true)
    end
  end

  describe "when passed src" do
    it "returns an 'img'-element with the passed src-url" do
      output = @html.img("/path/to/some/image.png")
      output.should equal_element("IMG", { "SRC" => "/path/to/some/image.png", "ALT" => "" }, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.img("/path/to/some/image.png")
      output.should equal_element("IMG", { "SRC" => "/path/to/some/image.png", "ALT" => "" }, "", not_closed: true)
    end
  end

  describe "when passed src, alt" do
    it "returns an 'img'-element with the passed src-url and the passed alt-text" do
      output = @html.img("/path/to/some/image.png", "Alternative")
      output.should equal_element("IMG", { "SRC" => "/path/to/some/image.png", "ALT" => "Alternative" }, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.img("/path/to/some/image.png", "Alternative") { "test" }
      output.should equal_element("IMG", { "SRC" => "/path/to/some/image.png", "ALT" => "Alternative" }, "", not_closed: true)
    end
  end

  describe "when passed src, alt, width" do
    it "returns an 'img'-element with the passed src-url, the passed alt-text and the passed width" do
      output = @html.img("/path/to/some/image.png", "Alternative", 40)
      output.should equal_element("IMG", { "SRC" => "/path/to/some/image.png", "ALT" => "Alternative", "WIDTH" => "40" }, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.img("/path/to/some/image.png", "Alternative", 40) { "test" }
      output.should equal_element("IMG", { "SRC" => "/path/to/some/image.png", "ALT" => "Alternative", "WIDTH" => "40" }, "", not_closed: true)
    end
  end

  describe "when passed src, alt, width, height" do
    it "returns an 'img'-element with the passed src-url, the passed alt-text, the passed width and the passed height" do
      output = @html.img("/path/to/some/image.png", "Alternative", 40, 60)
      output.should equal_element("IMG", { "SRC" => "/path/to/some/image.png", "ALT" => "Alternative", "WIDTH" => "40", "HEIGHT" => "60" }, "", not_closed: true)
    end

    it "ignores a passed block" do
      output = @html.img { "test" }
      output.should equal_element("IMG", { "SRC" => "", "ALT" => "" }, "", not_closed: true)
    end
  end

  describe "when passed Hash" do
    it "returns an 'img'-element with the passed Hash as attributes" do
      attributes = { "SRC" => "src", "ALT" => "alt", "WIDTH" => 100, "HEIGHT" => 50 }
      output = @html.img(attributes)
      output.should equal_element("IMG", attributes, "", not_closed: true)
    end

    it "ignores a passed block" do
      attributes = { "SRC" => "src", "ALT" => "alt", "WIDTH" => 100, "HEIGHT" => 50 }
      output = @html.img(attributes) { "test" }
      output.should equal_element("IMG", attributes, "", not_closed: true)
    end
  end
end
