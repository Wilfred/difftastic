require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "UNIXSocket#recvfrom" do

  platform_is_not :windows do
    before :each do
      @path = SocketSpecs.socket_path
      @server = UNIXServer.open(@path)
      @client = UNIXSocket.open(@path)
    end

    after :each do
      @client.close
      @server.close
      SocketSpecs.rm_socket @path
    end

    it "receives len bytes from sock" do
      @client.send("foobar", 0)
      sock = @server.accept
      sock.recvfrom(6).first.should == "foobar"
      sock.close
    end

    it "returns an array with data and information on the sender" do
      @client.send("foobar", 0)
      sock = @server.accept
      data = sock.recvfrom(6)
      data.first.should == "foobar"
      data.last.should == ["AF_UNIX", ""]
      sock.close
    end

    it "uses different message options" do
      @client.send("foobar", Socket::MSG_PEEK)
      sock = @server.accept
      peek_data = sock.recvfrom(6, Socket::MSG_PEEK) # Does not retrieve the message
      real_data = sock.recvfrom(6)

      real_data.should == peek_data
      peek_data.should == ["foobar", ["AF_UNIX", ""]]
      sock.close
    end
  end

end
