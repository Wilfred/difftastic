require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

require 'socket'

describe "Socket.getnameinfo" do
  before :each do
    @reverse_lookup = BasicSocket.do_not_reverse_lookup
    BasicSocket.do_not_reverse_lookup = true
  end

  after :each do
    BasicSocket.do_not_reverse_lookup = @reverse_lookup
  end

  it "gets the name information and don't resolve it" do
    sockaddr = Socket.sockaddr_in 3333, '127.0.0.1'
    name_info = Socket.getnameinfo(sockaddr, Socket::NI_NUMERICHOST | Socket::NI_NUMERICSERV)
    name_info.should == ['127.0.0.1', "3333"]
  end

  def should_be_valid_dns_name(name)
    # http://stackoverflow.com/questions/106179/regular-expression-to-match-hostname-or-ip-address
    # ftp://ftp.rfc-editor.org/in-notes/rfc3696.txt
    # http://domainkeys.sourceforge.net/underscore.html
    valid_dns = /^(([a-zA-Z0-9_]|[a-zA-Z0-9_][a-zA-Z0-9\-_]*[a-zA-Z0-9_])\.)*([A-Za-z_]|[A-Za-z_][A-Za-z0-9\-_]*[A-Za-z0-9_])\.?$/
    name.should =~ valid_dns
  end

  it "gets the name information and resolve the host" do
    sockaddr = Socket.sockaddr_in 3333, '127.0.0.1'
    name_info = Socket.getnameinfo(sockaddr, Socket::NI_NUMERICSERV)
    should_be_valid_dns_name(name_info[0])
    name_info[1].should == 3333.to_s
  end

  it "gets the name information and resolves the service" do
    sockaddr = Socket.sockaddr_in 9, '127.0.0.1'
    name_info = Socket.getnameinfo(sockaddr)
    name_info.size.should == 2
    should_be_valid_dns_name(name_info[0])
    # see http://www.iana.org/assignments/port-numbers
    name_info[1].should == 'discard'
  end

  it "gets a 3-element array and doesn't resolve hostname" do
    name_info = Socket.getnameinfo(["AF_INET", 3333, '127.0.0.1'], Socket::NI_NUMERICHOST | Socket::NI_NUMERICSERV)
    name_info.should == ['127.0.0.1', "3333"]
  end

  it "gets a 3-element array and resolves the service" do
    name_info = Socket.getnameinfo ["AF_INET", 9, '127.0.0.1']
    name_info[1].should == 'discard'
  end

  it "gets a 4-element array and doesn't resolve hostname" do
    name_info = Socket.getnameinfo(["AF_INET", 3333, 'foo', '127.0.0.1'], Socket::NI_NUMERICHOST | Socket::NI_NUMERICSERV)
    name_info.should == ['127.0.0.1', "3333"]
  end

  it "gets a 4-element array and resolves the service" do
    name_info = Socket.getnameinfo ["AF_INET", 9, 'foo', '127.0.0.1']
    name_info[1].should == 'discard'
  end

end
