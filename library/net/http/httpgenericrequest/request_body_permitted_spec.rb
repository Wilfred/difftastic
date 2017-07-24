require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPGenericRequest#request_body_permitted?" do
  it "returns true when the request is expected to have a body" do
    request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
    request.request_body_permitted?.should be_true

    request = Net::HTTPGenericRequest.new("POST", false, true, "/some/path")
    request.request_body_permitted?.should be_false
  end
end
