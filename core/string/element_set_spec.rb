# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

# TODO: Add missing String#[]= specs:
#   String#[re, idx] = obj

describe "String#[]= with Fixnum index" do
  it "replaces the char at idx with other_str" do
    a = "hello"
    a[0] = "bam"
    a.should == "bamello"
    a[-2] = ""
    a.should == "bamelo"
  end

  it "taints self if other_str is tainted" do
    a = "hello"
    a[0] = "".taint
    a.tainted?.should == true

    a = "hello"
    a[0] = "x".taint
    a.tainted?.should == true
  end

  it "raises an IndexError without changing self if idx is outside of self" do
    str = "hello"

    lambda { str[20] = "bam" }.should raise_error(IndexError)
    str.should == "hello"

    lambda { str[-20] = "bam" }.should raise_error(IndexError)
    str.should == "hello"

    lambda { ""[-1] = "bam" }.should raise_error(IndexError)
  end

  # Behaviour verfieid correct by matz in
  # http://redmine.ruby-lang.org/issues/show/1750
  it "allows assignment to the zero'th element of an empty String" do
    str = ""
    str[0] = "bam"
    str.should == "bam"
  end

  it "raises IndexError if the string index doesn't match a position in the string" do
    str = "hello"
    lambda { str['y'] = "bam" }.should raise_error(IndexError)
    str.should == "hello"
  end

  it "raises a RuntimeError when self is frozen" do
    a = "hello"
    a.freeze

    lambda { a[0] = "bam" }.should raise_error(RuntimeError)
  end

  it "calls to_int on index" do
    str = "hello"
    str[0.5] = "hi "
    str.should == "hi ello"

    obj = mock('-1')
    obj.should_receive(:to_int).and_return(-1)
    str[obj] = "!"
    str.should == "hi ell!"
  end

  it "calls #to_str to convert other to a String" do
    other_str = mock('-test-')
    other_str.should_receive(:to_str).and_return("-test-")

    a = "abc"
    a[1] = other_str
    a.should == "a-test-c"
  end

  it "raises a TypeError if other_str can't be converted to a String" do
    lambda { "test"[1] = []        }.should raise_error(TypeError)
    lambda { "test"[1] = mock('x') }.should raise_error(TypeError)
    lambda { "test"[1] = nil       }.should raise_error(TypeError)
  end

  with_feature :encoding do
    it "raises a TypeError if passed a Fixnum replacement" do
      lambda { "abc"[1] = 65 }.should raise_error(TypeError)
    end

    it "raises an IndexError if the index is greater than character size" do
      lambda { "あれ"[4] = "a" }.should raise_error(IndexError)
    end

    it "calls #to_int to convert the index" do
      index = mock("string element set")
      index.should_receive(:to_int).and_return(1)

      str = "あれ"
      str[index] = "a"
      str.should == "あa"
    end

    it "raises a TypeError if #to_int does not return an Fixnum" do
      index = mock("string element set")
      index.should_receive(:to_int).and_return('1')

      lambda { "abc"[index] = "d" }.should raise_error(TypeError)
    end

    it "raises an IndexError if #to_int returns a value out of range" do
      index = mock("string element set")
      index.should_receive(:to_int).and_return(4)

      lambda { "ab"[index] = "c" }.should raise_error(IndexError)
    end

    it "replaces a character with a multibyte character" do
      str = "ありがとu"
      str[4] = "う"
      str.should == "ありがとう"
    end

    it "replaces a multibyte character with a character" do
      str = "ありがとう"
      str[4] = "u"
      str.should == "ありがとu"
    end

    it "replaces a multibyte character with a multibyte character" do
      str = "ありがとお"
      str[4] = "う"
      str.should == "ありがとう"
    end

    it "encodes the String in an encoding compatible with the replacement" do
      str = " ".force_encoding Encoding::US_ASCII
      rep = [160].pack('C').force_encoding Encoding::ASCII_8BIT
      str[0] = rep
      str.encoding.should equal(Encoding::ASCII_8BIT)
    end

    it "raises an Encoding::CompatibilityError if the replacement encoding is incompatible" do
      str = "あれ"
      rep = "が".encode Encoding::EUC_JP
      lambda { str[0] = rep }.should raise_error(Encoding::CompatibilityError)
    end
  end
end

describe "String#[]= with String index" do
  it "replaces fewer characters with more characters" do
    str = "abcde"
    str["cd"] = "ghi"
    str.should == "abghie"
  end

  it "replaces more characters with fewer characters" do
    str = "abcde"
    str["bcd"] = "f"
    str.should == "afe"
  end

  it "replaces characters with no characters" do
    str = "abcde"
    str["cd"] = ""
    str.should == "abe"
  end

  it "raises an IndexError if the search String is not found" do
    str = "abcde"
    lambda { str["g"] = "h" }.should raise_error(IndexError)
  end

  with_feature :encoding do
    it "replaces characters with a multibyte character" do
      str = "ありgaとう"
      str["ga"] = "が"
      str.should == "ありがとう"
    end

    it "replaces multibyte characters with characters" do
      str = "ありがとう"
      str["が"] = "ga"
      str.should == "ありgaとう"
    end

    it "replaces multibyte characters with multibyte characters" do
      str = "ありがとう"
      str["が"] = "か"
      str.should == "ありかとう"
    end

    it "encodes the String in an encoding compatible with the replacement" do
      str = " ".force_encoding Encoding::US_ASCII
      rep = [160].pack('C').force_encoding Encoding::ASCII_8BIT
      str[" "] = rep
      str.encoding.should equal(Encoding::ASCII_8BIT)
    end

    it "raises an Encoding::CompatibilityError if the replacement encoding is incompatible" do
      str = "あれ"
      rep = "が".encode Encoding::EUC_JP
      lambda { str["れ"] = rep }.should raise_error(Encoding::CompatibilityError)
    end
  end
end

describe "String#[]= with a Regexp index" do
  it "replaces the matched text with the rhs" do
    str = "hello"
    str[/lo/] = "x"
    str.should == "helx"
  end

  it "raises IndexError if the regexp index doesn't match a position in the string" do
    str = "hello"
    lambda { str[/y/] = "bam" }.should raise_error(IndexError)
    str.should == "hello"
  end

  it "calls #to_str to convert the replacement" do
    rep = mock("string element set regexp")
    rep.should_receive(:to_str).and_return("b")

    str = "abc"
    str[/ab/] = rep
    str.should == "bc"
  end

  it "checks the match before calling #to_str to convert the replacement" do
    rep = mock("string element set regexp")
    rep.should_not_receive(:to_str)

    lambda { "abc"[/def/] = rep }.should raise_error(IndexError)
  end

  describe "with 3 arguments" do
    it "calls #to_int to convert the second object" do
      ref = mock("string element set regexp ref")
      ref.should_receive(:to_int).and_return(1)

      str = "abc"
      str[/a(b)/, ref] = "x"
      str.should == "axc"
    end

    it "raises a TypeError if #to_int does not return a Fixnum" do
      ref = mock("string element set regexp ref")
      ref.should_receive(:to_int).and_return(nil)

      lambda { "abc"[/a(b)/, ref] = "x" }.should raise_error(TypeError)
    end

    it "uses the 2nd of 3 arguments as which capture should be replaced" do
      str = "aaa bbb ccc"
      str[/a (bbb) c/, 1] = "ddd"
      str.should == "aaa ddd ccc"
    end

    it "allows the specified capture to be negative and count from the end" do
      str = "abcd"
      str[/(a)(b)(c)(d)/, -2] = "e"
      str.should == "abed"
    end

    it "checks the match index before calling #to_str to convert the replacement" do
      rep = mock("string element set regexp")
      rep.should_not_receive(:to_str)

      lambda { "abc"[/a(b)/, 2] = rep }.should raise_error(IndexError)
    end

    it "raises IndexError if the specified capture isn't available" do
      str = "aaa bbb ccc"
      lambda { str[/a (bbb) c/,  2] = "ddd" }.should raise_error(IndexError)
      lambda { str[/a (bbb) c/, -2] = "ddd" }.should raise_error(IndexError)
    end

    describe "when the optional capture does not match" do
      it "raises an IndexError before setting the replacement" do
        str1 = "a b c"
        str2 = str1.dup
        lambda { str2[/a (b) (Z)?/,  2] = "d" }.should raise_error(IndexError)
        str2.should == str1
      end
    end
  end

  with_feature :encoding do
    it "replaces characters with a multibyte character" do
      str = "ありgaとう"
      str[/ga/] = "が"
      str.should == "ありがとう"
    end

    it "replaces multibyte characters with characters" do
      str = "ありがとう"
      str[/が/] = "ga"
      str.should == "ありgaとう"
    end

    it "replaces multibyte characters with multibyte characters" do
      str = "ありがとう"
      str[/が/] = "か"
      str.should == "ありかとう"
    end

    it "encodes the String in an encoding compatible with the replacement" do
      str = " ".force_encoding Encoding::US_ASCII
      rep = [160].pack('C').force_encoding Encoding::ASCII_8BIT
      str[/ /] = rep
      str.encoding.should equal(Encoding::ASCII_8BIT)
    end

    it "raises an Encoding::CompatibilityError if the replacement encoding is incompatible" do
      str = "あれ"
      rep = "が".encode Encoding::EUC_JP
      lambda { str[/れ/] = rep }.should raise_error(Encoding::CompatibilityError)
    end
  end
end

describe "String#[]= with a Range index" do
  describe "with an empty replacement" do
    it "does not replace a character with a zero-index, zero exclude-end range" do
      str = "abc"
      str[0...0] = ""
      str.should == "abc"
    end

    it "does not replace a character with a zero exclude-end range" do
      str = "abc"
      str[1...1] = ""
      str.should == "abc"
    end

    it "replaces a character with zero-index, zero non-exclude-end range" do
      str = "abc"
      str[0..0] = ""
      str.should == "bc"
    end

    it "replaces a character with a zero non-exclude-end range" do
      str = "abc"
      str[1..1] = ""
      str.should == "ac"
    end
  end

  it "replaces the contents with a shorter String" do
    str = "abcde"
    str[0..-1] = "hg"
    str.should == "hg"
  end

  it "replaces the contents with a longer String" do
    str = "abc"
    str[0...4] = "uvwxyz"
    str.should == "uvwxyz"
  end

  it "replaces a partial string" do
    str = "abcde"
    str[1..3] = "B"
    str.should == "aBe"
  end

  it "raises a RangeError if negative Range begin is out of range" do
    lambda { "abc"[-4..-2] = "x" }.should raise_error(RangeError)
  end

  it "raises a RangeError if positive Range begin is greater than String size" do
    lambda { "abc"[4..2] = "x" }.should raise_error(RangeError)
  end

  it "uses the Range end as an index rather than a count" do
    str = "abcdefg"
    str[-5..3] = "xyz"
    str.should == "abxyzefg"
  end

  it "treats a negative out-of-range Range end with a positive Range begin as a zero count" do
    str = "abc"
    str[1..-4] = "x"
    str.should == "axbc"
  end

  it "treats a negative out-of-range Range end with a negative Range begin as a zero count" do
    str = "abcd"
    str[-1..-4] = "x"
    str.should == "abcxd"
  end

  with_feature :encoding do
    it "replaces characters with a multibyte character" do
      str = "ありgaとう"
      str[2..3] = "が"
      str.should == "ありがとう"
    end

    it "replaces multibyte characters with characters" do
      str = "ありがとう"
      str[2...3] = "ga"
      str.should == "ありgaとう"
    end

    it "replaces multibyte characters by negative indexes" do
      str = "ありがとう"
      str[-3...-2] = "ga"
      str.should == "ありgaとう"
    end

    it "replaces multibyte characters with multibyte characters" do
      str = "ありがとう"
      str[2..2] = "か"
      str.should == "ありかとう"
    end

    it "deletes a multibyte character" do
      str = "ありとう"
      str[2..3] = ""
      str.should == "あり"
    end

    it "inserts a multibyte character" do
      str = "ありとう"
      str[2...2] = "が"
      str.should == "ありがとう"
    end

    it "encodes the String in an encoding compatible with the replacement" do
      str = " ".force_encoding Encoding::US_ASCII
      rep = [160].pack('C').force_encoding Encoding::ASCII_8BIT
      str[0..1] = rep
      str.encoding.should equal(Encoding::ASCII_8BIT)
    end

    it "raises an Encoding::CompatibilityError if the replacement encoding is incompatible" do
      str = "あれ"
      rep = "が".encode Encoding::EUC_JP
      lambda { str[0..1] = rep }.should raise_error(Encoding::CompatibilityError)
    end
  end
end

describe "String#[]= with Fixnum index, count" do
  it "starts at idx and overwrites count characters before inserting the rest of other_str" do
    a = "hello"
    a[0, 2] = "xx"
    a.should == "xxllo"
    a = "hello"
    a[0, 2] = "jello"
    a.should == "jellollo"
  end

  it "counts negative idx values from end of the string" do
    a = "hello"
    a[-1, 0] = "bob"
    a.should == "hellbobo"
    a = "hello"
    a[-5, 0] = "bob"
    a.should == "bobhello"
  end

  it "overwrites and deletes characters if count is more than the length of other_str" do
    a = "hello"
    a[0, 4] = "x"
    a.should == "xo"
    a = "hello"
    a[0, 5] = "x"
    a.should == "x"
  end

  it "deletes characters if other_str is an empty string" do
    a = "hello"
    a[0, 2] = ""
    a.should == "llo"
  end

  it "deletes characters up to the maximum length of the existing string" do
    a = "hello"
    a[0, 6] = "x"
    a.should == "x"
    a = "hello"
    a[0, 100] = ""
    a.should == ""
  end

  it "appends other_str to the end of the string if idx == the length of the string" do
    a = "hello"
    a[5, 0] = "bob"
    a.should == "hellobob"
  end

  it "taints self if other_str is tainted" do
    a = "hello"
    a[0, 0] = "".taint
    a.tainted?.should == true

    a = "hello"
    a[1, 4] = "x".taint
    a.tainted?.should == true
  end

  it "calls #to_int to convert the index and count objects" do
    index = mock("string element set index")
    index.should_receive(:to_int).and_return(-4)

    count = mock("string element set count")
    count.should_receive(:to_int).and_return(2)

    str = "abcde"
    str[index, count] = "xyz"
    str.should == "axyzde"
  end

  it "raises a TypeError if #to_int for index does not return an Integer" do
    index = mock("string element set index")
    index.should_receive(:to_int).and_return("1")

    lambda { "abc"[index, 2] = "xyz" }.should raise_error(TypeError)
  end

  it "raises a TypeError if #to_int for count does not return an Integer" do
    count = mock("string element set count")
    count.should_receive(:to_int).and_return("1")

    lambda { "abc"[1, count] = "xyz" }.should raise_error(TypeError)
  end

  it "calls #to_str to convert the replacement object" do
    r = mock("string element set replacement")
    r.should_receive(:to_str).and_return("xyz")

    str = "abcde"
    str[2, 2] = r
    str.should == "abxyze"
  end

  it "raises a TypeError of #to_str does not return a String" do
    r = mock("string element set replacement")
    r.should_receive(:to_str).and_return(nil)

    lambda { "abc"[1, 1] = r }.should raise_error(TypeError)
  end

  it "raises an IndexError if |idx| is greater than the length of the string" do
    lambda { "hello"[6, 0] = "bob"  }.should raise_error(IndexError)
    lambda { "hello"[-6, 0] = "bob" }.should raise_error(IndexError)
  end

  it "raises an IndexError if count < 0" do
    lambda { "hello"[0, -1] = "bob" }.should raise_error(IndexError)
    lambda { "hello"[1, -1] = "bob" }.should raise_error(IndexError)
  end

  it "raises a TypeError if other_str is a type other than String" do
    lambda { "hello"[0, 2] = nil  }.should raise_error(TypeError)
    lambda { "hello"[0, 2] = []   }.should raise_error(TypeError)
    lambda { "hello"[0, 2] = 33   }.should raise_error(TypeError)
  end

  with_feature :encoding do
    it "replaces characters with a multibyte character" do
      str = "ありgaとう"
      str[2, 2] = "が"
      str.should == "ありがとう"
    end

    it "replaces multibyte characters with characters" do
      str = "ありがとう"
      str[2, 1] = "ga"
      str.should == "ありgaとう"
    end

    it "replaces multibyte characters with multibyte characters" do
      str = "ありがとう"
      str[2, 1] = "か"
      str.should == "ありかとう"
    end

    it "deletes a multibyte character" do
      str = "ありとう"
      str[2, 2] = ""
      str.should == "あり"
    end

    it "inserts a multibyte character" do
      str = "ありとう"
      str[2, 0] = "が"
      str.should == "ありがとう"
    end

    it "raises an IndexError if the character index is out of range of a multibyte String" do
      lambda { "あれ"[3, 0] = "り" }.should raise_error(IndexError)
    end

    it "encodes the String in an encoding compatible with the replacement" do
      str = " ".force_encoding Encoding::US_ASCII
      rep = [160].pack('C').force_encoding Encoding::ASCII_8BIT
      str[0, 1] = rep
      str.encoding.should equal(Encoding::ASCII_8BIT)
    end

    it "raises an Encoding::CompatibilityError if the replacement encoding is incompatible" do
      str = "あれ"
      rep = "が".encode Encoding::EUC_JP
      lambda { str[0, 1] = rep }.should raise_error(Encoding::CompatibilityError)
    end
  end
end
