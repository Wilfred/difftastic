require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require "stringio"

describe "CGI::QueryExtension#multipart?" do
  before :each do
    @old_stdin = $stdin

    @old_request_method = ENV['REQUEST_METHOD']
    @old_content_type = ENV['CONTENT_TYPE']
    @old_content_length = ENV['CONTENT_LENGTH']

    ENV['REQUEST_METHOD'] = "POST"
    ENV["CONTENT_TYPE"] = "multipart/form-data; boundary=---------------------------1137522503144128232716531729"
    ENV["CONTENT_LENGTH"] = "222"

    $stdin = StringIO.new <<-EOS
-----------------------------1137522503144128232716531729\r
Content-Disposition: form-data; name="file"; filename=""\r
Content-Type: application/octet-stream\r
\r
\r
-----------------------------1137522503144128232716531729--\r
EOS

    @cgi = CGI.new
  end

  after :each do
    $stdin = @old_stdin

    ENV['REQUEST_METHOD'] = @old_request_method
    ENV['CONTENT_TYPE'] = @old_content_type
    ENV['CONTENT_LENGTH'] = @old_content_length
  end

  it "returns true if the current Request is a multipart request" do
    @cgi.multipart?.should be_true
  end
end
