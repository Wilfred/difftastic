require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#pragma" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_PRAGMA']" do
    old_value, ENV['HTTP_PRAGMA'] = ENV['HTTP_PRAGMA'], "no-cache"
    begin
      @cgi.pragma.should == "no-cache"
    ensure
      ENV['HTTP_PRAGMA'] = old_value
    end
  end
end
