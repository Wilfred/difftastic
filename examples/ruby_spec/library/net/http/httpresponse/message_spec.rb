require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#message" do
  it "returns self's response message" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    res.message.should == "test response"
  end
end
