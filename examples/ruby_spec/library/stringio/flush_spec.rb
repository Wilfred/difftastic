require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#flush" do
  it "returns self" do
    io = StringIO.new("flush")
    io.flush.should equal(io)
  end
end
