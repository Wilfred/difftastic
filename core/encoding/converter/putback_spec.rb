# -*- encoding: binary -*-
require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter#putback" do
    before :each do
      @ec = Encoding::Converter.new("EUC-JP", "ISO-8859-1")
      @ret = @ec.primitive_convert(@src="abc\xa1def", @dst="", nil, 10)
    end

    it "returns a String" do
      @ec.putback.should be_an_instance_of(String)
    end

    it "returns a String in the source encoding" do
      @ec.putback.encoding.should == Encoding::EUC_JP
    end

    it "returns the bytes buffered due to an :invalid_byte_sequence error" do
      @ret.should == :invalid_byte_sequence
      @ec.putback.should == 'd'
      @ec.primitive_errinfo.last.should == 'd'
    end

    it "allows conversion to be resumed after an :invalid_byte_sequence" do
      @src = @ec.putback + @src
      @ret = @ec.primitive_convert(@src, @dst, nil, 10)
      @ret.should == :finished
      @dst.should == "abcdef"
      @src.should == ""
    end

    it "returns an empty String when there are no more bytes to put back" do
      @ec.putback
      @ec.putback.should == ""
    end

    it "accepts an integer argument corresponding to the number of bytes to be put back" do
      ec = Encoding::Converter.new("utf-16le", "iso-8859-1")
      src = "\x00\xd8\x61\x00"
      dst = ""
      ec.primitive_convert(src, dst).should == :invalid_byte_sequence
      ec.primitive_errinfo.should ==
        [:invalid_byte_sequence, "UTF-16LE", "UTF-8", "\x00\xD8", "a\x00"]
      ec.putback(1).should == "\x00".force_encoding("utf-16le")
      ec.putback.should == "a".force_encoding("utf-16le")
      ec.putback.should == ""
    end
  end
end
