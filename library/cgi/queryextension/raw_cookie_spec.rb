require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#raw_cookie" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_COOKIE']" do
    old_value, ENV['HTTP_COOKIE'] = ENV['HTTP_COOKIE'], "some_cookie=data"
    begin
      @cgi.raw_cookie.should == "some_cookie=data"
    ensure
      ENV['HTTP_COOKIE'] = old_value
    end
  end
end
