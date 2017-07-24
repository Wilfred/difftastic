require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#code" do
  it "returns the result code string" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    res.code.should == "???"

    res = Net::HTTPInformation.new("1.0", "1xx", "test response")
    res.code.should == "1xx"

    res = Net::HTTPSuccess.new("1.0", "2xx", "test response")
    res.code.should == "2xx"

    res = Net::HTTPRedirection.new("1.0", "3xx", "test response")
    res.code.should == "3xx"

    res = Net::HTTPClientError.new("1.0", "4xx", "test response")
    res.code.should == "4xx"

    res = Net::HTTPServerError.new("1.0", "5xx", "test response")
    res.code.should == "5xx"
  end
end
