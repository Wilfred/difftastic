require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/http_server', __FILE__)

describe "Net::HTTP.get_print" do
  before :each do
    NetHTTPSpecs.start_server
    @port = NetHTTPSpecs.port
  end

  after :each do
    NetHTTPSpecs.stop_server
  end

  describe "when passed URI" do
    it "it prints the body of the specified uri to $stdout" do
      lambda do
        Net::HTTP.get_print URI.parse("http://localhost:#{@port}/")
      end.should output(/This is the index page\./)
    end
  end

  describe "when passed host, path, port" do
    it "it prints the body of the specified uri to $stdout" do
      lambda do
        Net::HTTP.get_print 'localhost', "/", @port
      end.should output(/This is the index page\./)
    end
  end
end
