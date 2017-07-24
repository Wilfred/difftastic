# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "String#setbyte" do
  it "returns an Integer" do
    "a".setbyte(0,1).should be_kind_of(Integer)
  end

  it "modifies the receiver" do
    str = "glark"
    old_id = str.object_id
    str.setbyte(0,88)
    str.object_id.should == old_id
  end

  it "changes the byte at the given index to the new byte" do
    str = "a"
    str.setbyte(0,98)
    str.should == 'b'

    # copy-on-write case
    str1, str2 = "fooXbar".split("X")
    str2.setbyte(0, 50)
    str2.should == "2ar"
    str1.should == "foo"
  end

  it "allows changing bytes in multi-byte characters" do
    str = "\u{915}"
    str.setbyte(1,254)
    str.getbyte(1).should == 254
  end

  it "can invalidate a String's encoding" do
    str = "glark"
    str.valid_encoding?.should be_true
    str.setbyte(2,253)
    str.valid_encoding?.should be_false
  end

  it "regards a negative index as counting from the end of the String" do
    str = "hedgehog"
    str.setbyte(-3, 108)
    str.should == "hedgelog"

    # copy-on-write case
    str1, str2 = "fooXbar".split("X")
    str2.setbyte(-1, 50)
    str2.should == "ba2"
    str1.should == "foo"
  end

  it "raises an IndexError if the index is greater than the String bytesize" do
    lambda { "?".setbyte(1, 97) }.should raise_error(IndexError)
  end

  it "raises an IndexError if the nexgative index is greater magnitude than the String bytesize" do
    lambda { "???".setbyte(-5, 97) }.should raise_error(IndexError)
  end

  it "sets a byte at an index greater than String size" do
    chr = "\u{998}"
    chr.bytesize.should == 3
    chr.setbyte(2, 150)
    chr.should == "\xe0\xa6\x96"
  end

  it "does not modify the original string when using String.new" do
    str1 = "hedgehog"
    str2 = String.new(str1)
    str2.setbyte(0, 108)
    str2.should == "ledgehog"
    str2.should_not == "hedgehog"
    str1.should == "hedgehog"
    str1.should_not == "ledgehog"
  end

  it "raises a RuntimeError if self is frozen" do
    str = "cold".freeze
    str.frozen?.should be_true
    lambda { str.setbyte(3,96) }.should raise_error(RuntimeError)
  end

  it "raises a TypeError unless the second argument is an Integer" do
    lambda { "a".setbyte(0,'a') }.should raise_error(TypeError)
  end

  it "calls #to_int to convert the index" do
    index = mock("setbyte index")
    index.should_receive(:to_int).and_return(1)

    str = "hat"
    str.setbyte(index, "i".ord)
    str.should == "hit"
  end

  it "calls to_int to convert the value" do
    value = mock("setbyte value")
    value.should_receive(:to_int).and_return("i".ord)

    str = "hat"
    str.setbyte(1, value)
    str.should == "hit"
  end
end
