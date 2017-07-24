require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket.gethostname" do
  it "returns the host name" do
    Socket.gethostname.should == `hostname`.strip
  end
end
