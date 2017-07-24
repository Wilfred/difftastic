require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#server_software" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['SERVER_SOFTWARE']" do
    old_value, ENV['SERVER_SOFTWARE'] = ENV['SERVER_SOFTWARE'], "Server/1.0.0"
    begin
      @cgi.server_software.should == "Server/1.0.0"
    ensure
      ENV['SERVER_SOFTWARE'] = old_value
    end
  end
end
