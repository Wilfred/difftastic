require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#server_protocol" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['SERVER_PROTOCOL']" do
    old_value, ENV['SERVER_PROTOCOL'] = ENV['SERVER_PROTOCOL'], "HTTP/1.1"
    begin
      @cgi.server_protocol.should == "HTTP/1.1"
    ensure
      ENV['SERVER_PROTOCOL'] = old_value
    end
  end
end
