require File.expand_path('../../../spec_helper', __FILE__)

require 'base64'

describe "Base64#encode64" do
  it "returns the Base64-encoded version of the given string" do
    Base64.encode64("Now is the time for all good coders\nto learn Ruby").should ==
      "Tm93IGlzIHRoZSB0aW1lIGZvciBhbGwgZ29vZCBjb2RlcnMKdG8gbGVhcm4g\nUnVieQ==\n"
  end

  it "returns the Base64-encoded version of the given string" do
    Base64.encode64('Send reinforcements').should == "U2VuZCByZWluZm9yY2VtZW50cw==\n"
  end
end
