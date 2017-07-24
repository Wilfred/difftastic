require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require "stringio"

describe "Net::HTTPGenericRequest#exec when passed socket, version, path" do
  before :each do
    @socket = StringIO.new("")
    @buffered_socket = Net::BufferedIO.new(@socket)
  end

  it "executes the request over the socket to the path using the HTTP version" do
    request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")

    request.exec(@buffered_socket, "1.1", "/some/path")
    str = @socket.string

    str.should =~ %r[POST /some/path HTTP/1.1\r\n]
    str.should =~ %r[Accept: \*/\*\r\n]
    str[-4..-1].should == "\r\n\r\n"

    request = Net::HTTPGenericRequest.new("GET", true, true, "/some/path",
                                          "Content-Type" => "text/html")

    request.exec(@buffered_socket, "1.0", "/some/other/path")
    str = @socket.string

    str.should =~ %r[GET /some/other/path HTTP/1.0\r\n]
    str.should =~ %r[Accept: \*/\*\r\n]
    str.should =~ %r[Content-Type: text/html\r\n]
    str[-4..-1].should == "\r\n\r\n"
  end

  describe "when a request body is set" do
    it "sets the 'Content-Type' header to 'application/x-www-form-urlencoded' unless the 'Content-Type' header is supplied" do
      request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
      request.body = "Some Content"

      request.exec(@buffered_socket, "1.1", "/some/other/path")
      str = @socket.string

      str.should =~ %r[POST /some/other/path HTTP/1.1\r\n]
      str.should =~ %r[Accept: \*/\*\r\n]
      str.should =~ %r[Content-Type: application/x-www-form-urlencoded\r\n]
      str.should =~ %r[Content-Length: 12\r\n]
      str[-16..-1].should == "\r\n\r\nSome Content"
    end

    it "correctly sets the 'Content-Length' header and includes the body" do
      request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path",
                                            "Content-Type" => "text/html")
      request.body = "Some Content"

      request.exec(@buffered_socket, "1.1", "/some/other/path")
      str = @socket.string

      str.should =~ %r[POST /some/other/path HTTP/1.1\r\n]
      str.should =~ %r[Accept: \*/\*\r\n]
      str.should =~ %r[Content-Type: text/html\r\n]
      str.should =~ %r[Content-Length: 12\r\n]
      str[-16..-1].should == "\r\n\r\nSome Content"
    end
  end

  describe "when a body stream is set" do
    it "sets the 'Content-Type' header to 'application/x-www-form-urlencoded' unless the 'Content-Type' header is supplied" do
      request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path",
                                            "Content-Length" => "10")
      request.body_stream = StringIO.new("a" * 20)

      request.exec(@buffered_socket, "1.1", "/some/other/path")
      str = @socket.string

      str.should =~ %r[POST /some/other/path HTTP/1.1\r\n]
      str.should =~ %r[Accept: \*/\*\r\n]
      str.should =~ %r[Content-Type: application/x-www-form-urlencoded\r\n]
      str.should =~ %r[Content-Length: 10\r\n]
      str[-24..-1].should == "\r\n\r\naaaaaaaaaaaaaaaaaaaa"
    end

    it "sends the whole stream, regardless of the 'Content-Length' header" do
      request = Net::HTTPGenericRequest.new("POST", true, true,"/some/path",
                                            "Content-Type" => "text/html",
                                            "Content-Length" => "10")
      request.body_stream = StringIO.new("a" * 20)

      request.exec(@buffered_socket, "1.1", "/some/other/path")
      str = @socket.string

      str.should =~ %r[POST /some/other/path HTTP/1.1\r\n]
      str.should =~ %r[Accept: \*/\*\r\n]
      str.should =~ %r[Content-Type: text/html\r\n]
      str.should =~ %r[Content-Length: 10\r\n]
      str[-24..-1].should == "\r\n\r\naaaaaaaaaaaaaaaaaaaa"
    end

    it "sends the request in chunks when 'Transfer-Encoding' is set to 'chunked'" do
      request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path",
                                            "Content-Type" => "text/html",
                                            "Transfer-Encoding" => "chunked")
      datasize = 1024 * 10
      request.body_stream = StringIO.new("a" * datasize)

      request.exec(@buffered_socket, "1.1", "/some/other/path")
      str = @socket.string

      str.should =~ %r[POST /some/other/path HTTP/1.1\r\n]
      str.should =~ %r[Accept: \*/\*\r\n]
      str.should =~ %r[Content-Type: text/html\r\n]
      str.should =~ %r[Transfer-Encoding: chunked\r\n]
      str =~ %r[\r\n\r\n]
      str = $'
      while datasize > 0
        chunk_size_line, str = str.split(/\r\n/, 2)
        chunk_size = chunk_size_line[/\A[0-9A-Fa-f]+/].to_i(16)
        str.slice!(0, chunk_size).should == 'a' * chunk_size
        datasize -= chunk_size
        str.slice!(0, 2).should == "\r\n"
      end
      datasize.should == 0
      str.should == %"0\r\n\r\n"
    end

    it "raises an ArgumentError when the 'Content-Length' is not set or 'Transfer-Encoding' is not set to 'chunked'" do
      request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path",
                                            "Content-Type" => "text/html")
      request.body_stream = StringIO.new("Some Content")

      lambda { request.exec(@buffered_socket, "1.1", "/some/other/path") }.should raise_error(ArgumentError)
    end
  end
end
