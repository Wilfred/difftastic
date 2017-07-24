require File.expand_path('../../../spec_helper', __FILE__)
require 'resolv'

describe "Resolv#getname" do
  platform_is_not :windows do
    it "resolves 127.0.0.1" do
      lambda {
        Resolv.getname("127.0.0.1")
      }.should_not raise_error(Resolv::ResolvError)
    end
  end

  it "raises ResolvError when there is no result" do
    res = Resolv.new([])
    lambda {
      res.getname("should.raise.error")
    }.should raise_error(Resolv::ResolvError)
  end
end
