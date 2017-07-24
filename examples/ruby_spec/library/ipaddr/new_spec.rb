require File.expand_path('../../../spec_helper', __FILE__)
require 'ipaddr'

describe "IPAddr#new" do
  it "initializes IPAddr" do
    lambda{ IPAddr.new("3FFE:505:ffff::/48") }.should_not raise_error
    lambda{ IPAddr.new("0:0:0:1::")          }.should_not raise_error
    lambda{ IPAddr.new("2001:200:300::/48")  }.should_not raise_error
  end

  it "initializes IPAddr ipv6 address with short notation" do
    a = IPAddr.new
    a.to_s.should == "::"
    a.to_string.should == "0000:0000:0000:0000:0000:0000:0000:0000"
    a.family.should == Socket::AF_INET6
  end

  it "initializes IPAddr ipv6 address with long notation" do
    a = IPAddr.new("0123:4567:89ab:cdef:0ABC:DEF0:1234:5678")
    a.to_s.should == "123:4567:89ab:cdef:abc:def0:1234:5678"
    a.to_string.should == "0123:4567:89ab:cdef:0abc:def0:1234:5678"
    a.family.should == Socket::AF_INET6
  end

  it "initializes IPAddr ipv6 address with / subnet notation" do
    a = IPAddr.new("3ffe:505:2::/48")
    a.to_s.should == "3ffe:505:2::"
    a.to_string.should == "3ffe:0505:0002:0000:0000:0000:0000:0000"
    a.family.should == Socket::AF_INET6
    a.ipv4?.should == false
    a.ipv6?.should == true
    a.inspect.should == "#<IPAddr: IPv6:3ffe:0505:0002:0000:0000:0000:0000:0000/ffff:ffff:ffff:0000:0000:0000:0000:0000>"
  end

  it "initializes IPAddr ipv6 address with mask subnet notation" do
    a = IPAddr.new("3ffe:505:2::/ffff:ffff:ffff::")
    a.to_s.should == "3ffe:505:2::"
    a.to_string.should == "3ffe:0505:0002:0000:0000:0000:0000:0000"
    a.family.should == Socket::AF_INET6
  end

  it "initializes IPAddr ipv4 address with all zeroes" do
    a = IPAddr.new("0.0.0.0")
    a.to_s.should == "0.0.0.0"
    a.to_string.should == "0.0.0.0"
    a.family.should == Socket::AF_INET
  end

  it "initializes IPAddr ipv4 address" do
    a = IPAddr.new("192.168.1.2")
    a.to_s.should == "192.168.1.2"
    a.to_string.should == "192.168.1.2"
    a.family.should == Socket::AF_INET
    a.ipv4?.should == true
    a.ipv6?.should == false
  end

  it "initializes IPAddr ipv4 address with / subnet notation" do
    a = IPAddr.new("192.168.1.2/24")
    a.to_s.should == "192.168.1.0"
    a.to_string.should == "192.168.1.0"
    a.family.should == Socket::AF_INET
    a.inspect.should == "#<IPAddr: IPv4:192.168.1.0/255.255.255.0>"
  end

  it "initializes IPAddr ipv4 address with subnet mask" do
    a = IPAddr.new("192.168.1.2/255.255.255.0")
    a.to_s.should == "192.168.1.0"
    a.to_string.should == "192.168.1.0"
    a.family.should == Socket::AF_INET
  end

  it "initializes IPAddr ipv4 mapped address with subnet mask" do
    a = IPAddr.new("::1:192.168.1.2/120")
    a.to_s.should == "::1:c0a8:100"
    a.to_string.should == "0000:0000:0000:0000:0000:0001:c0a8:0100"
    a.family.should == Socket::AF_INET6
  end

  it "raises on incorrect IPAddr strings" do
    [
      ["fe80::1%fxp0"],
      ["::1/255.255.255.0"],
      [IPAddr.new("::1").to_i],
      ["::ffff:192.168.1.2/120", Socket::AF_INET],
      ["[192.168.1.2]/120"],
    ].each { |args|
      lambda{
        IPAddr.new(*args)
      }.should raise_error(ArgumentError)
    }
  end
end
