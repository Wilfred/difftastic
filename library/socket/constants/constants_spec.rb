require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
include Socket::Constants

describe "Socket::Constants" do
  it "defines socket types" do
    consts = ["SOCK_DGRAM", "SOCK_RAW", "SOCK_RDM", "SOCK_SEQPACKET", "SOCK_STREAM"]
    consts.each do |c|
      Socket::Constants.should have_constant(c)
    end
  end

  it "defines protocol families" do
    consts = ["PF_INET6", "PF_INET", "PF_UNIX", "PF_UNSPEC"]
    consts.each do |c|
      Socket::Constants.should have_constant(c)
    end
  end

  platform_is_not :aix do
    it "defines PF_IPX protocol" do
      Socket::Constants.should have_constant("PF_IPX")
    end
  end

  it "defines address families" do
    consts = ["AF_INET6", "AF_INET", "AF_UNIX", "AF_UNSPEC"]
    consts.each do |c|
      Socket::Constants.should have_constant(c)
    end
  end

  platform_is_not :aix do
    it "defines AF_IPX address" do
      Socket::Constants.should have_constant("AF_IPX")
    end
  end

  it "defines send/receive options" do
    consts = ["MSG_DONTROUTE", "MSG_OOB", "MSG_PEEK"]
    consts.each do |c|
      Socket::Constants.should have_constant(c)
    end
  end

  it "defines socket level options" do
    consts = ["SOL_SOCKET"]
    consts.each do |c|
      Socket::Constants.should have_constant(c)
    end
  end

  it "defines socket options" do
    consts = ["SO_BROADCAST", "SO_DEBUG", "SO_DONTROUTE", "SO_ERROR", "SO_KEEPALIVE", "SO_LINGER",
              "SO_OOBINLINE", "SO_RCVBUF", "SO_REUSEADDR", "SO_SNDBUF", "SO_TYPE"]
    consts.each do |c|
      Socket::Constants.should have_constant(c)
    end
  end

  it "defines multicast options" do
    consts = ["IP_ADD_MEMBERSHIP",
              "IP_MULTICAST_LOOP", "IP_MULTICAST_TTL"]
    platform_is_not :windows do
      consts += ["IP_DEFAULT_MULTICAST_LOOP", "IP_DEFAULT_MULTICAST_TTL"]
    end
    consts.each do |c|
      Socket::Constants.should have_constant(c)
    end
  end

  platform_is_not :solaris, :windows, :aix do
    it "defines multicast options" do
      consts = ["IP_MAX_MEMBERSHIPS"]
      consts.each do |c|
        Socket::Constants.should have_constant(c)
      end
    end
  end

  it "defines TCP options" do
    consts = ["TCP_NODELAY"]
    platform_is_not :windows do
      consts << "TCP_MAXSEG"
    end
    consts.each do |c|
      Socket::Constants.should have_constant(c)
    end
  end
end
