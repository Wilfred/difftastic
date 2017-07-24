# -*- encoding: binary -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#count" do
  it "counts occurrences of chars from the intersection of the specified sets" do
    s = "hello\nworld\x00\x00"

    s.count(s).should == s.size
    s.count("lo").should == 5
    s.count("eo").should == 3
    s.count("l").should == 3
    s.count("\n").should == 1
    s.count("\x00").should == 2

    s.count("").should == 0
    "".count("").should == 0

    s.count("l", "lo").should == s.count("l")
    s.count("l", "lo", "o").should == s.count("")
    s.count("helo", "hel", "h").should == s.count("h")
    s.count("helo", "", "x").should == 0
  end

  it "raises an ArgumentError when given no arguments" do
    lambda { "hell yeah".count }.should raise_error(ArgumentError)
  end

  it "negates sets starting with ^" do
    s = "^hello\nworld\x00\x00"

    s.count("^").should == 1 # no negation, counts ^

    s.count("^leh").should == 9
    s.count("^o").should == 12

    s.count("helo", "^el").should == s.count("ho")
    s.count("aeiou", "^e").should == s.count("aiou")

    "^_^".count("^^").should == 1
    "oa^_^o".count("a^").should == 3
  end

  it "counts all chars in a sequence" do
    s = "hel-[()]-lo012^"

    s.count("\x00-\xFF").should == s.size
    s.count("ej-m").should == 3
    s.count("e-h").should == 2

    # no sequences
    s.count("-").should == 2
    s.count("e-").should == s.count("e") + s.count("-")
    s.count("-h").should == s.count("h") + s.count("-")

    s.count("---").should == s.count("-")

    # see an ASCII table for reference
    s.count("--2").should == s.count("-./012")
    s.count("(--").should == s.count("()*+,-")
    s.count("A-a").should == s.count("A-Z[\\]^_`a")

    # negated sequences
    s.count("^e-h").should == s.size - s.count("e-h")
    s.count("^^-^").should == s.size - s.count("^")
    s.count("^---").should == s.size - s.count("-")

    "abcdefgh".count("a-ce-fh").should == 6
    "abcdefgh".count("he-fa-c").should == 6
    "abcdefgh".count("e-fha-c").should == 6

    "abcde".count("ac-e").should == 4
    "abcde".count("^ac-e").should == 1
  end

  it "raises if the given sequences are invalid" do
    s = "hel-[()]-lo012^"

    lambda { s.count("h-e") }.should raise_error(ArgumentError)
    lambda { s.count("^h-e") }.should raise_error(ArgumentError)
  end

  it 'returns the number of occurrences of a multi-byte character' do
    str = "\u{2605}"
    str.count(str).should == 1
    "asd#{str}zzz#{str}ggg".count(str).should == 2
  end

  it "calls #to_str to convert each set arg to a String" do
    other_string = mock('lo')
    other_string.should_receive(:to_str).and_return("lo")

    other_string2 = mock('o')
    other_string2.should_receive(:to_str).and_return("o")

    s = "hello world"
    s.count(other_string, other_string2).should == s.count("o")
  end

  it "raises a TypeError when a set arg can't be converted to a string" do
    lambda { "hello world".count(100)       }.should raise_error(TypeError)
    lambda { "hello world".count([])        }.should raise_error(TypeError)
    lambda { "hello world".count(mock('x')) }.should raise_error(TypeError)
  end
end
