require File.expand_path('../../../spec_helper', __FILE__)

require 'base64'

describe "Base64#decode64" do
  it "returns the Base64-decoded version of the given string" do
    Base64.decode64("U2VuZCByZWluZm9yY2VtZW50cw==\n").should == "Send reinforcements"
  end
end
