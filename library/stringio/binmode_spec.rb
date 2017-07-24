require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#binmode" do
  it "returns self" do
    io = StringIO.new("example")
    io.binmode.should equal(io)
  end
end
