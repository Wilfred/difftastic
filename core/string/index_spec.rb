# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#index" do
  it "raises a TypeError if passed nil" do
    lambda { "abc".index nil }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed a boolean" do
    lambda { "abc".index true }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed a Symbol" do
    lambda { "abc".index :a }.should raise_error(TypeError)
  end

  it "calls #to_str to convert the first argument" do
    char = mock("string index char")
    char.should_receive(:to_str).and_return("b")
    "abc".index(char).should == 1
  end

  it "calls #to_int to convert the second argument" do
    offset = mock("string index offset")
    offset.should_receive(:to_int).and_return(1)
    "abc".index("c", offset).should == 2
  end

  it "raises a TypeError if passed a Fixnum" do
    lambda { "abc".index 97 }.should raise_error(TypeError)
  end
end

describe "String#index with String" do
  it "behaves the same as String#index(char) for one-character strings" do
    "blablabla hello cruel world...!".split("").uniq.each do |str|
      chr = str[0]
      str.index(str).should == str.index(chr)

      0.upto(str.size + 1) do |start|
        str.index(str, start).should == str.index(chr, start)
      end

      (-str.size - 1).upto(-1) do |start|
        str.index(str, start).should == str.index(chr, start)
      end
    end
  end

  it "returns the index of the first occurrence of the given substring" do
    "blablabla".index("").should == 0
    "blablabla".index("b").should == 0
    "blablabla".index("bla").should == 0
    "blablabla".index("blabla").should == 0
    "blablabla".index("blablabla").should == 0

    "blablabla".index("l").should == 1
    "blablabla".index("la").should == 1
    "blablabla".index("labla").should == 1
    "blablabla".index("lablabla").should == 1

    "blablabla".index("a").should == 2
    "blablabla".index("abla").should == 2
    "blablabla".index("ablabla").should == 2
  end

  it "doesn't set $~" do
    $~ = nil

    'hello.'.index('ll')
    $~.should == nil
  end

  it "ignores string subclasses" do
    "blablabla".index(StringSpecs::MyString.new("bla")).should == 0
    StringSpecs::MyString.new("blablabla").index("bla").should == 0
    StringSpecs::MyString.new("blablabla").index(StringSpecs::MyString.new("bla")).should == 0
  end

  it "starts the search at the given offset" do
    "blablabla".index("bl", 0).should == 0
    "blablabla".index("bl", 1).should == 3
    "blablabla".index("bl", 2).should == 3
    "blablabla".index("bl", 3).should == 3

    "blablabla".index("bla", 0).should == 0
    "blablabla".index("bla", 1).should == 3
    "blablabla".index("bla", 2).should == 3
    "blablabla".index("bla", 3).should == 3

    "blablabla".index("blab", 0).should == 0
    "blablabla".index("blab", 1).should == 3
    "blablabla".index("blab", 2).should == 3
    "blablabla".index("blab", 3).should == 3

    "blablabla".index("la", 1).should == 1
    "blablabla".index("la", 2).should == 4
    "blablabla".index("la", 3).should == 4
    "blablabla".index("la", 4).should == 4

    "blablabla".index("lab", 1).should == 1
    "blablabla".index("lab", 2).should == 4
    "blablabla".index("lab", 3).should == 4
    "blablabla".index("lab", 4).should == 4

    "blablabla".index("ab", 2).should == 2
    "blablabla".index("ab", 3).should == 5
    "blablabla".index("ab", 4).should == 5
    "blablabla".index("ab", 5).should == 5

    "blablabla".index("", 0).should == 0
    "blablabla".index("", 1).should == 1
    "blablabla".index("", 2).should == 2
    "blablabla".index("", 7).should == 7
    "blablabla".index("", 8).should == 8
    "blablabla".index("", 9).should == 9
  end

  it "starts the search at offset + self.length if offset is negative" do
    str = "blablabla"

    ["bl", "bla", "blab", "la", "lab", "ab", ""].each do |needle|
      (-str.length .. -1).each do |offset|
        str.index(needle, offset).should ==
        str.index(needle, offset + str.length)
      end
    end
  end

  it "returns nil if the substring isn't found" do
    "blablabla".index("B").should == nil
    "blablabla".index("z").should == nil
    "blablabla".index("BLA").should == nil
    "blablabla".index("blablablabla").should == nil
    "blablabla".index("", 10).should == nil

    "hello".index("he", 1).should == nil
    "hello".index("he", 2).should == nil
  end

  with_feature :encoding do
    it "returns the character index of a multibyte character" do
      "ありがとう".index("が").should == 2
    end

    it "returns the character index after offset" do
      "われわれ".index("わ", 1).should == 2
    end

    it "returns the character index after a partial first match" do
      "</</h".index("</h").should == 2
    end

    it "raises an Encoding::CompatibilityError if the encodings are incompatible" do
      char = "れ".encode Encoding::EUC_JP
      lambda do
        "あれ".index char
      end.should raise_error(Encoding::CompatibilityError)
    end
  end
end

describe "String#index with Regexp" do
  it "behaves the same as String#index(string) for escaped string regexps" do
    ["blablabla", "hello cruel world...!"].each do |str|
      ["", "b", "bla", "lab", "o c", "d."].each do |needle|
        regexp = Regexp.new(Regexp.escape(needle))
        str.index(regexp).should == str.index(needle)

        0.upto(str.size + 1) do |start|
          str.index(regexp, start).should == str.index(needle, start)
        end

        (-str.size - 1).upto(-1) do |start|
          str.index(regexp, start).should == str.index(needle, start)
        end
      end
    end
  end

  it "returns the index of the first match of regexp" do
    "blablabla".index(/bla/).should == 0
    "blablabla".index(/BLA/i).should == 0

    "blablabla".index(/.{0}/).should == 0
    "blablabla".index(/.{6}/).should == 0
    "blablabla".index(/.{9}/).should == 0

    "blablabla".index(/.*/).should == 0
    "blablabla".index(/.+/).should == 0

    "blablabla".index(/lab|b/).should == 0

    not_supported_on :opal do
      "blablabla".index(/\A/).should == 0
      "blablabla".index(/\Z/).should == 9
      "blablabla".index(/\z/).should == 9
      "blablabla\n".index(/\Z/).should == 9
      "blablabla\n".index(/\z/).should == 10
    end

    "blablabla".index(/^/).should == 0
    "\nblablabla".index(/^/).should == 0
    "b\nablabla".index(/$/).should == 1
    "bl\nablabla".index(/$/).should == 2

    "blablabla".index(/.l./).should == 0
  end

  it "sets $~ to MatchData of match and nil when there's none" do
    'hello.'.index(/.(.)/)
    $~[0].should == 'he'

    'hello.'.index(/not/)
    $~.should == nil
  end

  it "starts the search at the given offset" do
    "blablabla".index(/.{0}/, 5).should == 5
    "blablabla".index(/.{1}/, 5).should == 5
    "blablabla".index(/.{2}/, 5).should == 5
    "blablabla".index(/.{3}/, 5).should == 5
    "blablabla".index(/.{4}/, 5).should == 5

    "blablabla".index(/.{0}/, 3).should == 3
    "blablabla".index(/.{1}/, 3).should == 3
    "blablabla".index(/.{2}/, 3).should == 3
    "blablabla".index(/.{5}/, 3).should == 3
    "blablabla".index(/.{6}/, 3).should == 3

    "blablabla".index(/.l./, 0).should == 0
    "blablabla".index(/.l./, 1).should == 3
    "blablabla".index(/.l./, 2).should == 3
    "blablabla".index(/.l./, 3).should == 3

    "xblaxbla".index(/x./, 0).should == 0
    "xblaxbla".index(/x./, 1).should == 4
    "xblaxbla".index(/x./, 2).should == 4

    not_supported_on :opal do
      "blablabla\n".index(/\Z/, 9).should == 9
    end
  end

  it "starts the search at offset + self.length if offset is negative" do
    str = "blablabla"

    ["bl", "bla", "blab", "la", "lab", "ab", ""].each do |needle|
      (-str.length .. -1).each do |offset|
        str.index(needle, offset).should ==
        str.index(needle, offset + str.length)
      end
    end
  end

  it "returns nil if the substring isn't found" do
    "blablabla".index(/BLA/).should == nil

    "blablabla".index(/.{10}/).should == nil
    "blaxbla".index(/.x/, 3).should == nil
    "blaxbla".index(/..x/, 2).should == nil
  end

  it "returns nil if the Regexp matches the empty string and the offset is out of range" do
    "ruby".index(//,12).should be_nil
  end

  it "supports \\G which matches at the given start offset" do
    "helloYOU.".index(/\GYOU/, 5).should == 5
    "helloYOU.".index(/\GYOU/).should == nil

    re = /\G.+YOU/
    # The # marks where \G will match.
    [
      ["#hi!YOUall.", 0],
      ["h#i!YOUall.", 1],
      ["hi#!YOUall.", 2],
      ["hi!#YOUall.", nil]
    ].each do |spec|

      start = spec[0].index("#")
      str = spec[0].delete("#")

      str.index(re, start).should == spec[1]
    end
  end

  it "converts start_offset to an integer via to_int" do
    obj = mock('1')
    obj.should_receive(:to_int).and_return(1)
    "RWOARW".index(/R./, obj).should == 4
  end

  with_feature :encoding do
    it "returns the character index of a multibyte character" do
      "ありがとう".index(/が/).should == 2
    end

    it "returns the character index after offset" do
      "われわれ".index(/わ/, 1).should == 2
    end

    it "treats the offset as a character index" do
      "われわわれ".index(/わ/, 3).should == 3
    end

    it "raises an Encoding::CompatibilityError if the encodings are incompatible" do
      re = Regexp.new "れ".encode(Encoding::EUC_JP)
      lambda do
        "あれ".index re
      end.should raise_error(Encoding::CompatibilityError)
    end
  end
end
