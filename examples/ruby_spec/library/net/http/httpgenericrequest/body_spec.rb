require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require "stringio"

describe "Net::HTTPGenericRequest#body" do
  it "returns self's request body" do
    request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
    request.body.should be_nil

    request.body = "Some Content"
    request.body.should == "Some Content"
  end
end

describe "Net::HTTPGenericRequest#body=" do
  before :each do
    @request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
  end

  it "sets self's body content to the passed String" do
    @request.body = "Some Content"
    @request.body.should == "Some Content"
  end

  it "sets self's body stream to nil" do
    @request.body_stream = StringIO.new("")
    @request.body = "Some Content"
    @request.body_stream.should be_nil
  end
end
