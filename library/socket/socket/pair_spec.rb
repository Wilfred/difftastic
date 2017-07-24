require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../../shared/socketpair', __FILE__)

describe "Socket#pair" do
  it_behaves_like :socket_socketpair, :pair
end
