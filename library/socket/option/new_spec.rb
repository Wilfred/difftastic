require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::Option.new" do
  it "should accept integers" do
    so = Socket::Option.new(Socket::AF_INET, Socket::SOL_SOCKET, Socket::SO_KEEPALIVE, [0].pack('i'))
    so.family.should == Socket::AF_INET
    so.level.should == Socket::SOL_SOCKET
    so.optname.should == Socket::SO_KEEPALIVE
  end

  it "should accept symbols" do
    so = Socket::Option.new(:AF_INET, :SOL_SOCKET, :SO_KEEPALIVE, [0].pack('i'))
    so.family.should == Socket::AF_INET
    so.level.should == Socket::SOL_SOCKET
    so.optname.should == Socket::SO_KEEPALIVE

    so = Socket::Option.new(:INET, :SOCKET, :KEEPALIVE, [0].pack('i'))
    so.family.should == Socket::AF_INET
    so.level.should == Socket::SOL_SOCKET
    so.optname.should == Socket::SO_KEEPALIVE
  end

  it "should raise error on unknown family" do
    lambda { Socket::Option.new(:INET4, :SOCKET, :KEEPALIVE, [0].pack('i')) }.should raise_error(SocketError)
  end

  it "should raise error on unknown level" do
    lambda { Socket::Option.new(:INET, :ROCKET, :KEEPALIVE, [0].pack('i')) }.should raise_error(SocketError)
  end

  it "should raise error on unknown option name" do
    lambda { Socket::Option.new(:INET, :SOCKET, :ALIVE, [0].pack('i')) }.should raise_error(SocketError)
  end
end
