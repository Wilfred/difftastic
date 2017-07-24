require File.expand_path('../../../spec_helper', __FILE__)
require 'ipaddr'

describe "IPAddr#reverse" do
  it "generates the reverse DNS lookup entry" do
    IPAddr.new("3ffe:505:2::f").reverse.should == "f.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.2.0.0.0.5.0.5.0.e.f.f.3.ip6.arpa"
    IPAddr.new("192.168.2.1").reverse.should == "1.2.168.192.in-addr.arpa"
  end
end

describe "IPAddr#ip6_arpa" do
  it "converts an IPv6 address into the reverse DNS lookup representation according to RFC3172" do
    IPAddr.new("3ffe:505:2::f").ip6_arpa.should == "f.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.2.0.0.0.5.0.5.0.e.f.f.3.ip6.arpa"
    lambda{
      IPAddr.new("192.168.2.1").ip6_arpa
    }.should raise_error(ArgumentError)
  end
end

describe "IPAddr#ip6_int" do
  it "converts an IPv6 address into the reverse DNS lookup representation according to RFC1886" do
    IPAddr.new("3ffe:505:2::f").ip6_int.should == "f.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.2.0.0.0.5.0.5.0.e.f.f.3.ip6.int"
    lambda{
      IPAddr.new("192.168.2.1").ip6_int
    }.should raise_error(ArgumentError)
  end
end
