require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::Option.int" do
  it "creates a new Socket::Option" do
    so = Socket::Option.int(:INET, :SOCKET, :KEEPALIVE, 5)
    so.should be_an_instance_of(Socket::Option)
    so.family.should == Socket::Constants::AF_INET
    so.level.should == Socket::Constants::SOL_SOCKET
    so.optname.should == Socket::Constants::SO_KEEPALIVE
    so.data.should == [5].pack('i')
  end
end

describe "Socket::Option#int" do
  it "returns int value" do
    so = Socket::Option.int(:INET, :SOCKET, :KEEPALIVE, 17)
    so.int.should == 17

    so = Socket::Option.int(:INET, :SOCKET, :KEEPALIVE, 32765)
    so.int.should == 32765
  end

  it "raises TypeError if option has not good size" do
    so = Socket::Option.new(:UNSPEC, :SOCKET, :SO_LINGER, [0, 0].pack('i*'))
    lambda { so.int }.should raise_error(TypeError)
  end
end
