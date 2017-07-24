require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/http_server', __FILE__)

describe "Net::HTTP#send_request" do
  before :each do
    NetHTTPSpecs.start_server
    @http = Net::HTTP.start("localhost", NetHTTPSpecs.port)
  end

  after :each do
    @http.finish if @http.started?
    NetHTTPSpecs.stop_server
  end

  # TODO: Does only work with GET and POST requests
  describe "when passed type, path" do
    it "sends a HTTP Request of the passed type to the passed path" do
      response = @http.send_request("GET", "/request")
      response.body.should == "Request type: GET"

      # response = @http.send_request("HEAD", "/request")
      # response.body.should be_nil

      response = @http.send_request("POST", "/request")
      response.body.should == "Request type: POST"

      # response = @http.send_request("PUT", "/request")
      # response.body.should == "Request type: PUT"

      # response = @http.send_request("DELETE", "/request")
      # response.body.should == "Request type: DELETE"

      # response = @http.send_request("PROPGET", "/request")
      # response.body.should == "Request type: DELETE"

      # response = @http.send_request("PROPSET", "/request")
      # response.body.should == "Request type: DELETE"

      # response = @http.send_request("OPTIONS", "/request")
      # response.body.should be_nil

      # response = @http.send_request("LOCK", "/request")
      # response.body.should == "Request type: LOCK

      # response = @http.send_request("UNLOCK", "/request")
      # response.body.should == "Request type: UNLOCK
    end
  end

  describe "when passed type, path, body" do
    it "sends a HTTP Request with the passed body" do
      response = @http.send_request("GET", "/request/body", "test=test")
      response.body.should == "test=test"

      # response = @http.send_request("HEAD", "/request/body", "test=test")
      # response.body.should be_nil

      response = @http.send_request("POST", "/request/body", "test=test")
      response.body.should == "test=test"

      # response = @http.send_request("PUT", "/request/body", "test=test")
      # response.body.should == "test=test"

      # response = @http.send_request("DELETE", "/request/body", "test=test")
      # response.body.should == "test=test"

      # response = @http.send_request("PROPGET", "/request/body", "test=test")
      # response.body.should == "test=test"

      # response = @http.send_request("PROPSET", "/request/body", "test=test")
      # response.body.should == "test=test"

      # response = @http.send_request("OPTIONS", "/request/body", "test=test")
      # response.body.should be_nil

      # response = @http.send_request("LOCK", "/request/body", "test=test")
      # response.body.should == "test=test"

      # response = @http.send_request("UNLOCK", "/request/body", "test=test")
      # response.body.should == "test=test"
    end
  end

  describe "when passed type, path, body, headers" do
    it "sends a HTTP Request with the passed headers" do
      response = @http.send_request("GET", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      response.body.should include('"referer"=>["http://www.rubyspec.org"]')

      # response = @http.send_request("HEAD", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      # response.body.should be_nil

      response = @http.send_request("POST", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      response.body.should include('"referer"=>["http://www.rubyspec.org"]')

      # response = @http.send_request("PUT", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      # response.body.should include('"referer"=>["http://www.rubyspec.org"]')

      # response = @http.send_request("DELETE", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      # response.body.should include('"referer"=>["http://www.rubyspec.org"]')

      # response = @http.send_request("PROPGET", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      # response.body.should include('"referer"=>["http://www.rubyspec.org"]')

      # response = @http.send_request("PROPSET", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      # response.body.should include('"referer"=>["http://www.rubyspec.org"]')

      # response = @http.send_request("OPTIONS", "/request/body", "test=test", "referer" => "http://www.rubyspec.org")
      # response.body.should be_nil

      # response = @http.send_request("LOCK", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      # response.body.should include('"referer"=>["http://www.rubyspec.org"]')

      # response = @http.send_request("UNLOCK", "/request/header", "test=test", "referer" => "http://www.rubyspec.org")
      # response.body.should include('"referer"=>["http://www.rubyspec.org"]')
    end
  end
end
