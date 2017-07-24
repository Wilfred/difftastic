require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)

describe "CGI::HtmlExtension#checkbox_group" do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed name, values ..." do
    it "returns a sequence of 'checkbox'-elements with the passed name and the passed values" do
      output = CGISpecs.split(@html.checkbox_group("test", "foo", "bar", "baz"))
      output[0].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "foo"}, "foo", not_closed: true)
      output[1].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "bar"}, "bar", not_closed: true)
      output[2].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "baz"}, "baz", not_closed: true)
    end

    it "allows passing a value inside an Array" do
      output = CGISpecs.split(@html.checkbox_group("test", ["foo"], "bar", ["baz"]))
      output[0].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "foo"}, "foo", not_closed: true)
      output[1].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "bar"}, "bar", not_closed: true)
      output[2].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "baz"}, "baz", not_closed: true)
    end

    it "allows passing a value as an Array containing the value and the checked state or a label" do
      output = CGISpecs.split(@html.checkbox_group("test", ["foo"], ["bar", true], ["baz", "label for baz"]))
      output[0].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "foo"}, "foo", not_closed: true)
      output[1].should equal_element("INPUT", {"CHECKED" => true, "NAME" => "test", "TYPE" => "checkbox", "VALUE" => "bar"}, "bar", not_closed: true)
      output[2].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "baz"}, "label for baz", not_closed: true)
    end

    it "allows passing a value as an Array containing the value, a label and the checked state" do
      output = CGISpecs.split(@html.checkbox_group("test", ["foo", "label for foo", true], ["bar", "label for bar", false], ["baz", "label for baz", true]))
      output[0].should equal_element("INPUT", {"CHECKED" => true, "NAME" => "test", "TYPE" => "checkbox", "VALUE" => "foo"}, "label for foo", not_closed: true)
      output[1].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "bar"}, "label for bar", not_closed: true)
      output[2].should equal_element("INPUT", {"CHECKED" => true, "NAME" => "test", "TYPE" => "checkbox", "VALUE" => "baz"}, "label for baz", not_closed: true)
    end

    it "returns an empty String when passed no values" do
      @html.checkbox_group("test").should == ""
    end

    it "ignores a passed block" do
      output = CGISpecs.split(@html.checkbox_group("test", "foo", "bar", "baz") { "test" })
      output[0].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "foo"}, "foo", not_closed: true)
      output[1].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "bar"}, "bar", not_closed: true)
      output[2].should equal_element("INPUT", {"NAME" => "test", "TYPE" => "checkbox", "VALUE" => "baz"}, "baz", not_closed: true)
    end
  end

  describe "when passed Hash" do
    it "uses the passed Hash to generate the checkbox sequence" do
      output = CGISpecs.split(@html.checkbox_group("NAME" => "name", "VALUES" => ["foo", "bar", "baz"]))
      output[0].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "foo"}, "foo", not_closed: true)
      output[1].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "bar"}, "bar", not_closed: true)
      output[2].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "baz"}, "baz", not_closed: true)

      output = CGISpecs.split(@html.checkbox_group("NAME" => "name", "VALUES" => [["foo"], ["bar", true], "baz"]))
      output[0].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "foo"}, "foo", not_closed: true)
      output[1].should equal_element("INPUT", {"CHECKED" => true, "NAME" => "name", "TYPE" => "checkbox", "VALUE" => "bar"}, "bar", not_closed: true)
      output[2].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "baz"}, "baz", not_closed: true)

      output = CGISpecs.split(@html.checkbox_group("NAME" => "name", "VALUES" => [["1", "Foo"], ["2", "Bar", true], "Baz"]))
      output[0].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "1"}, "Foo", not_closed: true)
      output[1].should equal_element("INPUT", {"CHECKED" => true, "NAME" => "name", "TYPE" => "checkbox", "VALUE" => "2"}, "Bar", not_closed: true)
      output[2].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "Baz"}, "Baz", not_closed: true)
    end

    it "ignores a passed block" do
      output = CGISpecs.split(@html.checkbox_group("NAME" => "name", "VALUES" => ["foo", "bar", "baz"]) { "test" })
      output[0].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "foo"}, "foo", not_closed: true)
      output[1].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "bar"}, "bar", not_closed: true)
      output[2].should equal_element("INPUT", {"NAME" => "name", "TYPE" => "checkbox", "VALUE" => "baz"}, "baz", not_closed: true)
    end
  end
end
