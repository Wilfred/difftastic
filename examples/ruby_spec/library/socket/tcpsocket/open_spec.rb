require File.expand_path('../shared/new', __FILE__)

describe "TCPSocket.open" do
  it_behaves_like :tcpsocket_new, :open
end
