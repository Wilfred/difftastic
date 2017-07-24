require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP.socket_type" do
  it "returns BufferedIO" do
    Net::HTTP.socket_type.should == Net::BufferedIO
  end
end
