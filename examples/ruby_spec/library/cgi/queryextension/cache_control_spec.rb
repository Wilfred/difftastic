require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#cache_control" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_CACHE_CONTROL']" do
    old_value, ENV['HTTP_CACHE_CONTROL'] = ENV['HTTP_CACHE_CONTROL'], "no-cache"
    begin
      @cgi.cache_control.should == "no-cache"
    ensure
      ENV['HTTP_CACHE_CONTROL'] = old_value
    end
  end
end
