require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#each_byte" do
  it "passes each byte in self to the given block" do
    a = []
    "hello\x00".each_byte { |c| a << c }
    a.should == [104, 101, 108, 108, 111, 0]
  end

  it "keeps iterating from the old position (to new string end) when self changes" do
    r = ""
    s = "hello world"
    s.each_byte do |c|
      r << c
      s.insert(0, "<>") if r.size < 3
    end
    r.should == "h><>hello world"

    r = ""
    s = "hello world"
    s.each_byte { |c| s.slice!(-1); r << c }
    r.should == "hello "

    r = ""
    s = "hello world"
    s.each_byte { |c| s.slice!(0); r << c }
    r.should == "hlowrd"

    r = ""
    s = "hello world"
    s.each_byte { |c| s.slice!(0..-1); r << c }
    r.should == "h"
  end

  it "returns self" do
    s = "hello"
    (s.each_byte {}).should equal(s)
  end

  describe "when no block is given" do
    it "returns an enumerator" do
      enum = "hello".each_byte
      enum.should be_an_instance_of(Enumerator)
      enum.to_a.should == [104, 101, 108, 108, 111]
    end

    describe "returned enumerator" do
      describe "size" do
        it "should return the bytesize of the string" do
          str = "hello"
          str.each_byte.size.should == str.bytesize
          str = "ola"
          str.each_byte.size.should == str.bytesize
          str = "\303\207\342\210\202\303\251\306\222g"
          str.each_byte.size.should == str.bytesize
        end
      end
    end
  end
end
