require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#script_name" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['SCRIPT_NAME']" do
    old_value, ENV['SCRIPT_NAME'] = ENV['SCRIPT_NAME'], "/path/to/script.rb"
    begin
      @cgi.script_name.should == "/path/to/script.rb"
    ensure
      ENV['SCRIPT_NAME'] = old_value
    end
  end
end
