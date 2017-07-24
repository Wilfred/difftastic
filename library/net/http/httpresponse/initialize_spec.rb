require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#initialize when passed http_version, response_code, response_message" do
  it "sets self http_version, response_code and response_message to the passed values" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    res.http_version.should == "1.0"
    res.code.should == "???"
    res.message.should == "test response"
  end
end
