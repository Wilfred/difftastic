require File.expand_path('../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPBadResponse" do
  it "is a subclass of StandardError" do
    Net::HTTPBadResponse.should < StandardError
  end
end
