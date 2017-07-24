require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_sockaddr', __FILE__)
require 'socket'

describe "Addrinfo#to_s" do
  it_behaves_like(:socket_addrinfo_to_sockaddr, :to_s)
end
