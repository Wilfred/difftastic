require File.expand_path('../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPHeaderSyntaxError" do
  it "is a subclass of StandardError" do
    Net::HTTPHeaderSyntaxError.should < StandardError
  end
end
