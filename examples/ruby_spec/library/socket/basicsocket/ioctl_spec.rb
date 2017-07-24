require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

describe "Socket::BasicSocket#ioctl" do
  platform_is :linux do
    it "passes data from and to a String correctly" do
      s = Socket.new Socket::AF_INET, Socket::SOCK_DGRAM, 0
      # /usr/include/net/if.h, structure ifreq
      # The structure is 32 bytes on x86, 40 bytes on x86_64
      if_name = ['lo'].pack('a16')
      buffer = if_name + 'z' * 24
      # SIOCGIFADDR in /usr/include/bits/ioctls.h
      s.ioctl 0x8915, buffer
      s.close

      # Interface name should remain unchanged.
      buffer[0, 16].should == if_name
      # lo should have an IPv4 address of 127.0.0.1
      buffer[16, 2].unpack('S!').first.should == Socket::AF_INET
      buffer[20, 4].should == "\x7f\0\0\x01"
    end
  end

  platform_is :freebsd do
    it "passes data from and to a String correctly" do
      s = Socket.new Socket::AF_INET, Socket::SOCK_DGRAM, 0
      # /usr/include/net/if.h, structure ifreq
      # The structure is 32 bytes on x86, 40 bytes on x86_64
      if_name = ['lo0'].pack('a16')
      buffer = if_name + 'z' * 24
      # SIOCGIFADDR in /usr/include/bits/ioctls.h
      s.ioctl 0xc0206921, buffer
      s.close

      # Interface name should remain unchanged.
      buffer[0, 16].should == if_name
      # lo should have an IPv4 address of 127.0.0.1
      buffer[16, 1].unpack('C').first.should == 16
      buffer[17, 1].unpack('C').first.should == Socket::AF_INET
      buffer[20, 4].should == "\x7f\0\0\x01"
    end
  end
end
