require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#[]" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    ENV['QUERY_STRING'], @old_query_string = "one=a&two=b&two=c", ENV['QUERY_STRING']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
    ENV['QUERY_STRING']   = @old_query_string
  end

  it "it returns the value for the parameter with the given key" do
    @cgi["one"].should == "a"
  end

  it "only returns the first value for parameters with multiple values" do
    @cgi["two"].should == "b"
  end

  it "returns a String" do
    @cgi["one"].should be_kind_of(String)
  end
end
