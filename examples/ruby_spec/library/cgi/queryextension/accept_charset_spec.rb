require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#accept_charset" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_ACCEPT_CHARSET']" do
    old_value, ENV['HTTP_ACCEPT_CHARSET'] = ENV['HTTP_ACCEPT_CHARSET'], "ISO-8859-1,utf-8;q=0.7,*;q=0.7"
    begin
      @cgi.accept_charset.should == "ISO-8859-1,utf-8;q=0.7,*;q=0.7"
    ensure
      ENV['HTTP_ACCEPT_CHARSET'] = old_value
    end
  end
end
