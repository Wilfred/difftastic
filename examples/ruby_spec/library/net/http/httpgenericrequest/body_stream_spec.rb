require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require "stringio"

describe "Net::HTTPGenericRequest#body_stream" do
  it "returns self's body stream Object" do
    request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
    request.body_stream.should be_nil

    stream = StringIO.new("test")
    request.body_stream = stream
    request.body_stream.should equal(stream)
  end
end

describe "Net::HTTPGenericRequest#body_stream=" do
  before :each do
    @request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
    @stream = StringIO.new("test")
  end

  it "sets self's body stream to the passed Object" do
    @request.body_stream = @stream
    @request.body_stream.should equal(@stream)
  end

  it "sets self's body to nil" do
    @request.body = "Some Content"
    @request.body_stream = @stream
    @request.body.should be_nil
  end
end
