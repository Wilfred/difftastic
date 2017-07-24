# encoding: utf-8

require File.expand_path('../../../spec_helper', __FILE__)

describe "Regexp.union" do
  it "returns /(?!)/ when passed no arguments" do
    Regexp.union.should == /(?!)/
  end

  it "returns a regular expression that will match passed arguments" do
    Regexp.union("penzance").should == /penzance/
    Regexp.union("skiing", "sledding").should == /skiing|sledding/
    not_supported_on :opal do
      Regexp.union(/dogs/, /cats/i).should == /(?-mix:dogs)|(?i-mx:cats)/
    end
  end

  it "quotes any string arguments" do
    Regexp.union("n", ".").should == /n|\./
  end

  it "returns a Regexp with the encoding of an ASCII-incompatible String argument" do
    Regexp.union("a".encode("UTF-16LE")).encoding.should == Encoding::UTF_16LE
  end

  it "returns a Regexp with the encoding of a String containing non-ASCII-compatible characters" do
    Regexp.union("\u00A9".encode("ISO-8859-1")).encoding.should == Encoding::ISO_8859_1
  end

  it "returns a Regexp with US-ASCII encoding if all arguments are ASCII-only" do
    Regexp.union("a".encode("UTF-8"), "b".encode("SJIS")).encoding.should == Encoding::US_ASCII
  end

  it "returns a Regexp with the encoding of multiple non-conflicting ASCII-incompatible String arguments" do
    Regexp.union("a".encode("UTF-16LE"), "b".encode("UTF-16LE")).encoding.should == Encoding::UTF_16LE
  end

  it "returns a Regexp with the encoding of multiple non-conflicting Strings containing non-ASCII-compatible characters" do
    Regexp.union("\u00A9".encode("ISO-8859-1"), "\u00B0".encode("ISO-8859-1")).encoding.should == Encoding::ISO_8859_1
  end

  it "returns a Regexp with the encoding of a String containing non-ASCII-compatible characters and another ASCII-only String" do
    Regexp.union("\u00A9".encode("ISO-8859-1"), "a".encode("UTF-8")).encoding.should == Encoding::ISO_8859_1
  end

  it "returns a Regexp with UTF-8 if one part is UTF-8" do
    Regexp.union(/probl[éeè]me/i, /help/i).encoding.should == Encoding::UTF_8
  end

  it "returns a Regexp if an array of string with special characters is passed" do
    Regexp.union(["+","-"]).should == /\+|\-/
  end

  it "raises ArgumentError if the arguments include conflicting ASCII-incompatible Strings" do
    lambda {
      Regexp.union("a".encode("UTF-16LE"), "b".encode("UTF-16BE"))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include conflicting ASCII-incompatible Regexps" do
    lambda {
      Regexp.union(Regexp.new("a".encode("UTF-16LE")),
                   Regexp.new("b".encode("UTF-16BE")))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include conflicting fixed encoding Regexps" do
    lambda {
      Regexp.union(Regexp.new("a".encode("UTF-8"),    Regexp::FIXEDENCODING),
                   Regexp.new("b".encode("US-ASCII"), Regexp::FIXEDENCODING))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include a fixed encoding Regexp and a String containing non-ASCII-compatible characters in a different encoding" do
    lambda {
      Regexp.union(Regexp.new("a".encode("UTF-8"), Regexp::FIXEDENCODING),
                   "\u00A9".encode("ISO-8859-1"))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include a String containing non-ASCII-compatible characters and a fixed encoding Regexp in a different encoding" do
    lambda {
      Regexp.union("\u00A9".encode("ISO-8859-1"),
                   Regexp.new("a".encode("UTF-8"), Regexp::FIXEDENCODING))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include an ASCII-incompatible String and an ASCII-only String" do
    lambda {
      Regexp.union("a".encode("UTF-16LE"), "b".encode("UTF-8"))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include an ASCII-incompatible Regexp and an ASCII-only String" do
    lambda {
      Regexp.union(Regexp.new("a".encode("UTF-16LE")), "b".encode("UTF-8"))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include an ASCII-incompatible String and an ASCII-only Regexp" do
    lambda {
      Regexp.union("a".encode("UTF-16LE"), Regexp.new("b".encode("UTF-8")))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include an ASCII-incompatible Regexp and an ASCII-only Regexp" do
    lambda {
      Regexp.union(Regexp.new("a".encode("UTF-16LE")), Regexp.new("b".encode("UTF-8")))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include an ASCII-incompatible String and a String containing non-ASCII-compatible characters in a different encoding" do
    lambda {
      Regexp.union("a".encode("UTF-16LE"), "\u00A9".encode("ISO-8859-1"))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include an ASCII-incompatible Regexp and a String containing non-ASCII-compatible characters in a different encoding" do
    lambda {
      Regexp.union(Regexp.new("a".encode("UTF-16LE")), "\u00A9".encode("ISO-8859-1"))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include an ASCII-incompatible String and a Regexp containing non-ASCII-compatible characters in a different encoding" do
    lambda {
      Regexp.union("a".encode("UTF-16LE"), Regexp.new("\u00A9".encode("ISO-8859-1")))
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the arguments include an ASCII-incompatible Regexp and a Regexp containing non-ASCII-compatible characters in a different encoding" do
    lambda {
      Regexp.union(Regexp.new("a".encode("UTF-16LE")), Regexp.new("\u00A9".encode("ISO-8859-1")))
    }.should raise_error(ArgumentError)
  end

  it "uses to_str to convert arguments (if not Regexp)" do
    obj = mock('pattern')
    obj.should_receive(:to_str).and_return('foo')
    Regexp.union(obj, "bar").should == /foo|bar/
  end

  it "accepts a single array of patterns as arguments" do
    Regexp.union(["skiing", "sledding"]).should == /skiing|sledding/
    not_supported_on :opal do
      Regexp.union([/dogs/, /cats/i]).should == /(?-mix:dogs)|(?i-mx:cats)/
    end
    lambda{Regexp.union(["skiing", "sledding"], [/dogs/, /cats/i])}.should raise_error(TypeError)
  end
end
