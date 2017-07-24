require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse.body_permitted?" do
  it "returns true if this response type can have a response body" do
    Net::HTTPUnknownResponse.body_permitted?.should == true
    Net::HTTPInformation.body_permitted?.should == false
    Net::HTTPSuccess.body_permitted?.should == true
    Net::HTTPRedirection.body_permitted?.should == true
    Net::HTTPClientError.body_permitted?.should == true
    Net::HTTPServerError.body_permitted?.should == true
  end
end
