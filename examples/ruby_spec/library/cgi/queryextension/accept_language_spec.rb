require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#accept_language" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_ACCEPT_LANGUAGE']" do
    old_value, ENV['HTTP_ACCEPT_LANGUAGE'] = ENV['HTTP_ACCEPT_LANGUAGE'], "en-us,en;q=0.5"
    begin
      @cgi.accept_language.should == "en-us,en;q=0.5"
    ensure
      ENV['HTTP_ACCEPT_LANGUAGE'] = old_value
    end
  end
end
