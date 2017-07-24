require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require "stringio"

describe "Net::HTTPResponse#inspect" do
  it "returns a String representation of self" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    res.inspect.should == "#<Net::HTTPUnknownResponse ??? test response readbody=false>"

    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    socket = Net::BufferedIO.new(StringIO.new("test body"))
    res.reading_body(socket, true) {}
    res.inspect.should == "#<Net::HTTPUnknownResponse ??? test response readbody=true>"
  end
end
