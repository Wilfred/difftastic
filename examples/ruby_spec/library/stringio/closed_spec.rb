require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#closed?" do
  it "returns true if self is completely closed" do
    io = StringIO.new("example", "r+")
    io.close_read
    io.closed?.should be_false
    io.close_write
    io.closed?.should be_true

    io = StringIO.new("example", "r+")
    io.close
    io.closed?.should be_true
  end
end
