# -*- encoding: us-ascii -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/iso-8859-9-encoding', __FILE__)

with_feature :encoding do
  describe "String#encoding" do
    it "returns an Encoding object" do
      String.new.encoding.should be_an_instance_of(Encoding)
    end

    it "is equal to the source encoding by default" do
      s = StringSpecs::ISO88599Encoding.new
      s.cedilla.encoding.should == s.source_encoding
    end

    it "returns the given encoding if #force_encoding has been called" do
      "a".force_encoding(Encoding::SHIFT_JIS).encoding.should == Encoding::SHIFT_JIS
    end

    it "returns the given encoding if #encode!has been called" do
      "a".encode!(Encoding::SHIFT_JIS).encoding.should == Encoding::SHIFT_JIS
    end
  end

  describe "String#encoding for US-ASCII Strings" do
    it "returns US-ASCII if self is US-ASCII" do
      "a".encoding.should == Encoding::US_ASCII
    end

    it "returns US-ASCII if self is US-ASCII only, despite the default internal encoding being different" do
      default_internal = Encoding.default_internal
      Encoding.default_internal = Encoding::UTF_8
      "a".encoding.should == Encoding::US_ASCII
      Encoding.default_internal = default_internal
    end

    it "returns US-ASCII if self is US-ASCII only, despite the default external encoding being different" do
      default_external = Encoding.default_external
      Encoding.default_external = Encoding::UTF_8
      "a".encoding.should == Encoding::US_ASCII
      Encoding.default_external = default_external
    end

    it "returns US-ASCII if self is US-ASCII only, despite the default internal and external encodings being different" do
      default_internal = Encoding.default_internal
      default_external = Encoding.default_external
      Encoding.default_internal = Encoding::UTF_8
      Encoding.default_external = Encoding::UTF_8
      "a".encoding.should == Encoding::US_ASCII
      Encoding.default_external = default_external
      Encoding.default_internal = default_internal
    end

    it "returns US-ASCII if self is US-ASCII only, despite the default encodings being different" do
      default_internal = Encoding.default_internal
      default_external = Encoding.default_external
      Encoding.default_internal = Encoding::UTF_8
      Encoding.default_external = Encoding::UTF_8
      "a".encoding.should == Encoding::US_ASCII
      Encoding.default_external = default_external
      Encoding.default_internal = default_internal
    end

  end

  describe "String#encoding for Strings with \\u escapes" do
    it "returns UTF-8" do
      "\u{4040}".encoding.should == Encoding::UTF_8
    end

    it "returns US-ASCII if self is US-ASCII only" do
      s = "\u{40}"
      s.ascii_only?.should be_true
      s.encoding.should == Encoding::US_ASCII
    end

    it "returns UTF-8 if self isn't US-ASCII only" do
      s = "\u{4076}\u{619}"
      s.ascii_only?.should be_false
      s.encoding.should == Encoding::UTF_8
    end

    it "is not affected by the default internal encoding" do
      default_internal = Encoding.default_internal
      Encoding.default_internal = Encoding::ISO_8859_15
      "\u{5050}".encoding.should == Encoding::UTF_8
      "\u{50}".encoding.should == Encoding::US_ASCII
      Encoding.default_internal = default_internal
    end

    it "is not affected by the default external encoding" do
      default_external = Encoding.default_external
      Encoding.default_external = Encoding::SHIFT_JIS
      "\u{50}".encoding.should == Encoding::US_ASCII
      "\u{5050}".encoding.should == Encoding::UTF_8
      Encoding.default_external = default_external
    end

    it "is not affected by both the default internal and external encoding being set at the same time" do
      default_internal = Encoding.default_internal
      default_external = Encoding.default_external
      Encoding.default_internal = Encoding::EUC_JP
      Encoding.default_external = Encoding::SHIFT_JIS
      "\u{50}".encoding.should == Encoding::US_ASCII
      "\u{507}".encoding.should == Encoding::UTF_8
      Encoding.default_external = default_external
      Encoding.default_internal = default_internal
    end

    it "returns the given encoding if #force_encoding has been called" do
      "\u{20}".force_encoding(Encoding::SHIFT_JIS).encoding.should == Encoding::SHIFT_JIS
      "\u{2020}".force_encoding(Encoding::SHIFT_JIS).encoding.should == Encoding::SHIFT_JIS
    end

    it "returns the given encoding if #encode!has been called" do
      "\u{20}".encode!(Encoding::SHIFT_JIS).encoding.should == Encoding::SHIFT_JIS
      "\u{2020}".encode!(Encoding::SHIFT_JIS).encoding.should == Encoding::SHIFT_JIS
    end
  end

  describe "String#encoding for Strings with \\x escapes" do

    it "returns US-ASCII if self is US-ASCII only" do
      s = "\x61"
      s.ascii_only?.should be_true
      s.encoding.should == Encoding::US_ASCII
    end

    it "returns ASCII-8BIT when an escape creates a byte with the 8th bit set if the source encoding is US-ASCII" do
      __ENCODING__.should == Encoding::US_ASCII
      str = " "
      str.encoding.should == Encoding::US_ASCII
      str += [0xDF].pack('C')
      str.ascii_only?.should be_false
      str.encoding.should == Encoding::ASCII_8BIT
    end

    # TODO: Deal with case when the byte in question isn't valid in the source
    # encoding?
    it "returns the source encoding when an escape creates a byte with the 8th bit set if the source encoding isn't US-ASCII" do
      fixture  = StringSpecs::ISO88599Encoding.new
      fixture.source_encoding.should == Encoding::ISO8859_9
      fixture.x_escape.ascii_only?.should be_false
      fixture.x_escape.encoding.should == Encoding::ISO8859_9
    end

    it "is not affected by the default internal encoding" do
      default_internal = Encoding.default_internal
      Encoding.default_internal = Encoding::ISO_8859_15
      "\x50".encoding.should == Encoding::US_ASCII
      "\x50".encoding.should == Encoding::US_ASCII
      Encoding.default_internal = default_internal
    end

    it "is not affected by the default external encoding" do
      default_external = Encoding.default_external
      Encoding.default_external = Encoding::SHIFT_JIS
      "\x50".encoding.should == Encoding::US_ASCII
      [0xD4].pack('C').encoding.should == Encoding::ASCII_8BIT
      Encoding.default_external = default_external
    end

    it "is not affected by both the default internal and external encoding being set at the same time" do
      default_internal = Encoding.default_internal
      default_external = Encoding.default_external
      Encoding.default_internal = Encoding::EUC_JP
      Encoding.default_external = Encoding::SHIFT_JIS
      x50 = "\x50"
      x50.encoding.should == Encoding::US_ASCII
      [0xD4].pack('C').encoding.should == Encoding::ASCII_8BIT
      Encoding.default_external = default_external
      Encoding.default_internal = default_internal
    end

    it "returns the given encoding if #force_encoding has been called" do
      x50 = "\x50"
      x50.force_encoding(Encoding::SHIFT_JIS).encoding.should == Encoding::SHIFT_JIS
      xD4 = [212].pack('C')
      xD4.force_encoding(Encoding::ISO_8859_9).encoding.should == Encoding::ISO_8859_9
    end

    it "returns the given encoding if #encode!has been called" do
      x50 = "\x50"
      x50.encode!(Encoding::SHIFT_JIS).encoding.should == Encoding::SHIFT_JIS
      x00 = "x\00"
      x00.encode!(Encoding::UTF_8).encoding.should == Encoding::UTF_8
    end
  end
end
