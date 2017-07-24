# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#scan" do
  it "returns an array containing all matches" do
    "cruel world".scan(/\w+/).should == ["cruel", "world"]
    "cruel world".scan(/.../).should == ["cru", "el ", "wor"]

    # Edge case
    "hello".scan(//).should == ["", "", "", "", "", ""]
    "".scan(//).should == [""]
  end

  it "respects unicode when the pattern collapses to nothing" do
    str = "こにちわ"
    reg = %r!!
    str.scan(reg).should == ["", "", "", "", ""]
  end

  it "stores groups as arrays in the returned arrays" do
    "hello".scan(/()/).should == [[""]] * 6
    "hello".scan(/()()/).should == [["", ""]] * 6
    "cruel world".scan(/(...)/).should == [["cru"], ["el "], ["wor"]]
    "cruel world".scan(/(..)(..)/).should == [["cr", "ue"], ["l ", "wo"]]
  end

  it "scans for occurrences of the string if pattern is a string" do
    "one two one two".scan('one').should == ["one", "one"]
    "hello.".scan('.').should == ['.']
  end

  it "sets $~ to MatchData of last match and nil when there's none" do
    'hello.'.scan(/.(.)/)
    $~[0].should == 'o.'

    'hello.'.scan(/not/)
    $~.should == nil

    'hello.'.scan('l')
    $~.begin(0).should == 3
    $~[0].should == 'l'

    'hello.'.scan('not')
    $~.should == nil
  end

  it "supports \\G which matches the end of the previous match / string start for first match" do
    "one two one two".scan(/\G\w+/).should == ["one"]
    "one two one two".scan(/\G\w+\s*/).should == ["one ", "two ", "one ", "two"]
    "one two one two".scan(/\G\s*\w+/).should == ["one", " two", " one", " two"]
  end

  it "tries to convert pattern to a string via to_str" do
    obj = mock('o')
    obj.should_receive(:to_str).and_return("o")
    "o_o".scan(obj).should == ["o", "o"]
  end

  it "raises a TypeError if pattern isn't a Regexp and can't be converted to a String" do
    lambda { "cruel world".scan(5)         }.should raise_error(TypeError)
    not_supported_on :opal do
      lambda { "cruel world".scan(:test)   }.should raise_error(TypeError)
    end
    lambda { "cruel world".scan(mock('x')) }.should raise_error(TypeError)
  end

  it "taints the results if the String argument is tainted" do
    a = "hello hello hello".scan("hello".taint)
    a.each { |m| m.tainted?.should be_true }
  end

  it "taints the results when passed a String argument if self is tainted" do
    a = "hello hello hello".taint.scan("hello")
    a.each { |m| m.tainted?.should be_true }
  end

  it "taints the results if the Regexp argument is tainted" do
    a = "hello".scan(/./.taint)
    a.each { |m| m.tainted?.should be_true }
  end

  it "taints the results when passed a Regexp argument if self is tainted" do
    a = "hello".taint.scan(/./)
    a.each { |m| m.tainted?.should be_true }
  end
end

describe "String#scan with pattern and block" do
  it "returns self" do
    s = "foo"
    s.scan(/./) {}.should equal(s)
    s.scan(/roar/) {}.should equal(s)
  end

  it "passes each match to the block as one argument: an array" do
    a = []
    "cruel world".scan(/\w+/) { |*w| a << w }
    a.should == [["cruel"], ["world"]]
  end

  it "passes groups to the block as one argument: an array" do
    a = []
    "cruel world".scan(/(..)(..)/) { |w| a << w }
    a.should == [["cr", "ue"], ["l ", "wo"]]
  end

  it "sets $~ for access from the block" do
    str = "hello"

    matches = []
    offsets = []

    str.scan(/([aeiou])/) do
       md = $~
       md.string.should == str
       matches << md.to_a
       offsets << md.offset(0)
       str
    end

    matches.should == [["e", "e"], ["o", "o"]]
    offsets.should == [[1, 2], [4, 5]]

    matches = []
    offsets = []

    str.scan("l") do
       md = $~
       md.string.should == str
       matches << md.to_a
       offsets << md.offset(0)
       str
    end

    matches.should == [["l"], ["l"]]
    offsets.should == [[2, 3], [3, 4]]
  end

  it "restores $~ after leaving the block" do
    [/./, "l"].each do |pattern|
      old_md = nil
      "hello".scan(pattern) do
        old_md = $~
        "ok".match(/./)
        "x"
      end

      $~[0].should == old_md[0]
      $~.string.should == "hello"
    end
  end

  it "sets $~ to MatchData of last match and nil when there's none for access from outside" do
    'hello.'.scan('l') { 'x' }
    $~.begin(0).should == 3
    $~[0].should == 'l'

    'hello.'.scan('not') { 'x' }
    $~.should == nil

    'hello.'.scan(/.(.)/) { 'x' }
    $~[0].should == 'o.'

    'hello.'.scan(/not/) { 'x' }
    $~.should == nil
  end

  it "taints the results if the String argument is tainted" do
    "hello hello hello".scan("hello".taint).each { |m| m.tainted?.should be_true }
  end

  it "taints the results when passed a String argument if self is tainted" do
    "hello hello hello".taint.scan("hello").each { |m| m.tainted?.should be_true }
  end

  it "taints the results if the Regexp argument is tainted" do
    "hello".scan(/./.taint).each { |m| m.tainted?.should be_true }
  end

  it "taints the results when passed a Regexp argument if self is tainted" do
    "hello".taint.scan(/./).each { |m| m.tainted?.should be_true }
  end

  it "passes block arguments as individual arguments when blocks are provided" do
    "a b c\na b c\na b c".scan(/(\w*) (\w*) (\w*)/) do |first,second,third|
      first.should == 'a';
      second.should == 'b';
      third.should == 'c';
    end
  end
end
