require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie#domain" do
  it "returns self's domain" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.domain.should be_nil

    cookie = CGI::Cookie.new("name" => "test-cookie", "domain" => "example.com")
    cookie.domain.should == "example.com"
  end
end

describe "CGI::Cookie#domain=" do
  it "sets self's domain" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.domain = "test.com"
    cookie.domain.should == "test.com"

    cookie.domain = "example.com"
    cookie.domain.should == "example.com"
  end
end
