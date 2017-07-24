require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie#to_s" do
  it "returns a String representation of self" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.to_s.should == "test-cookie=; path="

    cookie = CGI::Cookie.new("test-cookie", "value")
    cookie.to_s.should == "test-cookie=value; path="

    cookie = CGI::Cookie.new("test-cookie", "one", "two", "three")
    cookie.to_s.should == "test-cookie=one&two&three; path="

    cookie = CGI::Cookie.new(
      'name'    => 'test-cookie',
      'value'   => ["one", "two", "three"],
      'path'    => 'some/path/',
      'domain'  => 'example.com',
      'expires' => Time.at(1196524602),
      'secure'  => true)
    cookie.to_s.should == "test-cookie=one&two&three; domain=example.com; path=some/path/; expires=Sat, 01 Dec 2007 15:56:42 GMT; secure"
  end

  it "escapes the self's values" do
    cookie = CGI::Cookie.new("test-cookie", " !\"\#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}")
    cookie.to_s.should == "test-cookie=+%21%22%23%24%25%26%27%28%29%2A%2B%2C-.%2F0123456789%3A%3B%3C%3D%3E%3F%40ABCDEFGHIJKLMNOPQRSTUVWXYZ%5B%5C%5D%5E_%60abcdefghijklmnopqrstuvwxyz%7B%7C%7D; path="
  end

  ruby_version_is ""..."2.5" do
    it "escapes tilde" do
      cookie = CGI::Cookie.new("test-cookie", "~").to_s.should == "test-cookie=%7E; path="
    end
  end

  ruby_version_is "2.5" do
    it "does not escape tilde" do
      cookie = CGI::Cookie.new("test-cookie", "~").to_s.should == "test-cookie=~; path="
    end
  end

end
