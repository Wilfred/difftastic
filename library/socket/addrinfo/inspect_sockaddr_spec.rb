require File.expand_path('../../../../spec_helper', __FILE__)

require 'socket'

describe 'Addrinfo#inspect_sockaddr' do
  it 'IPv4' do
    Addrinfo.tcp('127.0.0.1', 80).inspect_sockaddr.should == '127.0.0.1:80'
    Addrinfo.tcp('127.0.0.1', 0).inspect_sockaddr.should == '127.0.0.1'
  end

  it 'IPv6' do
    Addrinfo.tcp('::1', 80).inspect_sockaddr.should == '[::1]:80'
    Addrinfo.tcp('::1', 0).inspect_sockaddr.should == '::1'
    ip = '2001:0db8:85a3:0000:0000:8a2e:0370:7334'
    Addrinfo.tcp(ip, 80).inspect_sockaddr.should == '[2001:db8:85a3::8a2e:370:7334]:80'
    Addrinfo.tcp(ip, 0).inspect_sockaddr.should == '2001:db8:85a3::8a2e:370:7334'
  end

  platform_is_not :windows do
    it 'UNIX' do
      Addrinfo.unix('/tmp/sock').inspect_sockaddr.should == '/tmp/sock'
      Addrinfo.unix('rel').inspect_sockaddr.should == 'UNIX rel'
    end
  end
end
