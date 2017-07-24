# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#tr" do
  it "returns a new string with the characters from from_string replaced by the ones in to_string" do
    "hello".tr('aeiou', '*').should == "h*ll*"
    "hello".tr('el', 'ip').should == "hippo"
    "Lisp".tr("Lisp", "Ruby").should == "Ruby"
  end

  it "accepts c1-c2 notation to denote ranges of characters" do
    "hello".tr('a-y', 'b-z').should == "ifmmp"
    "123456789".tr("2-5","abcdefg").should == "1abcd6789"
    "hello ^-^".tr("e-", "__").should == "h_llo ^_^"
    "hello ^-^".tr("---", "_").should == "hello ^_^"
  end

  it "pads to_str with its last char if it is shorter than from_string" do
    "this".tr("this", "x").should == "xxxx"
    "hello".tr("a-z", "A-H.").should == "HE..."
  end

  it "raises an ArgumentError a descending range in the replacement as containing just the start character" do
    lambda { "hello".tr("a-y", "z-b") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError a descending range in the source as empty" do
    lambda { "hello".tr("l-a", "z") }.should raise_error(ArgumentError)
  end

  it "translates chars not in from_string when it starts with a ^" do
    "hello".tr('^aeiou', '*').should == "*e**o"
    "123456789".tr("^345", "abc").should == "cc345cccc"
    "abcdefghijk".tr("^d-g", "9131").should == "111defg1111"

    "hello ^_^".tr("a-e^e", ".").should == "h.llo ._."
    "hello ^_^".tr("^^", ".").should == "......^.^"
    "hello ^_^".tr("^", "x").should == "hello x_x"
    "hello ^-^".tr("^-^", "x").should == "xxxxxx^-^"
    "hello ^-^".tr("^^-^", "x").should == "xxxxxx^x^"
    "hello ^-^".tr("^---", "x").should == "xxxxxxx-x"
    "hello ^-^".tr("^---l-o", "x").should == "xxlloxx-x"
  end

  it "supports non-injective replacements" do
    "hello".tr("helo", "1212").should == "12112"
  end

  it "tries to convert from_str and to_str to strings using to_str" do
    from_str = mock('ab')
    from_str.should_receive(:to_str).and_return("ab")

    to_str = mock('AB')
    to_str.should_receive(:to_str).and_return("AB")

    "bla".tr(from_str, to_str).should == "BlA"
  end

  it "returns subclass instances when called on a subclass" do
    StringSpecs::MyString.new("hello").tr("e", "a").should be_an_instance_of(StringSpecs::MyString)
  end

  it "taints the result when self is tainted" do
    ["h", "hello"].each do |str|
      tainted_str = str.dup.taint

      tainted_str.tr("e", "a").tainted?.should == true

      str.tr("e".taint, "a").tainted?.should == false
      str.tr("e", "a".taint).tainted?.should == false
    end
  end

  with_feature :encoding do
    # http://redmine.ruby-lang.org/issues/show/1839
    it "can replace a 7-bit ASCII character with a multibyte one" do
      a = "uber"
      a.encoding.should == Encoding::UTF_8
      b = a.tr("u","ü")
      b.should == "über"
      b.encoding.should == Encoding::UTF_8
    end

    it "can replace a multibyte character with a single byte one" do
      a = "über"
      a.encoding.should == Encoding::UTF_8
      b = a.tr("ü","u")
      b.should == "uber"
      b.encoding.should == Encoding::UTF_8
    end

    it "does not replace a multibyte character where part of the bytes match the tr string" do
      str = "椎名深夏"
      a = "\u0080\u0082\u0083\u0084\u0085\u0086\u0087\u0088\u0089\u008A\u008B\u008C\u008E\u0091\u0092\u0093\u0094\u0095\u0096\u0097\u0098\u0099\u009A\u009B\u009C\u009E\u009F"
      b = "€‚ƒ„…†‡ˆ‰Š‹ŒŽ‘’“”•–—˜™š›œžŸ"
      str.tr(a, b).should == "椎名深夏"
    end

  end
end

describe "String#tr!" do
  it "modifies self in place" do
    s = "abcdefghijklmnopqR"
    s.tr!("cdefg", "12").should == "ab12222hijklmnopqR"
    s.should == "ab12222hijklmnopqR"
  end

  it "returns nil if no modification was made" do
    s = "hello"
    s.tr!("za", "yb").should == nil
    s.tr!("", "").should == nil
    s.should == "hello"
  end

  it "does not modify self if from_str is empty" do
    s = "hello"
    s.tr!("", "").should == nil
    s.should == "hello"
    s.tr!("", "yb").should == nil
    s.should == "hello"
  end

  it "raises a RuntimeError if self is frozen" do
    s = "abcdefghijklmnopqR".freeze
    lambda { s.tr!("cdefg", "12") }.should raise_error(RuntimeError)
    lambda { s.tr!("R", "S")      }.should raise_error(RuntimeError)
    lambda { s.tr!("", "")        }.should raise_error(RuntimeError)
  end
end
