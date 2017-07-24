require File.expand_path('../../../spec_helper', __FILE__)
require 'ipaddr'

describe "IPAddr#hton" do

  it "converts IPAddr to network byte order" do
    addr = ''
    IPAddr.new("1234:5678:9abc:def0:1234:5678:9abc:def0").hton.each_byte do |c|
      addr += sprintf("%02x", c)
    end
    addr.should == "123456789abcdef0123456789abcdef0"
    addr = ''
    IPAddr.new("123.45.67.89").hton.each_byte do |c|
      addr += sprintf("%02x", c)
    end
    addr.should == sprintf("%02x%02x%02x%02x", 123, 45, 67, 89)
  end

end

describe "IPAddr#new_ntoh" do

  it "creates a new IPAddr using hton notation" do
    a = IPAddr.new("3ffe:505:2::")
    IPAddr.new_ntoh(a.hton).to_s.should == "3ffe:505:2::"
    a = IPAddr.new("192.168.2.1")
    IPAddr.new_ntoh(a.hton).to_s.should == "192.168.2.1"
  end

end
