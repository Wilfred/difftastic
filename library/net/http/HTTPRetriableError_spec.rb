require File.expand_path('../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPRetriableError" do
  it "is a subclass of Net::ProtoRetriableError" do
    Net::HTTPRetriableError.should < Net::ProtoRetriableError
  end

  it "includes the Net::HTTPExceptions module" do
    Net::HTTPRetriableError.should < Net::HTTPExceptions
  end
end
