# coding: utf-8
describe :socket_pack_sockaddr_in, shared: true do
  it "packs and unpacks" do
    sockaddr_in = Socket.public_send(@method, 0, nil)
    port, addr = Socket.unpack_sockaddr_in(sockaddr_in)
    ["127.0.0.1", "::1"].include?(addr).should == true
    port.should == 0

    sockaddr_in = Socket.public_send(@method, 0, '')
    Socket.unpack_sockaddr_in(sockaddr_in).should == [0, '0.0.0.0']

    sockaddr_in = Socket.public_send(@method, 80, '127.0.0.1')
    Socket.unpack_sockaddr_in(sockaddr_in).should == [80, '127.0.0.1']

    sockaddr_in = Socket.public_send(@method, '80', '127.0.0.1')
    Socket.unpack_sockaddr_in(sockaddr_in).should == [80, '127.0.0.1']

    sockaddr_in = Socket.public_send(@method, nil, '127.0.0.1')
    Socket.unpack_sockaddr_in(sockaddr_in).should == [0, '127.0.0.1']
  end
end

describe :socket_pack_sockaddr_un, shared: true do
  platform_is_not :windows do
    it 'should be idempotent' do
      bytes = Socket.public_send(@method, '/tmp/foo').bytes
      bytes[2..9].should == [47, 116, 109, 112, 47, 102, 111, 111]
      bytes[10..-1].all?(&:zero?).should == true
    end

    it "packs and unpacks" do
      sockaddr_un = Socket.public_send(@method, '/tmp/s')
      Socket.unpack_sockaddr_un(sockaddr_un).should == '/tmp/s'
    end

    it "handles correctly paths with multibyte chars" do
      sockaddr_un = Socket.public_send(@method, '/home/вася/sock')
      path = Socket.unpack_sockaddr_un(sockaddr_un).encode('UTF-8', 'UTF-8')
      path.should == '/home/вася/sock'
    end
  end

  platform_is_not :windows, :aix do
    it "raises if path length exceeds max size" do
      # AIX doesn't raise error
      long_path = Array.new(512, 0).join
      lambda { Socket.public_send(@method, long_path) }.should raise_error(ArgumentError)
    end
  end
end
