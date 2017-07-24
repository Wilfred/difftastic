require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse.exception_type" do
  it "returns self's 'EXCEPTION_TYPE' constant" do
    Net::HTTPUnknownResponse.exception_type.should == Net::HTTPError
    Net::HTTPInformation.exception_type.should == Net::HTTPError
    Net::HTTPSuccess.exception_type.should == Net::HTTPError
    Net::HTTPRedirection.exception_type.should == Net::HTTPRetriableError
    Net::HTTPClientError.exception_type.should == Net::HTTPServerException
    Net::HTTPServerError.exception_type.should == Net::HTTPFatalError
  end
end
