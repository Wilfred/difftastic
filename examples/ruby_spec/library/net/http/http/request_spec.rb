require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/http_server', __FILE__)

describe "Net::HTTP#request" do
  before :each do
    NetHTTPSpecs.start_server
    @http = Net::HTTP.start("localhost", NetHTTPSpecs.port)
  end

  after :each do
    @http.finish if @http.started?
    NetHTTPSpecs.stop_server
  end

  describe "when passed request_object" do
    it "makes a HTTP Request based on the passed request_object" do
      response = @http.request(Net::HTTP::Get.new("/request"), "test=test")
      response.body.should == "Request type: GET"

      response = @http.request(Net::HTTP::Head.new("/request"), "test=test")
      response.body.should be_nil

      response = @http.request(Net::HTTP::Post.new("/request"), "test=test")
      response.body.should == "Request type: POST"

      response = @http.request(Net::HTTP::Put.new("/request"), "test=test")
      response.body.should == "Request type: PUT"

      response = @http.request(Net::HTTP::Proppatch.new("/request"), "test=test")
      response.body.should == "Request type: PROPPATCH"

      response = @http.request(Net::HTTP::Lock.new("/request"), "test=test")
      response.body.should == "Request type: LOCK"

      response = @http.request(Net::HTTP::Unlock.new("/request"), "test=test")
      response.body.should == "Request type: UNLOCK"

      # TODO: Does not work?
      #response = @http.request(Net::HTTP::Options.new("/request"), "test=test")
      #response.body.should be_nil

      response = @http.request(Net::HTTP::Propfind.new("/request"), "test=test")
      response.body.should == "Request type: PROPFIND"

      response = @http.request(Net::HTTP::Delete.new("/request"), "test=test")
      response.body.should == "Request type: DELETE"

      response = @http.request(Net::HTTP::Move.new("/request"), "test=test")
      response.body.should == "Request type: MOVE"

      response = @http.request(Net::HTTP::Copy.new("/request"), "test=test")
      response.body.should == "Request type: COPY"

      response = @http.request(Net::HTTP::Mkcol.new("/request"), "test=test")
      response.body.should == "Request type: MKCOL"

      response = @http.request(Net::HTTP::Trace.new("/request"), "test=test")
      response.body.should == "Request type: TRACE"
    end
  end

  describe "when passed request_object and request_body" do
    it "sends the passed request_body when making the HTTP Request" do
      response = @http.request(Net::HTTP::Get.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Head.new("/request/body"), "test=test")
      response.body.should be_nil

      response = @http.request(Net::HTTP::Post.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Put.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Proppatch.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Lock.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Unlock.new("/request/body"), "test=test")
      response.body.should == "test=test"

      # TODO: Does not work?
      #response = @http.request(Net::HTTP::Options.new("/request/body"), "test=test")
      #response.body.should be_nil

      response = @http.request(Net::HTTP::Propfind.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Delete.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Move.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Copy.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Mkcol.new("/request/body"), "test=test")
      response.body.should == "test=test"

      response = @http.request(Net::HTTP::Trace.new("/request/body"), "test=test")
      response.body.should == "test=test"
    end
  end
end
