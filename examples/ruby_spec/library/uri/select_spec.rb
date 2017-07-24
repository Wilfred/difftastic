require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

describe "URI#select" do
  it "takes any number of component names as symbols, and returns an array of those components" do
    URI("http://host:8080/path/").select.should == []
    URI("http://host:8080/path/").select(:scheme,:host,:port,:path).should == [
      "http","host",8080,"/path/"]
  end

  it "returns nil for any valid component that isn't set and doesn't have a default" do
    uri = URI("http://host")
    uri.select(:userinfo, :query, :fragment).should == [nil] * 3
    uri.select(:port, :path).should == [80, '']
  end

  it "raises an ArgumentError if a component is requested that isn't valid under the given scheme" do
    [
      lambda {URI("mailto:spam@mailinator.com").select(:path)},
      lambda {URI("http://blog.blag.web").select(:typecode)},
    ].each do |select_lambda|
      select_lambda.should raise_error(ArgumentError)
    end
  end

  it "raises an ArgumentError if given strings rather than symbols" do
    lambda {
      URI("http://host:8080/path/").select("scheme","host","port",'path')
    }.should raise_error(ArgumentError)
  end
end
