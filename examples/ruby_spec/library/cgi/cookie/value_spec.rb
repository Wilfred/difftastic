require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie#value" do
  it "returns self's value" do
    cookie = CGI::Cookie.new("test-cookie")
    cookie.value.should == []

    cookie = CGI::Cookie.new("test-cookie", "one")
    cookie.value.should == ["one"]

    cookie = CGI::Cookie.new("test-cookie", "one", "two", "three")
    cookie.value.should == ["one", "two", "three"]

    cookie = CGI::Cookie.new("name" => "test-cookie", "value" => ["one", "two", "three"])
    cookie.value.should == ["one", "two", "three"]
  end

  it "is in synch with self" do
    fail = []
    [
      :pop,
      :shift,
      [:<<, "Hello"],
      [:push, "Hello"],
      [:unshift, "World"],
      [:replace, ["A", "B"]],
      [:[]=, 1, "Set"],
      [:delete, "first"],
      [:delete_at, 0],
    ].each do |method, *args|
      cookie1 = CGI::Cookie.new("test-cookie", "first", "second")
      cookie2 = CGI::Cookie.new("test-cookie", "first", "second")
      cookie1.send(method, *args)
      cookie2.value.send(method, *args)
      fail << method unless cookie1.value == cookie2.value
    end
    fail.should be_empty
  end
end

describe "CGI::Cookie#value=" do
  before :each do
    @cookie = CGI::Cookie.new("test-cookie")
  end

  it "sets self's value" do
    @cookie.value = ["one"]
    @cookie.value.should == ["one"]

    @cookie.value = ["one", "two", "three"]
    @cookie.value.should == ["one", "two", "three"]
  end

  it "automatically converts the passed Object to an Array using #Array" do
    @cookie.value = "test"
    @cookie.value.should == ["test"]

    obj = mock("to_a")
    obj.should_receive(:to_a).and_return(["1", "2"])
    @cookie.value = obj
    @cookie.value.should == ["1", "2"]

    obj = mock("to_ary")
    obj.should_receive(:to_ary).and_return(["1", "2"])
    @cookie.value = obj
    @cookie.value.should == ["1", "2"]
  end

  it "does keep self and the values in sync" do
    @cookie.value = ["one", "two", "three"]
    @cookie[0].should == "one"
    @cookie[1].should == "two"
    @cookie[2].should == "three"
  end
end
