require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

require 'socket'

describe "Socket#accept_nonblock" do
  before :each do
    @hostname = "127.0.0.1"
    @addr = Socket.sockaddr_in(0, @hostname)
    @socket = Socket.new(Socket::AF_INET, Socket::SOCK_STREAM, 0)
    @socket.bind(@addr)
    @socket.listen(1)
  end

  after :each do
    @socket.close
  end

  it "raises IO::WaitReadable if the connection is not accepted yet" do
    lambda {
      @socket.accept_nonblock
    }.should raise_error(IO::WaitReadable) { |e|
      platform_is_not :windows do
        e.should be_kind_of(Errno::EAGAIN)
      end
      platform_is :windows do
        e.should be_kind_of(Errno::EWOULDBLOCK)
      end
    }
  end

  ruby_version_is '2.3' do
    it 'returns :wait_readable in exceptionless mode' do
      @socket.accept_nonblock(exception: false).should == :wait_readable
    end
  end
end
