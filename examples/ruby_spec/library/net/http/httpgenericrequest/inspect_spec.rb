require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPGenericRequest#inspect" do
  it "returns a String representation of self" do
    request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
    request.inspect.should == "#<Net::HTTPGenericRequest POST>"

    request = Net::HTTPGenericRequest.new("GET", false, true, "/some/path")
    request.inspect.should == "#<Net::HTTPGenericRequest GET>"

    request = Net::HTTPGenericRequest.new("BLA", true, true, "/some/path")
    request.inspect.should == "#<Net::HTTPGenericRequest BLA>"

    # Subclasses
    request = Net::HTTP::Get.new("/some/path")
    request.inspect.should == "#<Net::HTTP::Get GET>"

    request = Net::HTTP::Post.new("/some/path")
    request.inspect.should == "#<Net::HTTP::Post POST>"

    request = Net::HTTP::Trace.new("/some/path")
    request.inspect.should == "#<Net::HTTP::Trace TRACE>"
  end
end
