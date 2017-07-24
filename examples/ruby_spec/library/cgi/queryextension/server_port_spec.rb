require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#server_port" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['SERVER_PORT'] as Integer" do
    old_value = ENV['SERVER_PORT']
    begin
      ENV['SERVER_PORT'] = nil
      @cgi.server_port.should be_nil

      ENV['SERVER_PORT'] = "3000"
      @cgi.server_port.should eql(3000)
    ensure
      ENV['SERVER_PORT'] = old_value
    end
  end
end
