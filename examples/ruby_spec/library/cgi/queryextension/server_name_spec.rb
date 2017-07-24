require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#server_name" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['SERVER_NAME']" do
    old_value, ENV['SERVER_NAME'] = ENV['SERVER_NAME'], "localhost"
    begin
      @cgi.server_name.should == "localhost"
    ensure
      ENV['SERVER_NAME'] = old_value
    end
  end
end
