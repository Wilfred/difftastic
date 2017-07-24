require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::Option.bool" do
  it "creates a new Socket::Option" do
    so = Socket::Option.bool(:INET, :SOCKET, :KEEPALIVE, true)
    so.should be_an_instance_of(Socket::Option)
    so.family.should == Socket::AF_INET
    so.level.should == Socket::SOL_SOCKET
    so.optname.should == Socket::SO_KEEPALIVE
    so.data.should == [1].pack('i')
  end
end

describe "Socket::Option#bool" do
  it "returns boolean value" do
    Socket::Option.bool(:INET, :SOCKET, :KEEPALIVE, true).bool.should == true
    Socket::Option.bool(:INET, :SOCKET, :KEEPALIVE, false).bool.should == false
  end

  it "raises TypeError if option has not good size" do
    so = Socket::Option.new(:UNSPEC, :SOCKET, :SO_LINGER, [0, 0].pack('i*'))
    lambda { so.bool }.should raise_error(TypeError)
  end
end
