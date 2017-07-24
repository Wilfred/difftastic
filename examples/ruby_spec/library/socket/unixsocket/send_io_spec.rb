require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "UNIXSocket#send_io" do

  platform_is_not :windows do
    before :each do
      @path = SocketSpecs.socket_path
      @server = UNIXServer.open(@path)
      @client = UNIXSocket.open(@path)

      @send_io_path = File.expand_path('../../fixtures/send_io.txt', __FILE__)
      @file = File.open(@send_io_path)
    end

    after :each do
      @io.close if @io
      @socket.close if @socket

      @file.close
      @client.close
      @server.close
      SocketSpecs.rm_socket @path
    end

    it "sends the fd for an IO object across the socket" do
      @client.send_io(@file)

      @socket = @server.accept
      @io = @socket.recv_io

      @io.read.should == File.read(@send_io_path)
    end
  end
end
