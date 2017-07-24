# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#chop" do
  it "removes the final character" do
    "abc".chop.should == "ab"
  end

  it "removes the final carriage return" do
    "abc\r".chop.should == "abc"
  end

  it "removes the final newline" do
    "abc\n".chop.should == "abc"
  end

  it "removes the final carriage return, newline" do
    "abc\r\n".chop.should == "abc"
  end

  it "removes the carrige return, newline if they are the only characters" do
    "\r\n".chop.should == ""
  end

  it "does not remove more than the final carriage return, newline" do
    "abc\r\n\r\n".chop.should == "abc\r\n"
  end

  with_feature :encoding do
    it "removes a multi-byte character" do
      "あれ".chop.should == "あ"
    end

    it "removes the final carriage return, newline from a multibyte String" do
      "あれ\r\n".chop.should == "あれ"
    end

    it "removes the final carriage return, newline from a non-ASCII String" do
      str = "abc\r\n".encode "utf-32be"
      str.chop.should == "abc".encode("utf-32be")
    end
  end

  it "returns an empty string when applied to an empty string" do
    "".chop.should == ""
  end

  it "returns a new string when applied to an empty string" do
    s = ""
    s.chop.should_not equal(s)
  end

  it "taints result when self is tainted" do
    "hello".taint.chop.tainted?.should == true
    "".taint.chop.tainted?.should == true
  end

  it "untrusts result when self is untrusted" do
    "hello".untrust.chop.untrusted?.should == true
    "".untrust.chop.untrusted?.should == true
  end

  it "returns subclass instances when called on a subclass" do
    StringSpecs::MyString.new("hello\n").chop.should be_an_instance_of(StringSpecs::MyString)
  end
end

describe "String#chop!" do
  it "removes the final character" do
    "abc".chop!.should == "ab"
  end

  it "removes the final carriage return" do
    "abc\r".chop!.should == "abc"
  end

  it "removes the final newline" do
    "abc\n".chop!.should == "abc"
  end

  it "removes the final carriage return, newline" do
    "abc\r\n".chop!.should == "abc"
  end

  it "removes the carrige return, newline if they are the only characters" do
    "\r\n".chop!.should == ""
  end

  it "does not remove more than the final carriage return, newline" do
    "abc\r\n\r\n".chop!.should == "abc\r\n"
  end

  with_feature :encoding do
    it "removes a multi-byte character" do
      "あれ".chop!.should == "あ"
    end

    it "removes the final carriage return, newline from a multibyte String" do
      "あれ\r\n".chop!.should == "あれ"
    end

    it "removes the final carriage return, newline from a non-ASCII String" do
      str = "abc\r\n".encode "utf-32be"
      str.chop!.should == "abc".encode("utf-32be")
    end
  end

  it "returns self if modifications were made" do
    str = "hello"
    str.chop!.should equal(str)
  end

  it "returns nil when called on an empty string" do
    "".chop!.should be_nil
  end

  it "raises a RuntimeError on a frozen instance that is modified" do
    lambda { "string\n\r".freeze.chop! }.should raise_error(RuntimeError)
  end

  # see [ruby-core:23666]
  it "raises a RuntimeError on a frozen instance that would not be modified" do
    a = ""
    a.freeze
    lambda { a.chop! }.should raise_error(RuntimeError)
  end
end
