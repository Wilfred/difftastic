require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#value" do
  it "raises an HTTP error for non 2xx HTTP Responses" do
    res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    lambda { res.value }.should raise_error(Net::HTTPError)

    res = Net::HTTPInformation.new("1.0", "1xx", "test response")
    lambda { res.value }.should raise_error(Net::HTTPError)

    res = Net::HTTPSuccess.new("1.0", "2xx", "test response")
    lambda { res.value }.should_not raise_error(Net::HTTPError)

    res = Net::HTTPRedirection.new("1.0", "3xx", "test response")
    lambda { res.value }.should raise_error(Net::HTTPRetriableError)

    res = Net::HTTPClientError.new("1.0", "4xx", "test response")
    lambda { res.value }.should raise_error(Net::HTTPServerException)

    res = Net::HTTPServerError.new("1.0", "5xx", "test response")
    lambda { res.value }.should raise_error(Net::HTTPFatalError)
  end
end
