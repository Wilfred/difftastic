require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#error_type" do
  it "returns self's class 'EXCEPTION_TYPE' constant" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    res.error_type.should == Net::HTTPError

    res = Net::HTTPInformation.new("1.0", "1xx", "test response")
    res.error_type.should == Net::HTTPError

    res = Net::HTTPSuccess.new("1.0", "2xx", "test response")
    res.error_type.should == Net::HTTPError

    res = Net::HTTPRedirection.new("1.0", "3xx", "test response")
    res.error_type.should == Net::HTTPRetriableError

    res = Net::HTTPClientError.new("1.0", "4xx", "test response")
    res.error_type.should == Net::HTTPServerException

    res = Net::HTTPServerError.new("1.0", "5xx", "test response")
    res.error_type.should == Net::HTTPFatalError
  end
end
