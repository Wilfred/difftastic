require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#query_string" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['QUERY_STRING']" do
    old_value, ENV['QUERY_STRING'] = ENV['QUERY_STRING'], "one=a&two=b"
    begin
      @cgi.query_string.should == "one=a&two=b"
    ensure
      ENV['QUERY_STRING'] = old_value
    end
  end
end
