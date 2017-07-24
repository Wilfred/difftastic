require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#path_info" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['PATH_INFO']" do
    old_value, ENV['PATH_INFO'] = ENV['PATH_INFO'], "/test/path"
    begin
      @cgi.path_info.should == "/test/path"
    ensure
      ENV['PATH_INFO'] = old_value
    end
  end
end
