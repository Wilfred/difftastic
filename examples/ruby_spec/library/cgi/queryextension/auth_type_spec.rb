require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#auth_type" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['AUTH_TYPE']" do
    old_value, ENV['AUTH_TYPE'] = ENV['AUTH_TYPE'], "Basic"
    begin
      @cgi.auth_type.should == "Basic"
    ensure
      ENV['AUTH_TYPE'] = old_value
    end
  end
end
