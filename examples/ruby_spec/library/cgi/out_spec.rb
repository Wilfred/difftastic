require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI#out" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
    $stdout, @old_stdout = IOStub.new, $stdout
  end

  after :each do
    $stdout = @old_stdout
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "it writes a HTMl header based on the passed argument to $stdout" do
    @cgi.out { "" }
    $stdout.should == "Content-Type: text/html\r\nContent-Length: 0\r\n\r\n"
  end

  it "appends the block's return value to the HTML header" do
    @cgi.out { "test!" }
    $stdout.should == "Content-Type: text/html\r\nContent-Length: 5\r\n\r\ntest!"
  end

  it "automatically sets the Content-Length Header based on the block's return value" do
    @cgi.out { "0123456789" }
    $stdout.should == "Content-Type: text/html\r\nContent-Length: 10\r\n\r\n0123456789"
  end

  it "includes Cookies in the @output_cookies field" do
    @cgi.instance_variable_set(:@output_cookies, ["multiple", "cookies"])
    @cgi.out { "" }
    $stdout.should == "Content-Type: text/html\r\nContent-Length: 0\r\nSet-Cookie: multiple\r\nSet-Cookie: cookies\r\n\r\n"
  end
end

describe "CGI#out when passed no block" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "raises a LocalJumpError" do
    lambda { @cgi.out }.should raise_error(LocalJumpError)
  end
end
