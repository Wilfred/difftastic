require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#remote_host" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['REMOTE_HOST']" do
    old_value, ENV['REMOTE_HOST'] = ENV['REMOTE_HOST'], "test.host"
    begin
      @cgi.remote_host.should == "test.host"
    ensure
      ENV['REMOTE_HOST'] = old_value
    end
  end
end
