require File.expand_path('../../../spec_helper', __FILE__)
require 'ipaddr'

describe "IPAddr#to_s" do

  it "displays IPAddr using short notation" do
    IPAddr.new("0:0:0:1::").to_s.should == "0:0:0:1::"
    IPAddr.new("2001:200:300::/48").to_s.should == "2001:200:300::"
    IPAddr.new("[2001:200:300::]/48").to_s.should == "2001:200:300::"
    IPAddr.new("3ffe:505:2::1").to_s.should == "3ffe:505:2::1"
  end

end

describe "IPAddr#to_string" do
  it "displays an IPAddr using full notation" do
    IPAddr.new("3ffe:505:2::1").to_string.should == "3ffe:0505:0002:0000:0000:0000:0000:0001"
  end

end
