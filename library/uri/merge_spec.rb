require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

describe "URI#merge" do
  it "returns the receiver and the argument, joined as per URI.join" do
    URI("http://localhost/").merge("main.rbx").should == URI.parse("http://localhost/main.rbx")
    URI("http://localhost/a/b/c/d").merge("http://ruby-lang.com/foo").should == URI.parse("http://ruby-lang.com/foo")
    URI("http://localhost/a/b/c/d").merge("../../e/f").to_s.should == "http://localhost/a/e/f"
  end

  it "accepts URI objects as argument" do
    URI("http://localhost/").merge(URI("main.rbx")).should == URI.parse("http://localhost/main.rbx")
  end

  it "accepts a string-like argument" do
    str = mock('string-like')
    str.should_receive(:to_str).and_return("foo/bar")
    URI("http://localhost/").merge(str).should == URI.parse("http://localhost/foo/bar")
  end
end
