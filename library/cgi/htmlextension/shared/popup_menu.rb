describe :cgi_htmlextension_popup_menu, shared: true do
  before :each do
    @html = CGISpecs.cgi_new
  end

  describe "when passed no arguments" do
    it "returns an empty 'select'-element without a name" do
      output = @html.send(@method)
      output.should equal_element("SELECT", {"NAME" => ""}, "")
    end

    it "ignores a passed block" do
      output = @html.send(@method) { "test" }
      output.should equal_element("SELECT", {"NAME" => ""}, "")
    end
  end

  describe "when passed name, values ..." do
    it "returns a 'select'-element with the passed name containing 'option'-elements based on the passed values" do
      content = @html.option("VALUE" => "foo") { "foo" }
      content << @html.option("VALUE" => "bar") { "bar" }
      content << @html.option("VALUE" => "baz") { "baz" }

      output = @html.send(@method, "test", "foo", "bar", "baz")
      output.should equal_element("SELECT", {"NAME" => "test"}, content)
    end

    it "allows passing values inside of arrays" do
      content = @html.option("VALUE" => "foo") { "foo" }
      content << @html.option("VALUE" => "bar") { "bar" }
      content << @html.option("VALUE" => "baz") { "baz" }

      output = @html.send(@method, "test", ["foo"], ["bar"], ["baz"])
      output.should equal_element("SELECT", {"NAME" => "test"}, content)
    end

    it "allows passing a value as an Array containing the value and the select state or a label" do
      content = @html.option("VALUE" => "foo") { "foo" }
      content << @html.option("VALUE" => "bar", "SELECTED" => true) { "bar" }
      content << @html.option("VALUE" => "baz") { "baz" }

      output = @html.send(@method, "test", ["foo"], ["bar", true], "baz")
      output.should equal_element("SELECT", {"NAME" => "test"}, content)
    end

    it "allows passing a value as an Array containing the value, a label and the select state" do
      content = @html.option("VALUE" => "1") { "Foo" }
      content << @html.option("VALUE" => "2", "SELECTED" => true) { "Bar" }
      content << @html.option("VALUE" => "Baz") { "Baz" }

      output = @html.send(@method, "test", ["1", "Foo"], ["2", "Bar", true], "Baz")
      output.should equal_element("SELECT", {"NAME" => "test"}, content)
    end

    it "ignores a passed block" do
      content = @html.option("VALUE" => "foo") { "foo" }
      content << @html.option("VALUE" => "bar") { "bar" }
      content << @html.option("VALUE" => "baz") { "baz" }

      output = @html.send(@method, "test", "foo", "bar", "baz") { "woot" }
      output.should equal_element("SELECT", {"NAME" => "test"}, content)
    end
  end

  describe "when passed a Hash" do
    it "uses the passed Hash to generate the 'select'-element and the 'option'-elements" do
      attributes = {
        "NAME"   => "test", "SIZE" => 2, "MULTIPLE" => true,
        "VALUES" => [["1", "Foo"], ["2", "Bar", true], "Baz"]
      }

      content = @html.option("VALUE" => "1") { "Foo" }
      content << @html.option("VALUE" => "2", "SELECTED" => true) { "Bar" }
      content << @html.option("VALUE" => "Baz") { "Baz" }

      output = @html.send(@method, attributes)
      output.should equal_element("SELECT", {"NAME" => "test", "SIZE" => 2, "MULTIPLE" => true}, content)
    end

    it "ignores a passed block" do
      attributes = {
        "NAME"   => "test", "SIZE" => 2, "MULTIPLE" => true,
        "VALUES" => [["1", "Foo"], ["2", "Bar", true], "Baz"]
      }

      content = @html.option("VALUE" => "1") { "Foo" }
      content << @html.option("VALUE" => "2", "SELECTED" => true) { "Bar" }
      content << @html.option("VALUE" => "Baz") { "Baz" }

      output = @html.send(@method, attributes) { "testing" }
      output.should equal_element("SELECT", {"NAME" => "test", "SIZE" => 2, "MULTIPLE" => true}, content)
    end
  end
end
