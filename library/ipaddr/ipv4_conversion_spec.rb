require File.expand_path('../../../spec_helper', __FILE__)
require 'ipaddr'

describe "IPAddr#ipv4_compat" do

  it "should ipv4_compat?" do
    a = IPAddr.new("::192.168.1.2")
    a.to_s.should == "::192.168.1.2"
    a.to_string.should == "0000:0000:0000:0000:0000:0000:c0a8:0102"
    a.family.should == Socket::AF_INET6
    a.ipv4_compat?.should == true
    b = a.native
    b.to_s.should == "192.168.1.2"
    b.family.should == Socket::AF_INET
    b.ipv4_compat?.should == false

    a = IPAddr.new("192.168.1.2")
    b = a.ipv4_compat
    b.to_s.should == "::192.168.1.2"
    b.family.should == Socket::AF_INET6
  end

end

describe "IPAddr#ipv4_mapped" do

  it "should ipv4_mapped" do
    a = IPAddr.new("::ffff:192.168.1.2")
    a.to_s.should == "::ffff:192.168.1.2"
    a.to_string.should == "0000:0000:0000:0000:0000:ffff:c0a8:0102"
    a.family.should == Socket::AF_INET6
    a.ipv4_mapped?.should == true
    b = a.native
    b.to_s.should == "192.168.1.2"
    b.family.should == Socket::AF_INET
    b.ipv4_mapped?.should == false

    a = IPAddr.new("192.168.1.2")
    b = a.ipv4_mapped
    b.to_s.should == "::ffff:192.168.1.2"
    b.family.should == Socket::AF_INET6
  end

end


