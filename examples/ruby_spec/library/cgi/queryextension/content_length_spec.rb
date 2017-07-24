require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::QueryExtension#content_length" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "returns ENV['CONTENT_LENGTH'] as Integer" do
    old_value = ENV['CONTENT_LENGTH']
    begin
      ENV['CONTENT_LENGTH'] = nil
      @cgi.content_length.should be_nil

      ENV['CONTENT_LENGTH'] = "100"
      @cgi.content_length.should eql(100)
    ensure
      ENV['CONTENT_LENGTH'] = old_value
    end
  end
end
