require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie#path" do
  it "returns self's path" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.path.should == ""

    cookie = CGI::Cookie.new("name" => "test-cookie", "path" => "/some/path/")
    cookie.path.should == "/some/path/"
  end
end

describe "CGI::Cookie#path=" do
  it "sets self's path" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.path = "/some/path/"
    cookie.path.should == "/some/path/"

    cookie.path = "/another/path/"
    cookie.path.should == "/another/path/"
  end
end
