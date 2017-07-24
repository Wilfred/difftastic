require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPExceptions#response" do
  it "returns self's response" do
    exception = NetHTTPExceptionsSpecs::Simple.new("error message", "a http response")
    exception.response.should == "a http response"
  end
end
