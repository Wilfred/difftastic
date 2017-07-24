require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

module NetHTTPRequestSpecs
  class TestRequest < Net::HTTPRequest
    METHOD = "TEST"
    REQUEST_HAS_BODY  = false
    RESPONSE_HAS_BODY = true
  end
end

describe "Net::HTTPRequest#initialize" do
  before :each do
    @req = NetHTTPRequestSpecs::TestRequest.allocate
  end

  it "uses the METHOD constants to set the request method" do
    @req.send(:initialize, "/some/path")
    @req.method.should == "TEST"
  end

  it "uses the REQUEST_HAS_BODY to set whether the Request has a body or not" do
    @req.send(:initialize, "/some/path")
    @req.request_body_permitted?.should be_false
  end

  it "uses the RESPONSE_HAS_BODY to set whether the Response can have a body or not" do
    @req.send(:initialize, "/some/path")
    @req.response_body_permitted?.should be_true
  end

  describe "when passed path" do
    it "sets self's path to the passed path" do
      @req.send(:initialize, "/some/path")
      @req.path.should == "/some/path"
    end
  end

  describe "when passed path, headers" do
    it "uses the passed headers Hash to initialize self's header entries" do
      @req.send(:initialize, "/some/path", "Content-Type" => "text/html")
      @req["Content-Type"].should == "text/html"
    end
  end
end
