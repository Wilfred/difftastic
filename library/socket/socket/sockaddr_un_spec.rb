require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../../shared/pack_sockaddr', __FILE__)

describe "Socket#sockaddr_un" do
  it_behaves_like :socket_pack_sockaddr_un, :sockaddr_un
end
