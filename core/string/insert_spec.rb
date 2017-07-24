# -*- encoding: utf-8 -*-

require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#insert with index, other" do
  it "inserts other before the character at the given index" do
    "abcd".insert(0, 'X').should == "Xabcd"
    "abcd".insert(3, 'X').should == "abcXd"
    "abcd".insert(4, 'X').should == "abcdX"
  end

  it "modifies self in place" do
    a = "abcd"
    a.insert(4, 'X').should == "abcdX"
    a.should == "abcdX"
  end

  it "inserts after the given character on an negative count" do
    "abcd".insert(-5, 'X').should == "Xabcd"
    "abcd".insert(-3, 'X').should == "abXcd"
    "abcd".insert(-1, 'X').should == "abcdX"
  end

  it "raises an IndexError if the index is beyond string" do
    lambda { "abcd".insert(5, 'X')  }.should raise_error(IndexError)
    lambda { "abcd".insert(-6, 'X') }.should raise_error(IndexError)
  end

  it "converts index to an integer using to_int" do
    other = mock('-3')
    other.should_receive(:to_int).and_return(-3)

    "abcd".insert(other, "XYZ").should == "abXYZcd"
  end

  it "converts other to a string using to_str" do
    other = mock('XYZ')
    other.should_receive(:to_str).and_return("XYZ")

    "abcd".insert(-3, other).should == "abXYZcd"
  end

  it "taints self if string to insert is tainted" do
    str = "abcd"
    str.insert(0, "T".taint).tainted?.should == true

    str = "abcd"
    other = mock('T')
    def other.to_str() "T".taint end
    str.insert(0, other).tainted?.should == true
  end

  it "raises a TypeError if other can't be converted to string" do
    lambda { "abcd".insert(-6, Object.new)}.should raise_error(TypeError)
    lambda { "abcd".insert(-6, [])        }.should raise_error(TypeError)
    lambda { "abcd".insert(-6, mock('x')) }.should raise_error(TypeError)
  end

  it "raises a RuntimeError if self is frozen" do
    str = "abcd".freeze
    lambda { str.insert(4, '')  }.should raise_error(RuntimeError)
    lambda { str.insert(4, 'X') }.should raise_error(RuntimeError)
  end

  with_feature :encoding do
    it "inserts a character into a multibyte encoded string" do
      "ありがとう".insert(1, 'ü').should == "あüりがとう"
    end

    it "returns a String in the compatible encoding" do
      str = "".force_encoding(Encoding::US_ASCII)
      str.insert(0, "ありがとう")
      str.encoding.should == Encoding::UTF_8
    end

    it "raises an Encoding::CompatibilityError if the encodings are incompatible" do
      pat = "ア".encode Encoding::EUC_JP
      lambda do
        "あれ".insert 0, pat
      end.should raise_error(Encoding::CompatibilityError)
    end
  end
end
