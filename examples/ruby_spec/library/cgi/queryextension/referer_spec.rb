require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#referer" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_REFERER']" do
    old_value, ENV['HTTP_REFERER'] = ENV['HTTP_REFERER'], "example.com"
    begin
      @cgi.referer.should == "example.com"
    ensure
      ENV['HTTP_REFERER'] = old_value
    end
  end
end
