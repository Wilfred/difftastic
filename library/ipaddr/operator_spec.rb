require File.expand_path('../../../spec_helper', __FILE__)
require 'ipaddr'

describe "IPAddr Operator" do
  IN6MASK32  = "ffff:ffff::"
  IN6MASK128 = "ffff:ffff:ffff:ffff:ffff:ffff:ffff:ffff"

  before do
    @in6_addr_any = IPAddr.new()
    @a = IPAddr.new("3ffe:505:2::/48")
    @b = IPAddr.new("0:0:0:1::")
    @c = IPAddr.new(IN6MASK32)
  end

  it "bitwises or" do
    (@a | @b).to_s.should == "3ffe:505:2:1::"
    a = @a
    a |= @b
    a.to_s.should == "3ffe:505:2:1::"
    @a.to_s.should == "3ffe:505:2::"
    (@a | 0x00000000000000010000000000000000).to_s.should == "3ffe:505:2:1::"
  end

  it "bitwises and" do
    (@a & @c).to_s.should == "3ffe:505::"
    a = @a
    a &= @c
    a.to_s.should == "3ffe:505::"
    @a.to_s.should == "3ffe:505:2::"
    (@a & 0xffffffff000000000000000000000000).to_s.should == "3ffe:505::"
  end

  it "bitshifts right" do
    (@a >> 16).to_s.should == "0:3ffe:505:2::"
    a = @a
    a >>= 16
    a.to_s.should == "0:3ffe:505:2::"
    @a.to_s.should == "3ffe:505:2::"
  end

  it "bitshifts left" do
    (@a << 16).to_s.should == "505:2::"
    a = @a
    a <<= 16
    a.to_s.should == "505:2::"
    @a.to_s.should == "3ffe:505:2::"
  end

  it "inverts" do
    a = ~@in6_addr_any
    a.to_s.should == IN6MASK128
    @in6_addr_any.to_s.should == "::"
  end

  it "tests for equality" do
    @a.should == IPAddr.new("3ffe:505:2::")
    @a.should_not == IPAddr.new("3ffe:505:3::")
  end

  it "sets a mask" do
    a = @a.mask(32)
    a.to_s.should == "3ffe:505::"
    @a.to_s.should == "3ffe:505:2::"
  end

  it "checks whether an addres is included in a range" do
    @a.should include(IPAddr.new("3ffe:505:2::"))
    @a.should include(IPAddr.new("3ffe:505:2::1"))
    @a.should_not include(IPAddr.new("3ffe:505:3::"))
    net1 = IPAddr.new("192.168.2.0/24")
    net1.should include(IPAddr.new("192.168.2.0"))
    net1.should include(IPAddr.new("192.168.2.255"))
    net1.should_not include(IPAddr.new("192.168.3.0"))
    # test with integer parameter
    int = (192 << 24) + (168 << 16) + (2 << 8) + 13

    net1.should include(int)
    net1.should_not include(int+255)
  end
end
