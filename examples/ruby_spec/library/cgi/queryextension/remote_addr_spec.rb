require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#remote_addr" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['REMOTE_ADDR']" do
    old_value, ENV['REMOTE_ADDR'] = ENV['REMOTE_ADDR'], "127.0.0.1"
    begin
      @cgi.remote_addr.should == "127.0.0.1"
    ensure
      ENV['REMOTE_ADDR'] = old_value
    end
  end
end
