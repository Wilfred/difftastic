require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

option_pack = 'i*'
platform_is :windows do
  option_pack = 's*'
end

describe "Socket::Option.linger" do
  it "creates a new Socket::Option for SO_LINGER" do
    so = Socket::Option.linger(1, 10)
    so.should be_an_instance_of(Socket::Option)
    so.family.should == Socket::Constants::AF_UNSPEC
    so.level.should == Socket::Constants::SOL_SOCKET
    so.optname.should == Socket::Constants::SO_LINGER
    so.data.should == [1, 10].pack(option_pack)
  end

  it "accepts boolean as onoff argument" do
    so = Socket::Option.linger(false, 0)
    so.data.should == [0, 0].pack(option_pack)

    so = Socket::Option.linger(true, 1)
    so.data.should == [1, 1].pack(option_pack)
  end
end

describe "Socket::Option#linger" do
  it "returns linger option" do
    so = Socket::Option.linger(0, 5)
    ary = so.linger
    ary[0].should be_false
    ary[1].should == 5

    so = Socket::Option.linger(false, 4)
    ary = so.linger
    ary[0].should be_false
    ary[1].should == 4

    so = Socket::Option.linger(1, 10)
    ary = so.linger
    ary[0].should be_true
    ary[1].should == 10

    so = Socket::Option.linger(true, 9)
    ary = so.linger
    ary[0].should be_true
    ary[1].should == 9
  end

  it "raises TypeError if not a SO_LINGER" do
    so = Socket::Option.int(:AF_UNSPEC, :SOL_SOCKET, :KEEPALIVE, 1)
    lambda { so.linger }.should raise_error(TypeError)
  end

  platform_is_not :windows do
    it "raises TypeError if option has not good size" do
      so = Socket::Option.int(:AF_UNSPEC, :SOL_SOCKET, :LINGER, 1)
      lambda { so.linger }.should raise_error(TypeError)
    end
  end
end
