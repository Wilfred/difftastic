require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

describe "URI.join" do
  it "returns a URI object of the concatenation of a protocol and domain, and a path" do
    URI.join("http://localhost/","main.rbx").should == URI.parse("http://localhost/main.rbx")
  end

  it "accepts URI objects" do
    URI.join(URI("http://localhost/"),"main.rbx").should == URI.parse("http://localhost/main.rbx")
    URI.join("http://localhost/",URI("main.rbx")).should == URI.parse("http://localhost/main.rbx")
    URI.join(URI("http://localhost/"),URI("main.rbx")).should == URI.parse("http://localhost/main.rbx")
  end

  it "accepts string-like arguments with to_str" do
    str = mock('string-like')
    str.should_receive(:to_str).and_return("http://ruby-lang.org")
    str2 = mock('string-like also')
    str2.should_receive(:to_str).and_return("foo/bar")
    URI.join(str, str2).should == URI.parse("http://ruby-lang.org/foo/bar")
  end

  it "raises an error if given no argument" do
    lambda{ URI.join }.should raise_error
  end

  it "doesn't create redundant '/'s" do
    URI.join("http://localhost/", "/main.rbx").should == URI.parse("http://localhost/main.rbx")
  end

  it "discards arguments given before an absolute uri" do
    URI.join("http://localhost/a/b/c/d", "http://ruby-lang.com/foo", "bar").should == URI.parse("http://ruby-lang.com/bar")
  end

  it "resolves .. in paths" do
    URI.join("http://localhost/a/b/c/d", "../../e/f", "g/h/../i").to_s.should == "http://localhost/a/e/g/i"
  end
end


# assert_equal(URI.parse('http://foo/bar'), URI.join('http://foo/bar'))
# assert_equal(URI.parse('http://foo/bar'), URI.join('http://foo', 'bar'))
# assert_equal(URI.parse('http://foo/bar/'), URI.join('http://foo', 'bar/'))
#
# assert_equal(URI.parse('http://foo/baz'), URI.join('http://foo', 'bar', 'baz'))
# assert_equal(URI.parse('http://foo/baz'), URI.join('http://foo', 'bar', '/baz'))
# assert_equal(URI.parse('http://foo/baz/'), URI.join('http://foo', 'bar', '/baz/'))
# assert_equal(URI.parse('http://foo/bar/baz'), URI.join('http://foo', 'bar/', 'baz'))
# assert_equal(URI.parse('http://foo/hoge'), URI.join('http://foo', 'bar', 'baz', 'hoge'))
#
# assert_equal(URI.parse('http://foo/bar/baz'), URI.join('http://foo', 'bar/baz'))
# assert_equal(URI.parse('http://foo/bar/hoge'), URI.join('http://foo', 'bar/baz', 'hoge'))
# assert_equal(URI.parse('http://foo/bar/baz/hoge'), URI.join('http://foo', 'bar/baz/', 'hoge'))
# assert_equal(URI.parse('http://foo/hoge'), URI.join('http://foo', 'bar/baz', '/hoge'))
# assert_equal(URI.parse('http://foo/bar/hoge'), URI.join('http://foo', 'bar/baz', 'hoge'))
# assert_equal(URI.parse('http://foo/bar/baz/hoge'), URI.join('http://foo', 'bar/baz/', 'hoge'))
# assert_equal(URI.parse('http://foo/hoge'), URI.join('http://foo', 'bar/baz', '/hoge'))
