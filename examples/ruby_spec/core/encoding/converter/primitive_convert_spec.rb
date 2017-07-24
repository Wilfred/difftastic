# -*- encoding: binary -*-
require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter#primitive_convert" do
    before :each do
      @ec = Encoding::Converter.new("utf-8", "iso-8859-1")
    end

    it "accepts a nil source buffer" do
      lambda { @ec.primitive_convert(nil,"") }.should_not raise_error
    end

    it "accepts a String as the source buffer" do
      lambda { @ec.primitive_convert("","") }.should_not raise_error
    end

    it "accepts nil for the destination byte offset" do
      lambda { @ec.primitive_convert("","", nil) }.should_not raise_error
    end

    it "accepts an integer for the destination byte offset" do
      lambda { @ec.primitive_convert("","a", 1) }.should_not raise_error
    end

    it "calls #to_int to convert the destination byte offset" do
      offset = mock("encoding primitive_convert destination byte offset")
      offset.should_receive(:to_int).and_return(2)
      @ec.primitive_convert("abc", result = "   ", offset).should == :finished
      result.should == "  abc"
    end

    it "raises an ArgumentError if the destination byte offset is greater than the bytesize of the destination buffer" do
      lambda { @ec.primitive_convert("","am", 0) }.should_not raise_error
      lambda { @ec.primitive_convert("","am", 1) }.should_not raise_error
      lambda { @ec.primitive_convert("","am", 2) }.should_not raise_error
      lambda { @ec.primitive_convert("","am", 3) }.should raise_error(ArgumentError)
    end

    it "uses the destination byte offset to determine where to write the result in the destination buffer" do
      dest = "aa"
      @ec.primitive_convert("b",dest, nil, 0)
      dest.should == "aa"

      @ec.primitive_convert("b",dest, nil, 1)
      dest.should == "aab"

      @ec.primitive_convert("b",dest, nil, 2)
      dest.should == "aabbb"
    end

    it "accepts nil for the destination bytesize" do
      lambda { @ec.primitive_convert("","", nil, nil) }.should_not raise_error
    end

    it "accepts an integer for the destination bytesize" do
      lambda { @ec.primitive_convert("","", nil, 0) }.should_not raise_error
    end

    it "allows a destination bytesize value greater than the bytesize of the source buffer" do
      lambda { @ec.primitive_convert("am","", nil, 3) }.should_not raise_error
    end

    it "allows a destination bytesize value less than the bytesize of the source buffer" do
      lambda { @ec.primitive_convert("am","", nil, 1) }.should_not raise_error
    end

    it "calls #to_int to convert the destination byte size" do
      size = mock("encoding primitive_convert destination byte size")
      size.should_receive(:to_int).and_return(2)
      @ec.primitive_convert("abc", result = "   ", 0, size).should == :destination_buffer_full
      result.should == "ab"
    end

    it "uses destination bytesize as the maximum bytesize of the destination buffer" do
      dest = ""
      @ec.primitive_convert("glark", dest, nil, 1)
      dest.bytesize.should == 1
    end

    it "allows a destination buffer of unlimited size if destination bytesize is nil" do
      source = "glark".force_encoding('utf-8')
      dest = ""
      @ec.primitive_convert("glark", dest, nil, nil)
      dest.bytesize.should == source.bytesize
    end

    it "accepts an options hash" do
      @ec.primitive_convert("","",nil,nil, {after_output: true}).should == :finished
    end

    it "sets the destination buffer's encoding to the destination encoding if the conversion suceeded" do
      dest = "".force_encoding('utf-8')
      dest.encoding.should == Encoding::UTF_8
      @ec.primitive_convert("\u{98}",dest).should == :finished
      dest.encoding.should == Encoding::ISO_8859_1
    end

    it "sets the destination buffer's encoding to the destination encoding if the conversion failed" do
      dest = "".force_encoding('utf-8')
      dest.encoding.should == Encoding::UTF_8
      @ec.primitive_convert("\u{9878}",dest).should == :undefined_conversion
      dest.encoding.should == Encoding::ISO_8859_1
    end

    it "removes the undefined part from the source buffer when returning :undefined_conversion" do
      dest = "".force_encoding('utf-8')
      s = "\u{9878}abcd"
      @ec.primitive_convert(s, dest).should == :undefined_conversion

      s.should == "abcd"
    end

    it "returns :incomplete_input when source buffer ends unexpectedly and :partial_input isn't specified" do
      ec = Encoding::Converter.new("EUC-JP", "ISO-8859-1")
      ec.primitive_convert("\xa4", "", nil, nil, partial_input: false).should == :incomplete_input
    end

    it "clears the source buffer when returning :incomplete_input" do
      ec = Encoding::Converter.new("EUC-JP", "ISO-8859-1")
      s = "\xa4"
      ec.primitive_convert(s, "").should == :incomplete_input

      s.should == ""
    end

    it "returns :source_buffer_empty when source buffer ends unexpectedly and :partial_input is true" do
      ec = Encoding::Converter.new("EUC-JP", "ISO-8859-1")
      ec.primitive_convert("\xa4", "", nil, nil, partial_input: true).should == :source_buffer_empty
    end

    it "clears the source buffer when returning :source_buffer_empty" do
      ec = Encoding::Converter.new("EUC-JP", "ISO-8859-1")
      s = "\xa4"
      ec.primitive_convert(s, "", nil, nil, partial_input: true).should == :source_buffer_empty

      s.should == ""
    end

    it "returns :undefined_conversion when a character in the source buffer is not representable in the output encoding" do
      @ec.primitive_convert("\u{9876}","").should == :undefined_conversion
    end

    it "returns :invalid_byte_sequence when an invalid byte sequence was found in the source buffer" do
      @ec.primitive_convert("\xf1abcd","").should == :invalid_byte_sequence
    end

    it "removes consumed and erroneous bytes from the source buffer when returning :invalid_byte_sequence" do
      ec = Encoding::Converter.new(Encoding::UTF_8, Encoding::UTF_8_MAC)
      s = "\xC3\xA1\x80\x80\xC3\xA1".force_encoding("utf-8")
      dest = "".force_encoding("utf-8")
      ec.primitive_convert(s, dest)

      s.should == "\x80\xC3\xA1".force_encoding("utf-8")
    end

    it "returns :finished when the conversion succeeded" do
      @ec.primitive_convert("glark".force_encoding('utf-8'),"").should == :finished
    end

    it "clears the source buffer when returning :finished" do
      s = "glark".force_encoding('utf-8')
      @ec.primitive_convert(s, "").should == :finished

      s.should == ""
    end

    it "returns :destination_buffer_full when the destination buffer is too small" do
      ec = Encoding::Converter.new("utf-8", "iso-2022-jp")
      source = "\u{9999}"
      destination_bytesize = source.bytesize - 1
      ec.primitive_convert(source, "", 0, destination_bytesize) \
        .should == :destination_buffer_full
      source.should == ""
    end

    it "clears the source buffer when returning :destination_buffer_full" do
      ec = Encoding::Converter.new("utf-8", "iso-2022-jp")
      s = "\u{9999}"
      destination_bytesize = s.bytesize - 1
      ec.primitive_convert(s, "", 0, destination_bytesize).should == :destination_buffer_full

      s.should == ""
    end

    it "keeps removing invalid bytes from the source buffer" do
      ec = Encoding::Converter.new(Encoding::UTF_8, Encoding::UTF_8_MAC)
      s = "\x80\x80\x80"
      dest = "".force_encoding(Encoding::UTF_8_MAC)

      ec.primitive_convert(s, dest)
      s.should == "\x80\x80"
      ec.primitive_convert(s, dest)
      s.should == "\x80"
      ec.primitive_convert(s, dest)
      s.should == ""
    end

    it "reuses read-again bytes after the first error" do
      s = "\xf1abcd"
      dest = ""

      @ec.primitive_convert(s, dest).should == :invalid_byte_sequence
      s.should == "bcd"
      @ec.primitive_errinfo[4].should == "a"

      @ec.primitive_convert(s, dest).should == :finished
      s.should == ""

      dest.should == "abcd"
    end
  end
end
