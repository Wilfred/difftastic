require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "BasicSocket#send" do
  before :each do
    @server = TCPServer.new('127.0.0.1', 0)
    @port = @server.addr[1]
    @socket = TCPSocket.new('127.0.0.1', @port)
  end

  after :each do
    @server.closed?.should be_false
    @socket.closed?.should be_false

    @server.close
    @socket.close
  end

   it "sends a message to another socket and returns the number of bytes sent" do
     data = ""
     t = Thread.new do
       client = @server.accept
       loop do
         got = client.recv(5)
         break if got.empty?
         data << got
       end
       client.close
     end
     Thread.pass while t.status and t.status != "sleep"
     t.status.should_not be_nil

     @socket.send('hello', 0).should == 5
     @socket.shutdown(1) # indicate, that we are done sending
     @socket.recv(10)

     t.join
     data.should == 'hello'
   end

  platform_is_not :solaris, :windows do
    it "accepts flags to specify unusual sending behaviour" do
      data = nil
      peek_data = nil
      t = Thread.new do
        client = @server.accept
        peek_data = client.recv(6, Socket::MSG_PEEK)
        data = client.recv(6)
        client.recv(10) # this recv is important
        client.close
      end
      Thread.pass while t.status and t.status != "sleep"
      t.status.should_not be_nil

      @socket.send('helloU', Socket::MSG_PEEK | Socket::MSG_OOB).should == 6
      @socket.shutdown # indicate, that we are done sending

      t.join
      peek_data.should == "hello"
      data.should == 'hello'
    end
  end

  it "accepts a sockaddr as recipient address" do
     data = ""
     t = Thread.new do
       client = @server.accept
       loop do
         got = client.recv(5)
         break if got.empty?
         data << got
       end
       client.close
     end
     Thread.pass while t.status and t.status != "sleep"
     t.status.should_not be_nil

     sockaddr = Socket.pack_sockaddr_in(@port, "127.0.0.1")
     @socket.send('hello', 0, sockaddr).should == 5
     @socket.shutdown # indicate, that we are done sending

     t.join
     data.should == 'hello'
  end
end
