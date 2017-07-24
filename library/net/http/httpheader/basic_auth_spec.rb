require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#basic_auth when passed account, password" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "sets the 'Authorization' Header entry for basic authorization" do
    @headers.basic_auth("rubyspec", "rocks")
    @headers["Authorization"].should == "Basic cnVieXNwZWM6cm9ja3M="
  end
end
