require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#http_version" do
  it "returns self's http version" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    res.http_version.should == "1.0"

    res = Net::HTTPUnknownResponse.new("1.1", "???", "test response")
    res.http_version.should == "1.1"
  end
end
