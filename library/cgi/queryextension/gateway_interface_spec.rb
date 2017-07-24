require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#gateway_interface" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['GATEWAY_INTERFACE']" do
    old_value, ENV['GATEWAY_INTERFACE'] = ENV['GATEWAY_INTERFACE'], "CGI/1.1"
    begin
      @cgi.gateway_interface.should == "CGI/1.1"
    ensure
      ENV['GATEWAY_INTERFACE'] = old_value
    end
  end
end
