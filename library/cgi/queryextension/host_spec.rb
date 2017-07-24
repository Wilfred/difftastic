require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#host" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_HOST']" do
    old_value, ENV['HTTP_HOST'] = ENV['HTTP_HOST'], "localhost"
    begin
      @cgi.host.should == "localhost"
    ensure
      ENV['HTTP_HOST'] = old_value
    end
  end
end
