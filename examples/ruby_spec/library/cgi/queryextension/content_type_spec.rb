require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#content_type" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['CONTENT_TYPE']" do
    old_value, ENV['CONTENT_TYPE'] = ENV['CONTENT_TYPE'], "text/html"
    begin
      @cgi.content_type.should == "text/html"
    ensure
      ENV['CONTENT_TYPE'] = old_value
    end
  end
end
