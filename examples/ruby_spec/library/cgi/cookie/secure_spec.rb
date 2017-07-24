require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie#secure" do
  before :each do
    @cookie = CGI::Cookie.new("test-cookie")
  end

  it "returns whether self is a secure cookie or not" do
    @cookie.secure = true
    @cookie.secure.should be_true

    @cookie.secure = false
    @cookie.secure.should be_false
  end
end

describe "CGI::Cookie#secure= when passed true" do
  before :each do
    @cookie = CGI::Cookie.new("test-cookie")
  end

  it "returns true" do
    (@cookie.secure = true).should be_true
  end

  it "sets self to a secure cookie" do
    @cookie.secure = true
    @cookie.secure.should be_true
  end
end

describe "CGI::Cookie#secure= when passed false" do
  before :each do
    @cookie = CGI::Cookie.new("test-cookie")
  end

  it "returns false" do
    (@cookie.secure = false).should be_false
  end

  it "sets self to a non-secure cookie" do
    @cookie.secure = false
    @cookie.secure.should be_false
  end
end

describe "CGI::Cookie#secure= when passed Object" do
  before :each do
    @cookie = CGI::Cookie.new("test-cookie")
  end

  it "does not change self's secure value" do
    @cookie.secure = false

    @cookie.secure = Object.new
    @cookie.secure.should be_false

    @cookie.secure = "Test"
    @cookie.secure.should be_false

    @cookie.secure = true

    @cookie.secure = Object.new
    @cookie.secure.should be_true

    @cookie.secure = "Test"
    @cookie.secure.should be_true
  end
end
