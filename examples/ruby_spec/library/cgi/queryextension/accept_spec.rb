require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#accept" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_ACCEPT']" do
    old_value, ENV['HTTP_ACCEPT'] = ENV['HTTP_ACCEPT'], "text/xml,application/xml,application/xhtml+xml,text/html;q=0.9,text/plain;q=0.8,image/png,*/*;q=0.5"
    begin
      @cgi.accept.should == "text/xml,application/xml,application/xhtml+xml,text/html;q=0.9,text/plain;q=0.8,image/png,*/*;q=0.5"
    ensure
      ENV['HTTP_ACCEPT'] = old_value
    end
  end
end
