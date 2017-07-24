require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPGenericRequest#response_body_permitted?" do
  it "returns true when the response is expected to have a body" do
    request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
    request.response_body_permitted?.should be_true

    request = Net::HTTPGenericRequest.new("POST", true, false, "/some/path")
    request.response_body_permitted?.should be_false
  end
end
