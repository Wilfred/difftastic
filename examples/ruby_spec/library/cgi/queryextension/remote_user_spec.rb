require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#remote_user" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['REMOTE_USER']" do
    old_value, ENV['REMOTE_USER'] = ENV['REMOTE_USER'], "username"
    begin
      @cgi.remote_user.should == "username"
    ensure
      ENV['REMOTE_USER'] = old_value
    end
  end
end
