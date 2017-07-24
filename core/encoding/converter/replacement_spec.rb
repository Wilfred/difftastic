require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter#replacement" do
    it "returns '?' in US-ASCII when the destination encoding is not UTF-8" do
      ec = Encoding::Converter.new("utf-8", "us-ascii")
      ec.replacement.should == "?"
      ec.replacement.encoding.should == Encoding::US_ASCII

      ec = Encoding::Converter.new("utf-8", "sjis")
      ec.replacement.should == "?"
      ec.replacement.encoding.should == Encoding::US_ASCII
    end

    it "returns \\uFFFD when the destination encoding is UTF-8" do
      ec = Encoding::Converter.new("us-ascii", "utf-8")
      ec.replacement.should == "\u{fffd}".force_encoding('utf-8')
      ec.replacement.encoding.should == Encoding::UTF_8
    end
  end

  describe "Encoding::Converter#replacement=" do
    it "accepts a String argument" do
      ec = Encoding::Converter.new("utf-8", "us-ascii")
      ec.replacement = "!"
      ec.replacement.should == "!"
    end

    it "accepts a String argument of arbitrary length" do
      ec = Encoding::Converter.new("utf-8", "us-ascii")
      ec.replacement = "?!?" * 9999
      ec.replacement.should == "?!?" * 9999
    end

    it "raises a TypeError if assigned a non-String argument" do
      ec = Encoding::Converter.new("utf-8", "us-ascii")
      lambda { ec.replacement = nil }.should raise_error(TypeError)
    end

    it "sets #replacement" do
      ec = Encoding::Converter.new("us-ascii", "utf-8")
      ec.replacement.should == "\u{fffd}".force_encoding('utf-8')
      ec.replacement = '?'.encode('utf-8')
      ec.replacement.should == '?'.force_encoding('utf-8')
    end

    it "raises an UndefinedConversionError is the argument cannot be converted into the destination encoding" do
      ec = Encoding::Converter.new("sjis", "ascii")
      utf8_q = "\u{986}".force_encoding('utf-8')
      ec.primitive_convert(utf8_q.dup, "").should == :undefined_conversion
      lambda { ec.replacement = utf8_q }.should \
        raise_error(Encoding::UndefinedConversionError)
    end

    it "does not change the replacement character if the argument cannot be converted into the destination encoding" do
      ec = Encoding::Converter.new("sjis", "ascii")
      utf8_q = "\u{986}".force_encoding('utf-8')
      ec.primitive_convert(utf8_q.dup, "").should == :undefined_conversion
      lambda { ec.replacement = utf8_q }.should \
        raise_error(Encoding::UndefinedConversionError)
      ec.replacement.should == "?".force_encoding('us-ascii')
    end

    it "uses the replacement character" do
      ec = Encoding::Converter.new("utf-8", "us-ascii", :invalid => :replace, :undef => :replace)
      ec.replacement = "!"
      dest = ""
      status = ec.primitive_convert "中文123", dest

      status.should == :finished
      dest.should == "!!123"
    end
  end
end
