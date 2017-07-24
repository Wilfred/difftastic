require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#params" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    ENV['QUERY_STRING'], @old_query_string = "one=a&two=b&two=c&three", ENV['QUERY_STRING']
    @cgi = CGI.new
  end

  after :each do
    ENV['QUERY_STRING'] = @old_query_string
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns the parsed HTTP Query Params" do
    @cgi.params.should == {"three"=>[], "two"=>["b", "c"], "one"=>["a"]}
  end
end

describe "CGI::QueryExtension#params=" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "sets the HTTP Query Params to the passed argument" do
    @cgi.params.should == {}

    @cgi.params = {"one"=>["a"], "two"=>["b", "c"]}
    @cgi.params.should == {"one"=>["a"], "two"=>["b", "c"]}
  end
end
