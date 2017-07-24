require File.expand_path('../../../spec_helper', __FILE__)
require 'resolv'

describe "Resolv#getaddresses" do
  platform_is_not :windows do
    it "resolves localhost" do
      res = Resolv.new([Resolv::Hosts.new])

      addresses = res.getaddresses("localhost")
      addresses.should_not == nil
      addresses.size.should > 0
    end
  end
end
