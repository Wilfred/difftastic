require File.expand_path('../../../spec_helper', __FILE__)
require 'resolv'

describe "Resolv#getaddress" do
  platform_is_not :windows do
    it "resolves localhost" do
      res = Resolv.new([Resolv::Hosts.new])

      lambda {
        res.getaddress("localhost")
      }.should_not raise_error(Resolv::ResolvError)
    end
  end

  it "raises ResolvError if the name can not be looked up" do
    res = Resolv.new([])
    lambda {
      res.getaddress("should.raise.error.")
    }.should raise_error(Resolv::ResolvError)
  end
end
