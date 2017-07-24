require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#rpartition with String" do
  it "returns an array of substrings based on splitting on the given string" do
    "hello world".rpartition("o").should == ["hello w", "o", "rld"]
  end

  it "always returns 3 elements" do
    "hello".rpartition("x").should == ["", "", "hello"]
    "hello".rpartition("hello").should == ["", "hello", ""]
  end

  it "accepts regexp" do
    "hello!".rpartition(/l./).should == ["hel", "lo", "!"]
  end

  it "affects $~" do
    matched_string = "hello!".rpartition(/l./)[1]
    matched_string.should == $~[0]
  end

  it "converts its argument using :to_str" do
    find = mock('l')
    find.should_receive(:to_str).and_return("l")
    "hello".rpartition(find).should == ["hel","l","o"]
  end

  it "raises an error if not convertible to string" do
    lambda{ "hello".rpartition(5) }.should raise_error(TypeError)
    lambda{ "hello".rpartition(nil) }.should raise_error(TypeError)
  end
end
