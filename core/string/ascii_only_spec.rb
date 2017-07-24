# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

with_feature :encoding do
  describe "String#ascii_only?" do
    describe "with ASCII only characters" do
      it "returns true if the encoding is UTF-8" do
        [ ["hello",                         true],
          ["hello".encode('UTF-8'),         true],
          ["hello".force_encoding('UTF-8'), true],
        ].should be_computed_by(:ascii_only?)
      end

      it "returns true if the encoding is US-ASCII" do
        "hello".force_encoding(Encoding::US_ASCII).ascii_only?.should be_true
        "hello".encode(Encoding::US_ASCII).ascii_only?.should be_true
      end

      it "returns true for all single-character UTF-8 Strings" do
        0.upto(127) do |n|
          n.chr.ascii_only?.should be_true
        end
      end
    end

    describe "with non-ASCII only characters" do
      it "returns false if the encoding is ASCII-8BIT" do
        chr = 128.chr
        chr.encoding.should == Encoding::ASCII_8BIT
        chr.ascii_only?.should be_false
      end

      it "returns false if the String contains any non-ASCII characters" do
        [ ["\u{6666}",                          false],
          ["hello, \u{6666}",                   false],
          ["\u{6666}".encode('UTF-8'),          false],
          ["\u{6666}".force_encoding('UTF-8'),  false],
        ].should be_computed_by(:ascii_only?)
      end

      it "returns false if the encoding is US-ASCII" do
        [ ["\u{6666}".force_encoding(Encoding::US_ASCII),         false],
          ["hello, \u{6666}".force_encoding(Encoding::US_ASCII),  false],
        ].should be_computed_by(:ascii_only?)
      end
    end

    it "returns true for the empty String with an ASCII-compatible encoding" do
      "".ascii_only?.should be_true
      "".encode('UTF-8').ascii_only?.should be_true
    end

    it "returns false for the empty String with a non-ASCII-compatible encoding" do
      "".force_encoding('UTF-16LE').ascii_only?.should be_false
      "".encode('UTF-16BE').ascii_only?.should be_false
    end

    it "returns false for a non-empty String with non-ASCII-compatible encoding" do
      "\x78\x00".force_encoding("UTF-16LE").ascii_only?.should be_false
    end

    it "returns false when interpolating non ascii strings" do
      base = "EU currency is"
      base.force_encoding(Encoding::US_ASCII)
      euro = "\u20AC"
      interp = "#{base} #{euro}"
      euro.ascii_only?.should be_false
      base.ascii_only?.should be_true
      interp.ascii_only?.should be_false
    end

    it "returns false after appending non ASCII characters to an empty String" do
      ("" << "λ").ascii_only?.should be_false
    end

    it "returns false when concatenating an ASCII and non-ASCII String" do
      "".concat("λ").ascii_only?.should be_false
    end

    it "returns false when replacing an ASCII String with a non-ASCII String" do
      "".replace("λ").ascii_only?.should be_false
    end
  end
end
