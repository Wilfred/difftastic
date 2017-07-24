require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#user_agent" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['HTTP_USER_AGENT']" do
    old_value, ENV['HTTP_USER_AGENT'] = ENV['HTTP_USER_AGENT'], "Mozilla/5.0 (Macintosh; U; Intel Mac OS X 10_5_2; de-de) AppleWebKit/527+ (KHTML, like Gecko) Version/3.1 Safari/525.13"
    begin
      @cgi.user_agent.should == "Mozilla/5.0 (Macintosh; U; Intel Mac OS X 10_5_2; de-de) AppleWebKit/527+ (KHTML, like Gecko) Version/3.1 Safari/525.13"
    ensure
      ENV['HTTP_USER_AGENT'] = old_value
    end
  end
end
