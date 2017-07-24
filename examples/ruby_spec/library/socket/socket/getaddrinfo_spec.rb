require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

require 'socket'

describe "Socket#getaddrinfo" do
  before :each do
    @do_not_reverse_lookup = BasicSocket.do_not_reverse_lookup
    BasicSocket.do_not_reverse_lookup = true
  end

  after :each do
    BasicSocket.do_not_reverse_lookup = @do_not_reverse_lookup
  end

  platform_is_not :solaris, :windows do
    it "gets the address information" do
      expected = []
      # The check for AP_INET6's class is needed because ipaddr.rb adds
      # fake AP_INET6 even in case when IPv6 is not really supported.
      # Without such check, this test might fail when ipaddr was required
      # by some other specs.
      if (Socket.constants.include? 'AF_INET6') &&
        (Socket::AF_INET6.class != Object) then
        expected.concat [
          ['AF_INET6', 9, SocketSpecs.hostname, '::1', Socket::AF_INET6,
            Socket::SOCK_DGRAM, Socket::IPPROTO_UDP],
            ['AF_INET6', 9, SocketSpecs.hostname, '::1', Socket::AF_INET6,
              Socket::SOCK_STREAM, Socket::IPPROTO_TCP],
              ['AF_INET6', 9, SocketSpecs.hostname, 'fe80::1%lo0', Socket::AF_INET6,
                Socket::SOCK_DGRAM, Socket::IPPROTO_UDP],
                ['AF_INET6', 9, SocketSpecs.hostname, 'fe80::1%lo0', Socket::AF_INET6,
                  Socket::SOCK_STREAM, Socket::IPPROTO_TCP],
        ]
      end

      expected.concat [
        ['AF_INET', 9, SocketSpecs.hostname, '127.0.0.1', Socket::AF_INET,
          Socket::SOCK_DGRAM, Socket::IPPROTO_UDP],
          ['AF_INET', 9, SocketSpecs.hostname, '127.0.0.1', Socket::AF_INET,
            Socket::SOCK_STREAM, Socket::IPPROTO_TCP],
      ]

      addrinfo = Socket.getaddrinfo SocketSpecs.hostname, 'discard'
      addrinfo.each do |a|
        case a.last
        when Socket::IPPROTO_UDP, Socket::IPPROTO_TCP
          expected.should include(a)
        else
          # don't check this. It's some weird protocol we don't know about
          # so we can't spec it.
        end
      end
    end

    # #getaddrinfo will return a INADDR_ANY address (0.0.0.0
    # or "::") if it's a passive socket. In the case of non-passive
    # sockets (AI_PASSIVE not set) it should return the loopback
    # address (127.0.0.1 or "::1".

    it "accepts empty addresses for IPv4 passive sockets" do
      res = Socket.getaddrinfo(nil, "discard",
                               Socket::AF_INET,
                               Socket::SOCK_STREAM,
                               Socket::IPPROTO_TCP,
                               Socket::AI_PASSIVE)

      expected = [["AF_INET", 9, "0.0.0.0", "0.0.0.0", Socket::AF_INET, Socket::SOCK_STREAM, Socket::IPPROTO_TCP]]
      res.should == expected
    end

    it "accepts empty addresses for IPv4 non-passive sockets" do
      res = Socket.getaddrinfo(nil, "discard",
                               Socket::AF_INET,
                               Socket::SOCK_STREAM,
                               Socket::IPPROTO_TCP,
                               0)

      expected = [["AF_INET", 9, "127.0.0.1", "127.0.0.1", Socket::AF_INET, Socket::SOCK_STREAM, Socket::IPPROTO_TCP]]
      res.should == expected
    end


    it "accepts empty addresses for IPv6 passive sockets" do
      res = Socket.getaddrinfo(nil, "discard",
                               Socket::AF_INET6,
                               Socket::SOCK_STREAM,
                               Socket::IPPROTO_TCP,
                               Socket::AI_PASSIVE)

      expected = [
        ["AF_INET6", 9, "::", "::", Socket::AF_INET6, Socket::SOCK_STREAM, Socket::IPPROTO_TCP],
        ["AF_INET6", 9, "0:0:0:0:0:0:0:0", "0:0:0:0:0:0:0:0", Socket::AF_INET6, Socket::SOCK_STREAM, Socket::IPPROTO_TCP]
      ]
      res.each { |a| expected.should include (a) }
    end

    it "accepts empty addresses for IPv6 non-passive sockets" do
      res = Socket.getaddrinfo(nil, "discard",
                               Socket::AF_INET6,
                               Socket::SOCK_STREAM,
                               Socket::IPPROTO_TCP,
                               0)

      expected = [
        ["AF_INET6", 9, "::1", "::1", Socket::AF_INET6, Socket::SOCK_STREAM, Socket::IPPROTO_TCP],
        ["AF_INET6", 9, "0:0:0:0:0:0:0:1", "0:0:0:0:0:0:0:1", Socket::AF_INET6, Socket::SOCK_STREAM, Socket::IPPROTO_TCP]
      ]
      res.each { |a| expected.should include(a) }
    end
  end
end
