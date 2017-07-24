# -*- encoding: binary -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "BasicSocket#recv" do

  before :each do
    @server = TCPServer.new('127.0.0.1', 0)
    @port = @server.addr[1]
  end

  after :each do
    @server.close unless @server.closed?
    ScratchPad.clear
  end

  it "receives a specified number of bytes of a message from another socket"  do
    t = Thread.new do
      client = @server.accept
      ScratchPad.record client.recv(10)
      client.recv(1) # this recv is important
      client.close
    end
    Thread.pass while t.status and t.status != "sleep"
    t.status.should_not be_nil

    socket = TCPSocket.new('127.0.0.1', @port)
    socket.send('hello', 0)
    socket.close

    t.join
    ScratchPad.recorded.should == 'hello'
  end

  platform_is_not :solaris do
    it "accepts flags to specify unusual receiving behaviour" do
      t = Thread.new do
        client = @server.accept

        # in-band data (TCP), doesn't receive the flag.
        ScratchPad.record client.recv(10)

        # this recv is important (TODO: explain)
        client.recv(10)
        client.close
      end
      Thread.pass while t.status and t.status != "sleep"
      t.status.should_not be_nil

      socket = TCPSocket.new('127.0.0.1', @port)
      socket.send('helloU', Socket::MSG_OOB)
      socket.shutdown(1)
      t.join
      socket.close
      ScratchPad.recorded.should == 'hello'
    end
  end

  it "gets lines delimited with a custom separator"  do
    t = Thread.new do
      client = @server.accept
      ScratchPad.record client.gets("\377")

      # this call is important (TODO: explain)
      client.gets(nil)
      client.close
    end
    Thread.pass while t.status and t.status != "sleep"
    t.status.should_not be_nil

    socket = TCPSocket.new('127.0.0.1', @port)
    socket.write("firstline\377secondline\377")
    socket.close

    t.join
    ScratchPad.recorded.should == "firstline\377"
  end

  ruby_version_is "2.3" do
    it "allows an output buffer as third argument" do
      socket = TCPSocket.new('127.0.0.1', @port)
      socket.write("data")

      client = @server.accept
      buf = "foo"
      begin
        client.recv(4, 0, buf)
      ensure
        client.close
      end
      buf.should == "data"

      socket.close
    end
  end
end
