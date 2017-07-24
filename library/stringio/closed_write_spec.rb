require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#closed_write?" do
  it "returns true if self is not writable" do
    io = StringIO.new("example", "r+")
    io.close_read
    io.closed_write?.should be_false
    io.close_write
    io.closed_write?.should be_true
  end
end
