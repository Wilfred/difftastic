require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#closed?" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close
  end

  it "returns true on closed stream" do
    IOSpecs.closed_io.closed?.should be_true
  end

  it "returns false on open stream" do
    @io.closed?.should be_false
  end
end
