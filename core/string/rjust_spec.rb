# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#rjust with length, padding" do
  it "returns a new string of specified length with self right justified and padded with padstr" do
    "hello".rjust(20, '1234').should == "123412341234123hello"

    "".rjust(1, "abcd").should == "a"
    "".rjust(2, "abcd").should == "ab"
    "".rjust(3, "abcd").should == "abc"
    "".rjust(4, "abcd").should == "abcd"
    "".rjust(6, "abcd").should == "abcdab"

    "OK".rjust(3, "abcd").should == "aOK"
    "OK".rjust(4, "abcd").should == "abOK"
    "OK".rjust(6, "abcd").should == "abcdOK"
    "OK".rjust(8, "abcd").should == "abcdabOK"
  end

  it "pads with whitespace if no padstr is given" do
    "hello".rjust(20).should == "               hello"
  end

  it "returns self if it's longer than or as long as the specified length" do
    "".rjust(0).should == ""
    "".rjust(-1).should == ""
    "hello".rjust(4).should == "hello"
    "hello".rjust(-1).should == "hello"
    "this".rjust(3).should == "this"
    "radiology".rjust(8, '-').should == "radiology"
  end

  it "taints result when self or padstr is tainted" do
    "x".taint.rjust(4).tainted?.should == true
    "x".taint.rjust(0).tainted?.should == true
    "".taint.rjust(0).tainted?.should == true
    "x".taint.rjust(4, "*").tainted?.should == true
    "x".rjust(4, "*".taint).tainted?.should == true
  end

  it "tries to convert length to an integer using to_int" do
    "^".rjust(3.8, "^_").should == "^_^"

    obj = mock('3')
    obj.should_receive(:to_int).and_return(3)

    "o".rjust(obj, "o_").should == "o_o"
  end

  it "raises a TypeError when length can't be converted to an integer" do
    lambda { "hello".rjust("x")       }.should raise_error(TypeError)
    lambda { "hello".rjust("x", "y")  }.should raise_error(TypeError)
    lambda { "hello".rjust([])        }.should raise_error(TypeError)
    lambda { "hello".rjust(mock('x')) }.should raise_error(TypeError)
  end

  it "tries to convert padstr to a string using to_str" do
    padstr = mock('123')
    padstr.should_receive(:to_str).and_return("123")

    "hello".rjust(10, padstr).should == "12312hello"
  end

  it "raises a TypeError when padstr can't be converted" do
    lambda { "hello".rjust(20, [])        }.should raise_error(TypeError)
    lambda { "hello".rjust(20, Object.new)}.should raise_error(TypeError)
    lambda { "hello".rjust(20, mock('x')) }.should raise_error(TypeError)
  end

  it "raises an ArgumentError when padstr is empty" do
    lambda { "hello".rjust(10, '') }.should raise_error(ArgumentError)
  end

  it "returns subclass instances when called on subclasses" do
    StringSpecs::MyString.new("").rjust(10).should be_an_instance_of(StringSpecs::MyString)
    StringSpecs::MyString.new("foo").rjust(10).should be_an_instance_of(StringSpecs::MyString)
    StringSpecs::MyString.new("foo").rjust(10, StringSpecs::MyString.new("x")).should be_an_instance_of(StringSpecs::MyString)

    "".rjust(10, StringSpecs::MyString.new("x")).should be_an_instance_of(String)
    "foo".rjust(10, StringSpecs::MyString.new("x")).should be_an_instance_of(String)
  end

  it "when padding is tainted and self is untainted returns a tainted string if and only if length is longer than self" do
    "hello".rjust(4, 'X'.taint).tainted?.should be_false
    "hello".rjust(5, 'X'.taint).tainted?.should be_false
    "hello".rjust(6, 'X'.taint).tainted?.should be_true
  end

  with_feature :encoding do
    describe "with width" do
      it "returns a String in the same encoding as the original" do
        str = "abc".force_encoding Encoding::IBM437
        result = str.rjust 5
        result.should == "  abc"
        result.encoding.should equal(Encoding::IBM437)
      end
    end

    describe "with width, pattern" do
      it "returns a String in the compatible encoding" do
        str = "abc".force_encoding Encoding::IBM437
        result = str.rjust 5, "あ"
        result.should == "ああabc"
        result.encoding.should equal(Encoding::UTF_8)
      end

      it "raises an Encoding::CompatibilityError if the encodings are incompatible" do
        pat = "ア".encode Encoding::EUC_JP
        lambda do
          "あれ".rjust 5, pat
        end.should raise_error(Encoding::CompatibilityError)
      end
    end
  end
end
