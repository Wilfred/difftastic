require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie.parse" do
  it "parses a raw cookie string into a hash of Cookies" do
    expected = { "test-cookie" => ["one", "two", "three"] }
    CGI::Cookie.parse("test-cookie=one&two&three").should == expected

    expected = { "second cookie" => ["three", "four"], "first cookie" => ["one", "two"] }
    CGI::Cookie.parse("first cookie=one&two;second cookie=three&four").should == expected
  end

  it "unescapes the Cookie values" do
    cookie = "test-cookie=+%21%22%23%24%25%26%27%28%29%2A%2B%2C-.%2F0123456789%3A%3B%3C%3D%3E%3F%40ABCDEFGHIJKLMNOPQRSTUVWXYZ%5B%5C%5D%5E_%60abcdefghijklmnopqrstuvwxyz%7B%7C%7D%7E"
    expected = { "test-cookie" => [ " !\"\#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~" ] }
    CGI::Cookie.parse(cookie).should == expected
  end
end
