require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "UNIXServer#accept_nonblock" do

  platform_is_not :windows do
    before :each do
      @path = SocketSpecs.socket_path
      @server = UNIXServer.open(@path)
      @client = UNIXSocket.open(@path)

      @socket = @server.accept_nonblock
      @client.send("foobar", 0)
    end

    after :each do
      @socket.close
      @client.close
      @server.close
      SocketSpecs.rm_socket @path
    end

    it "accepts a connection in a non-blocking way" do
      data = @socket.recvfrom(6).first
      data.should == "foobar"
    end

    it "returns a UNIXSocket" do
      @socket.should be_kind_of(UNIXSocket)
    end

    ruby_version_is '2.3' do
      it 'returns :wait_readable in exceptionless mode' do
        @server.accept_nonblock(exception: false).should == :wait_readable
      end
    end
  end
end
