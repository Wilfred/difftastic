require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/http_server', __FILE__)

describe "Net::HTTP.post_form when passed URI" do
  before :each do
    NetHTTPSpecs.start_server
    @port = NetHTTPSpecs.port
  end

  after :each do
    NetHTTPSpecs.stop_server
  end

  it "POSTs the passed form data to the given uri" do
    uri = URI.parse("http://localhost:#{@port}/request/body")
    data = { test: :data }

    res = Net::HTTP.post_form(uri, data)
    res.body.should == "test=data"
  end
end
