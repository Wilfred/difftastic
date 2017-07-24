require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie#expires" do
  it "returns self's expiration date" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.expires.should be_nil

    cookie = CGI::Cookie.new("name" => "test-cookie", "expires" => Time.at(1196524602))
    cookie.expires.should == Time.at(1196524602)
  end
end

describe "CGI::Cookie#expires=" do
  it "sets self's expiration date" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.expires = Time.at(1196524602)
    cookie.expires.should == Time.at(1196524602)

    cookie.expires = Time.at(1196525000)
    cookie.expires.should == Time.at(1196525000)
  end
end
