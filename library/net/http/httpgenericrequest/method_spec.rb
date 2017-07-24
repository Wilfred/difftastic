require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPGenericRequest#method" do
  it "returns self's request method" do
    request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
    request.method.should == "POST"

    request = Net::HTTPGenericRequest.new("GET", false, true, "/some/path")
    request.method.should == "GET"

    request = Net::HTTPGenericRequest.new("BLA", true, true, "/some/path")
    request.method.should == "BLA"
  end
end
