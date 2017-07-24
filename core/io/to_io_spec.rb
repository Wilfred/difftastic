require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#to_io" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "returns self for open stream" do
    @io.to_io.should equal(@io)
  end

  it "returns self for closed stream" do
    io = IOSpecs.closed_io
    io.to_io.should equal(io)
  end
end
