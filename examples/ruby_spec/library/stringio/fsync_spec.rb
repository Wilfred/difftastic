require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#fsync" do
  it "returns zero" do
    io = StringIO.new("fsync")
    io.fsync.should eql(0)
  end
end
