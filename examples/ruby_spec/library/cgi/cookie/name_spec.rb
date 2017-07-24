require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie#name" do
  it "returns self's name" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.name.should == "test-cookie"

    cookie = CGI::Cookie.new("name" => "another cookie")
    cookie.name.should == "another cookie"
  end
end

describe "CGI::Cookie#name=" do
  it "sets self's expiration date" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.name = "another name"
    cookie.name.should == "another name"

    cookie.name = "and one more"
    cookie.name.should == "and one more"
  end
end
