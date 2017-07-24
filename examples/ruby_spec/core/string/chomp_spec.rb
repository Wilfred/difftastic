# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#chomp" do
  describe "when passed no argument" do
    before do
      # Ensure that $/ is set to the default value
      @dollar_slash, $/ = $/, "\n"
    end

    after do
      $/ = @dollar_slash
    end

    it "does not modify a String with no trailing carriage return or newline" do
      "abc".chomp.should == "abc"
    end

    it "returns a copy of the String when it is not modified" do
      str = "abc"
      str.chomp.should_not equal(str)
    end

    it "removes one trailing newline" do
      "abc\n\n".chomp.should == "abc\n"
    end

    it "removes one trailing carriage return" do
      "abc\r\r".chomp.should == "abc\r"
    end

    it "removes one trailing carrige return, newline pair" do
      "abc\r\n\r\n".chomp.should == "abc\r\n"
    end

    it "returns an empty String when self is empty" do
      "".chomp.should == ""
    end

    it "taints the result if self is tainted" do
      "abc".taint.chomp.tainted?.should be_true
    end

    it "returns subclass instances when called on a subclass" do
      str = StringSpecs::MyString.new("hello\n").chomp
      str.should be_an_instance_of(StringSpecs::MyString)
    end

    it "removes trailing characters that match $/ when it has been assigned a value" do
      $/ = "cdef"
      "abcdef".chomp.should == "ab"
    end
  end

  describe "when passed nil" do
    it "does not modify the String" do
      "abc\r\n".chomp(nil).should == "abc\r\n"
    end

    it "returns a copy of the String" do
      str = "abc"
      str.chomp(nil).should_not equal(str)
    end

    it "taints the result if self is tainted" do
      "abc".taint.chomp(nil).tainted?.should be_true
    end

    it "returns an empty String when self is empty" do
      "".chomp(nil).should == ""
    end
  end

  describe "when passed ''" do
    it "removes a final newline" do
      "abc\n".chomp("").should == "abc"
    end

    it "removes a final carriage return, newline" do
      "abc\r\n".chomp("").should == "abc"
    end

    it "does not remove a final carriage return" do
      "abc\r".chomp("").should == "abc\r"
    end

    it "removes more than one trailing newlines" do
      "abc\n\n\n".chomp("").should == "abc"
    end

    it "removes more than one trailing carriage return, newline pairs" do
      "abc\r\n\r\n\r\n".chomp("").should == "abc"
    end

    it "taints the result if self is tainted" do
      "abc".taint.chomp("").tainted?.should be_true
    end

    it "returns an empty String when self is empty" do
      "".chomp("").should == ""
    end
  end

  describe "when passed '\\n'" do
    it "removes one trailing newline" do
      "abc\n\n".chomp("\n").should == "abc\n"
    end

    it "removes one trailing carriage return" do
      "abc\r\r".chomp("\n").should == "abc\r"
    end

    it "removes one trailing carrige return, newline pair" do
      "abc\r\n\r\n".chomp("\n").should == "abc\r\n"
    end

    it "taints the result if self is tainted" do
      "abc".taint.chomp("\n").tainted?.should be_true
    end

    it "returns an empty String when self is empty" do
      "".chomp("\n").should == ""
    end
  end

  describe "when passed an Object" do
    it "calls #to_str to convert to a String" do
      arg = mock("string chomp")
      arg.should_receive(:to_str).and_return("bc")
      "abc".chomp(arg).should == "a"
    end

    it "raises a TypeError if #to_str does not return a String" do
      arg = mock("string chomp")
      arg.should_receive(:to_str).and_return(1)
      lambda { "abc".chomp(arg) }.should raise_error(TypeError)
    end
  end

  describe "when passed a String" do
    it "removes the trailing characters if they match the argument" do
      "abcabc".chomp("abc").should == "abc"
    end

    it "does not modify the String if the argument does not match the trailing characters" do
      "abc".chomp("def").should == "abc"
    end

    it "returns an empty String when self is empty" do
      "".chomp("abc").should == ""
    end

    it "taints the result if self is tainted" do
      "abc".taint.chomp("abc").tainted?.should be_true
    end

    it "does not taint the result when the argument is tainted" do
      "abc".chomp("abc".taint).tainted?.should be_false
    end
  end
end

describe "String#chomp!" do
  describe "when passed no argument" do
    before do
      # Ensure that $/ is set to the default value
      @dollar_slash, $/ = $/, "\n"
    end

    after do
      $/ = @dollar_slash
    end

    it "modifies self" do
      str = "abc\n"
      str.chomp!.should equal(str)
    end

    it "returns nil if self is not modified" do
      "abc".chomp!.should be_nil
    end

    it "removes one trailing newline" do
      "abc\n\n".chomp!.should == "abc\n"
    end

    it "removes one trailing carriage return" do
      "abc\r\r".chomp!.should == "abc\r"
    end

    it "removes one trailing carrige return, newline pair" do
      "abc\r\n\r\n".chomp!.should == "abc\r\n"
    end

    it "returns nil when self is empty" do
      "".chomp!.should be_nil
    end

    it "taints the result if self is tainted" do
      "abc\n".taint.chomp!.tainted?.should be_true
    end

    it "returns subclass instances when called on a subclass" do
      str = StringSpecs::MyString.new("hello\n").chomp!
      str.should be_an_instance_of(StringSpecs::MyString)
    end

    it "removes trailing characters that match $/ when it has been assigned a value" do
      $/ = "cdef"
      "abcdef".chomp!.should == "ab"
    end
  end

  describe "when passed nil" do
    it "returns nil" do
      "abc\r\n".chomp!(nil).should be_nil
    end

    it "returns nil when self is empty" do
      "".chomp!(nil).should be_nil
    end
  end

  describe "when passed ''" do
    it "removes a final newline" do
      "abc\n".chomp!("").should == "abc"
    end

    it "removes a final carriage return, newline" do
      "abc\r\n".chomp!("").should == "abc"
    end

    it "does not remove a final carriage return" do
      "abc\r".chomp!("").should be_nil
    end

    it "removes more than one trailing newlines" do
      "abc\n\n\n".chomp!("").should == "abc"
    end

    it "removes more than one trailing carriage return, newline pairs" do
      "abc\r\n\r\n\r\n".chomp!("").should == "abc"
    end

    it "taints the result if self is tainted" do
      "abc\n".taint.chomp!("").tainted?.should be_true
    end

    it "returns nil when self is empty" do
      "".chomp!("").should be_nil
    end
  end

  describe "when passed '\\n'" do
    it "removes one trailing newline" do
      "abc\n\n".chomp!("\n").should == "abc\n"
    end

    it "removes one trailing carriage return" do
      "abc\r\r".chomp!("\n").should == "abc\r"
    end

    it "removes one trailing carrige return, newline pair" do
      "abc\r\n\r\n".chomp!("\n").should == "abc\r\n"
    end

    it "taints the result if self is tainted" do
      "abc\n".taint.chomp!("\n").tainted?.should be_true
    end

    it "returns nil when self is empty" do
      "".chomp!("\n").should be_nil
    end
  end

  describe "when passed an Object" do
    it "calls #to_str to convert to a String" do
      arg = mock("string chomp")
      arg.should_receive(:to_str).and_return("bc")
      "abc".chomp!(arg).should == "a"
    end

    it "raises a TypeError if #to_str does not return a String" do
      arg = mock("string chomp")
      arg.should_receive(:to_str).and_return(1)
      lambda { "abc".chomp!(arg) }.should raise_error(TypeError)
    end
  end

  describe "when passed a String" do
    it "removes the trailing characters if they match the argument" do
      "abcabc".chomp!("abc").should == "abc"
    end

    it "returns nil if the argument does not match the trailing characters" do
      "abc".chomp!("def").should be_nil
    end

    it "returns nil when self is empty" do
      "".chomp!("abc").should be_nil
    end

    it "taints the result if self is tainted" do
      "abc".taint.chomp!("abc").tainted?.should be_true
    end

    it "does not taint the result when the argument is tainted" do
      "abc".chomp!("abc".taint).tainted?.should be_false
    end
  end

  it "raises a RuntimeError on a frozen instance when it is modified" do
    a = "string\n\r"
    a.freeze

    lambda { a.chomp! }.should raise_error(RuntimeError)
  end

  # see [ruby-core:23666]
  it "raises a RuntimeError on a frozen instance when it would not be modified" do
    a = "string\n\r"
    a.freeze
    lambda { a.chomp!(nil) }.should raise_error(RuntimeError)
    lambda { a.chomp!("x") }.should raise_error(RuntimeError)
  end
end

with_feature :encoding do
  describe "String#chomp" do
    before :each do
      @before_separator = $/
    end

    after :each do
      $/ = @before_separator
    end

    it "does not modify a multi-byte character" do
      "あれ".chomp.should == "あれ"
    end

    it "removes the final carriage return, newline from a multibyte String" do
      "あれ\r\n".chomp.should == "あれ"
    end

    it "removes the final carriage return, newline from a non-ASCII String" do
      str = "abc\r\n".encode "utf-32be"
      str.chomp.should == "abc".encode("utf-32be")
    end

    it "removes the final carriage return, newline from a non-ASCII String when the record separator is changed" do
      $/ = "\n".encode("utf-8")
      str = "abc\r\n".encode "utf-32be"
      str.chomp.should == "abc".encode("utf-32be")
    end
  end

  describe "String#chomp!" do
    before :each do
      @before_separator = $/
    end

    after :each do
      $/ = @before_separator
    end

    it "returns nil when the String is not modified" do
      "あれ".chomp!.should be_nil
    end

    it "removes the final carriage return, newline from a multibyte String" do
      "あれ\r\n".chomp!.should == "あれ"
    end

    it "removes the final carriage return, newline from a non-ASCII String" do
      str = "abc\r\n".encode "utf-32be"
      str.chomp!.should == "abc".encode("utf-32be")
    end

    it "removes the final carriage return, newline from a non-ASCII String when the record separator is changed" do
      $/ = "\n".encode("utf-8")
      str = "abc\r\n".encode "utf-32be"
      str.chomp!.should == "abc".encode("utf-32be")
    end
  end
end
