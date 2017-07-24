require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#code_type" do
  it "returns self's class" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    res.code_type.should == Net::HTTPUnknownResponse

    res = Net::HTTPInformation.new("1.0", "1xx", "test response")
    res.code_type.should == Net::HTTPInformation

    res = Net::HTTPSuccess.new("1.0", "2xx", "test response")
    res.code_type.should == Net::HTTPSuccess

    res = Net::HTTPRedirection.new("1.0", "3xx", "test response")
    res.code_type.should == Net::HTTPRedirection

    res = Net::HTTPClientError.new("1.0", "4xx", "test response")
    res.code_type.should == Net::HTTPClientError

    res = Net::HTTPServerError.new("1.0", "5xx", "test response")
    res.code_type.should == Net::HTTPServerError
  end
end
