require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#fcntl" do
  it "raises a NotImplementedError" do
    lambda { StringIO.new("boom").fcntl }.should raise_error(NotImplementedError)
  end
end
