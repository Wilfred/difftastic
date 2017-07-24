require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#from" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_FROM']" do
    old_value, ENV['HTTP_FROM'] = ENV['HTTP_FROM'], "googlebot(at)googlebot.com"
    begin
      @cgi.from.should == "googlebot(at)googlebot.com"
    ensure
      ENV['HTTP_FROM'] = old_value
    end
  end
end
