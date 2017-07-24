require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe :cgi_http_header, shared: true do
  describe "CGI#http_header when passed no arguments" do
    before :each do
      ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
      @cgi = CGI.new
    end

    after :each do
      ENV['REQUEST_METHOD'] = @old_request_method
    end


    it "returns a HTTP header specifiying the Content-Type as text/html" do
      @cgi.send(@method).should == "Content-Type: text/html\r\n\r\n"
    end

    it "includes Cookies in the @output_cookies field" do
      @cgi.instance_variable_set(:@output_cookies, ["multiple", "cookies"])
      @cgi.send(@method).should == "Content-Type: text/html\r\nSet-Cookie: multiple\r\nSet-Cookie: cookies\r\n\r\n"
    end
  end

  describe "CGI#http_header when passed String" do
    before :each do
      ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
      @cgi = CGI.new
    end

    after :each do
      ENV['REQUEST_METHOD'] = @old_request_method
    end


    it "returns a HTTP header specifiying the Content-Type as the passed String's content" do
      @cgi.send(@method, "text/plain").should == "Content-Type: text/plain\r\n\r\n"
    end

    it "includes Cookies in the @output_cookies field" do
      @cgi.instance_variable_set(:@output_cookies, ["multiple", "cookies"])
      @cgi.send(@method, "text/plain").should == "Content-Type: text/plain\r\nSet-Cookie: multiple\r\nSet-Cookie: cookies\r\n\r\n"
    end
  end

  describe "CGI#http_header when passed Hash" do
    before :each do
      ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
      @cgi = CGI.new
    end

    after :each do
      ENV['REQUEST_METHOD'] = @old_request_method
    end


    it "returns a HTTP header based on the Hash's key/value pairs" do
      header = @cgi.send(@method, "type" => "text/plain")
      header.should == "Content-Type: text/plain\r\n\r\n"

      header = @cgi.send(@method, "type" => "text/plain", "charset" => "UTF-8")
      header.should == "Content-Type: text/plain; charset=UTF-8\r\n\r\n"

      header = @cgi.send(@method, "nph" => true)
      header.should include("HTTP/1.0 200 OK\r\n")
      header.should include("Date: ")
      header.should include("Server: ")
      header.should include("Connection: close\r\n")
      header.should include("Content-Type: text/html\r\n")

      header = @cgi.send(@method, "status" => "OK")
      header.should == "Status: 200 OK\r\nContent-Type: text/html\r\n\r\n"

      header = @cgi.send(@method, "status" => "PARTIAL_CONTENT")
      header.should == "Status: 206 Partial Content\r\nContent-Type: text/html\r\n\r\n"

      header = @cgi.send(@method, "status" => "MULTIPLE_CHOICES")
      header.should == "Status: 300 Multiple Choices\r\nContent-Type: text/html\r\n\r\n"

      header = @cgi.send(@method, "server" => "Server Software used")
      header.should == "Server: Server Software used\r\nContent-Type: text/html\r\n\r\n"

      header = @cgi.send(@method, "connection" => "connection type")
      header.should == "Connection: connection type\r\nContent-Type: text/html\r\n\r\n"

      header = @cgi.send(@method, "length" => 103)
      header.should == "Content-Type: text/html\r\nContent-Length: 103\r\n\r\n"

      header = @cgi.send(@method, "language" => "ja")
      header.should == "Content-Type: text/html\r\nContent-Language: ja\r\n\r\n"

      header = @cgi.send(@method, "expires" => Time.at(0))
      header.should == "Content-Type: text/html\r\nExpires: Thu, 01 Jan 1970 00:00:00 GMT\r\n\r\n"

      header = @cgi.send(@method, "cookie" => "my cookie's content")
      header.should == "Content-Type: text/html\r\nSet-Cookie: my cookie's content\r\n\r\n"

      header = @cgi.send(@method, "cookie" => ["multiple", "cookies"])
      header.should == "Content-Type: text/html\r\nSet-Cookie: multiple\r\nSet-Cookie: cookies\r\n\r\n"
    end

    it "includes Cookies in the @output_cookies field" do
      @cgi.instance_variable_set(:@output_cookies, ["multiple", "cookies"])
      @cgi.send(@method, {}).should == "Content-Type: text/html\r\nSet-Cookie: multiple\r\nSet-Cookie: cookies\r\n\r\n"
    end

    it "returns a HTTP header specifiying the Content-Type as text/html when passed an empty Hash" do
      @cgi.send(@method, {}).should == "Content-Type: text/html\r\n\r\n"
    end
  end
end
