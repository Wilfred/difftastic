# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "String#getbyte" do
  it "returns an Integer if given a valid index" do
    "a".getbyte(0).should be_kind_of(Integer)
  end

  it "starts indexing at 0" do
    "b".getbyte(0).should == 98

    # copy-on-write case
    _str1, str2 = "fooXbar".split("X")
    str2.getbyte(0).should == 98
  end

  it "counts from the end of the String if given a negative argument" do
    "glark".getbyte(-1).should == "glark".getbyte(4)

    # copy-on-write case
    _str1, str2 = "fooXbar".split("X")
    str2.getbyte(-1).should == 114
  end

  it "returns an Integer between 0 and 255" do
    "\x00".getbyte(0).should == 0
    [0xFF].pack('C').getbyte(0).should == 255
    256.chr('utf-8').getbyte(0).should == 196
    256.chr('utf-8').getbyte(1).should == 128
  end

  it "regards a multi-byte character as having multiple bytes" do
    chr = "\u{998}"
    chr.bytesize.should == 3
    chr.getbyte(0).should == 224
    chr.getbyte(1).should == 166
    chr.getbyte(2).should == 152
  end

  it "mirrors the output of #bytes" do
    xDE = [0xDE].pack('C').force_encoding('utf-8')
    str = "UTF-8 (\u{9865}} characters and hex escapes (#{xDE})"
    str.bytes.to_a.each_with_index do |byte, index|
      str.getbyte(index).should == byte
    end
  end

  it "interprets bytes relative to the String's encoding" do
    str = "\u{333}"
    str.encode('utf-8').getbyte(0).should_not == str.encode('utf-16le').getbyte(0)
  end

  it "returns nil for out-of-bound indexes" do
    "g".getbyte(1).should be_nil
  end

  it "regards the empty String as containing no bytes" do
    "".getbyte(0).should be_nil
  end

  it "raises an ArgumentError unless given one argument" do
    lambda { "glark".getbyte     }.should raise_error(ArgumentError)
    lambda { "food".getbyte(0,0) }.should raise_error(ArgumentError)
  end

  it "raises a TypeError unless its argument can be coerced into an Integer" do
    lambda { "a".getbyte('a') }.should raise_error(TypeError)
  end
end
