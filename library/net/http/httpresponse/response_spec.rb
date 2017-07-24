require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#response" do
  it "returns self" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    res.response.should equal(res)
  end
end
