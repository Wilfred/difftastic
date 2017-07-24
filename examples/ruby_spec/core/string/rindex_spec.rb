# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)
require File.expand_path('../fixtures/utf-8-encoding.rb', __FILE__)

describe "String#rindex with object" do
  it "raises a TypeError if obj isn't a String, Fixnum or Regexp" do
    not_supported_on :opal do
      lambda { "hello".rindex(:sym) }.should raise_error(TypeError)
    end
    lambda { "hello".rindex(mock('x')) }.should raise_error(TypeError)
  end

  it "doesn't try to convert obj to an integer via to_int" do
    obj = mock('x')
    obj.should_not_receive(:to_int)
    lambda { "hello".rindex(obj) }.should raise_error(TypeError)
  end

  it "tries to convert obj to a string via to_str" do
    obj = mock('lo')
    def obj.to_str() "lo" end
    "hello".rindex(obj).should == "hello".rindex("lo")

    obj = mock('o')
    def obj.respond_to?(arg, *) true end
    def obj.method_missing(*args) "o" end
    "hello".rindex(obj).should == "hello".rindex("o")
  end
end

describe "String#rindex with String" do
  it "behaves the same as String#rindex(char) for one-character strings" do
    "blablabla hello cruel world...!".split("").uniq.each do |str|
      chr = str[0]
      str.rindex(str).should == str.rindex(chr)

      0.upto(str.size + 1) do |start|
        str.rindex(str, start).should == str.rindex(chr, start)
      end

      (-str.size - 1).upto(-1) do |start|
        str.rindex(str, start).should == str.rindex(chr, start)
      end
    end
  end

  it "behaves the same as String#rindex(?char) for one-character strings" do
    "blablabla hello cruel world...!".split("").uniq.each do |str|
      chr = str[0] =~ / / ? str[0] : eval("?#{str[0]}")
      str.rindex(str).should == str.rindex(chr)

      0.upto(str.size + 1) do |start|
        str.rindex(str, start).should == str.rindex(chr, start)
      end

      (-str.size - 1).upto(-1) do |start|
        str.rindex(str, start).should == str.rindex(chr, start)
      end
    end
  end

  it "returns the index of the last occurrence of the given substring" do
    "blablabla".rindex("").should == 9
    "blablabla".rindex("a").should == 8
    "blablabla".rindex("la").should == 7
    "blablabla".rindex("bla").should == 6
    "blablabla".rindex("abla").should == 5
    "blablabla".rindex("labla").should == 4
    "blablabla".rindex("blabla").should == 3
    "blablabla".rindex("ablabla").should == 2
    "blablabla".rindex("lablabla").should == 1
    "blablabla".rindex("blablabla").should == 0

    "blablabla".rindex("l").should == 7
    "blablabla".rindex("bl").should == 6
    "blablabla".rindex("abl").should == 5
    "blablabla".rindex("labl").should == 4
    "blablabla".rindex("blabl").should == 3
    "blablabla".rindex("ablabl").should == 2
    "blablabla".rindex("lablabl").should == 1
    "blablabla".rindex("blablabl").should == 0

    "blablabla".rindex("b").should == 6
    "blablabla".rindex("ab").should == 5
    "blablabla".rindex("lab").should == 4
    "blablabla".rindex("blab").should == 3
    "blablabla".rindex("ablab").should == 2
    "blablabla".rindex("lablab").should == 1
    "blablabla".rindex("blablab").should == 0
  end

  it "doesn't set $~" do
    $~ = nil

    'hello.'.rindex('ll')
    $~.should == nil
  end

  it "ignores string subclasses" do
    "blablabla".rindex(StringSpecs::MyString.new("bla")).should == 6
    StringSpecs::MyString.new("blablabla").rindex("bla").should == 6
    StringSpecs::MyString.new("blablabla").rindex(StringSpecs::MyString.new("bla")).should == 6
  end

  it "starts the search at the given offset" do
    "blablabla".rindex("bl", 0).should == 0
    "blablabla".rindex("bl", 1).should == 0
    "blablabla".rindex("bl", 2).should == 0
    "blablabla".rindex("bl", 3).should == 3

    "blablabla".rindex("bla", 0).should == 0
    "blablabla".rindex("bla", 1).should == 0
    "blablabla".rindex("bla", 2).should == 0
    "blablabla".rindex("bla", 3).should == 3

    "blablabla".rindex("blab", 0).should == 0
    "blablabla".rindex("blab", 1).should == 0
    "blablabla".rindex("blab", 2).should == 0
    "blablabla".rindex("blab", 3).should == 3
    "blablabla".rindex("blab", 6).should == 3
    "blablablax".rindex("blab", 6).should == 3

    "blablabla".rindex("la", 1).should == 1
    "blablabla".rindex("la", 2).should == 1
    "blablabla".rindex("la", 3).should == 1
    "blablabla".rindex("la", 4).should == 4

    "blablabla".rindex("lab", 1).should == 1
    "blablabla".rindex("lab", 2).should == 1
    "blablabla".rindex("lab", 3).should == 1
    "blablabla".rindex("lab", 4).should == 4

    "blablabla".rindex("ab", 2).should == 2
    "blablabla".rindex("ab", 3).should == 2
    "blablabla".rindex("ab", 4).should == 2
    "blablabla".rindex("ab", 5).should == 5

    "blablabla".rindex("", 0).should == 0
    "blablabla".rindex("", 1).should == 1
    "blablabla".rindex("", 2).should == 2
    "blablabla".rindex("", 7).should == 7
    "blablabla".rindex("", 8).should == 8
    "blablabla".rindex("", 9).should == 9
    "blablabla".rindex("", 10).should == 9
  end

  it "starts the search at offset + self.length if offset is negative" do
    str = "blablabla"

    ["bl", "bla", "blab", "la", "lab", "ab", ""].each do |needle|
      (-str.length .. -1).each do |offset|
        str.rindex(needle, offset).should ==
        str.rindex(needle, offset + str.length)
      end
    end
  end

  it "returns nil if the substring isn't found" do
    "blablabla".rindex("B").should == nil
    "blablabla".rindex("z").should == nil
    "blablabla".rindex("BLA").should == nil
    "blablabla".rindex("blablablabla").should == nil

    "hello".rindex("lo", 0).should == nil
    "hello".rindex("lo", 1).should == nil
    "hello".rindex("lo", 2).should == nil

    "hello".rindex("llo", 0).should == nil
    "hello".rindex("llo", 1).should == nil

    "hello".rindex("el", 0).should == nil
    "hello".rindex("ello", 0).should == nil

    "hello".rindex("", -6).should == nil
    "hello".rindex("", -7).should == nil

    "hello".rindex("h", -6).should == nil
  end

  it "tries to convert start_offset to an integer via to_int" do
    obj = mock('5')
    def obj.to_int() 5 end
    "str".rindex("st", obj).should == 0

    obj = mock('5')
    def obj.respond_to?(arg, *) true end
    def obj.method_missing(*args) 5 end
    "str".rindex("st", obj).should == 0
  end

  it "raises a TypeError when given offset is nil" do
    lambda { "str".rindex("st", nil) }.should raise_error(TypeError)
  end
end

describe "String#rindex with Regexp" do
  it "behaves the same as String#rindex(string) for escaped string regexps" do
    ["blablabla", "hello cruel world...!"].each do |str|
      ["", "b", "bla", "lab", "o c", "d."].each do |needle|
        regexp = Regexp.new(Regexp.escape(needle))
        str.rindex(regexp).should == str.rindex(needle)

        0.upto(str.size + 1) do |start|
          str.rindex(regexp, start).should == str.rindex(needle, start)
        end

        (-str.size - 1).upto(-1) do |start|
          str.rindex(regexp, start).should == str.rindex(needle, start)
        end
      end
    end
  end

  it "returns the index of the first match from the end of string of regexp" do
    "blablabla".rindex(/bla/).should == 6
    "blablabla".rindex(/BLA/i).should == 6

    "blablabla".rindex(/.{0}/).should == 9
    "blablabla".rindex(/.{1}/).should == 8
    "blablabla".rindex(/.{2}/).should == 7
    "blablabla".rindex(/.{6}/).should == 3
    "blablabla".rindex(/.{9}/).should == 0

    "blablabla".rindex(/.*/).should == 9
    "blablabla".rindex(/.+/).should == 8

    "blablabla".rindex(/bla|a/).should == 8

    not_supported_on :opal do
      "blablabla".rindex(/\A/).should == 0
      "blablabla".rindex(/\Z/).should == 9
      "blablabla".rindex(/\z/).should == 9
      "blablabla\n".rindex(/\Z/).should == 10
      "blablabla\n".rindex(/\z/).should == 10
    end

    "blablabla".rindex(/^/).should == 0
    not_supported_on :opal do
      "\nblablabla".rindex(/^/).should == 1
      "b\nlablabla".rindex(/^/).should == 2
    end
    "blablabla".rindex(/$/).should == 9

    "blablabla".rindex(/.l./).should == 6
  end

  it "sets $~ to MatchData of match and nil when there's none" do
    'hello.'.rindex(/.(.)/)
    $~[0].should == 'o.'

    'hello.'.rindex(/not/)
    $~.should == nil
  end

  it "starts the search at the given offset" do
    "blablabla".rindex(/.{0}/, 5).should == 5
    "blablabla".rindex(/.{1}/, 5).should == 5
    "blablabla".rindex(/.{2}/, 5).should == 5
    "blablabla".rindex(/.{3}/, 5).should == 5
    "blablabla".rindex(/.{4}/, 5).should == 5

    "blablabla".rindex(/.{0}/, 3).should == 3
    "blablabla".rindex(/.{1}/, 3).should == 3
    "blablabla".rindex(/.{2}/, 3).should == 3
    "blablabla".rindex(/.{5}/, 3).should == 3
    "blablabla".rindex(/.{6}/, 3).should == 3

    "blablabla".rindex(/.l./, 0).should == 0
    "blablabla".rindex(/.l./, 1).should == 0
    "blablabla".rindex(/.l./, 2).should == 0
    "blablabla".rindex(/.l./, 3).should == 3

    "blablablax".rindex(/.x/, 10).should == 8
    "blablablax".rindex(/.x/, 9).should == 8
    "blablablax".rindex(/.x/, 8).should == 8

    "blablablax".rindex(/..x/, 10).should == 7
    "blablablax".rindex(/..x/, 9).should == 7
    "blablablax".rindex(/..x/, 8).should == 7
    "blablablax".rindex(/..x/, 7).should == 7

    not_supported_on :opal do
      "blablabla\n".rindex(/\Z/, 9).should == 9
    end
  end

  it "starts the search at offset + self.length if offset is negative" do
    str = "blablabla"

    ["bl", "bla", "blab", "la", "lab", "ab", ""].each do |needle|
      (-str.length .. -1).each do |offset|
        str.rindex(needle, offset).should ==
        str.rindex(needle, offset + str.length)
      end
    end
  end

  it "returns nil if the substring isn't found" do
    "blablabla".rindex(/BLA/).should == nil
    "blablabla".rindex(/.{10}/).should == nil
    "blablablax".rindex(/.x/, 7).should == nil
    "blablablax".rindex(/..x/, 6).should == nil

    not_supported_on :opal do
      "blablabla".rindex(/\Z/, 5).should == nil
      "blablabla".rindex(/\z/, 5).should == nil
      "blablabla\n".rindex(/\z/, 9).should == nil
    end
  end

  not_supported_on :opal do
    it "supports \\G which matches at the given start offset" do
      "helloYOU.".rindex(/YOU\G/, 8).should == 5
      "helloYOU.".rindex(/YOU\G/).should == nil

      idx = "helloYOUall!".index("YOU")
      re = /YOU.+\G.+/
      # The # marks where \G will match.
      [
        ["helloYOU#all.", nil],
        ["helloYOUa#ll.", idx],
        ["helloYOUal#l.", idx],
        ["helloYOUall#.", idx],
        ["helloYOUall.#", nil]
      ].each do |i|
        start = i[0].index("#")
        str = i[0].delete("#")

        str.rindex(re, start).should == i[1]
      end
    end
  end

  it "tries to convert start_offset to an integer via to_int" do
    obj = mock('5')
    def obj.to_int() 5 end
    "str".rindex(/../, obj).should == 1

    obj = mock('5')
    def obj.respond_to?(arg, *) true end
    def obj.method_missing(*args); 5; end
    "str".rindex(/../, obj).should == 1
  end

  it "raises a TypeError when given offset is nil" do
    lambda { "str".rindex(/../, nil) }.should raise_error(TypeError)
  end

  with_feature :encoding do
    it "returns the reverse character index of a multibyte character" do
      "ありがりがとう".rindex("が").should == 4
      "ありがりがとう".rindex(/が/).should == 4
    end

    it "returns the character index before the finish" do
       "ありがりがとう".rindex("が", 3).should == 2
       "ありがりがとう".rindex(/が/, 3).should == 2
    end

    it "raises an Encoding::CompatibilityError if the encodings are incompatible" do
      re = Regexp.new "れ".encode(Encoding::EUC_JP)
      lambda do
        "あれ".rindex re
      end.should raise_error(Encoding::CompatibilityError)
    end
  end
end
