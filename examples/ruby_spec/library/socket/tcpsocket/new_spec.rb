require File.expand_path('../shared/new', __FILE__)

describe "TCPSocket.new" do
  it_behaves_like :tcpsocket_new, :new
end
