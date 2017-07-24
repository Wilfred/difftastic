require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#fcntl" do
  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.fcntl(5, 5) }.should raise_error(IOError)
  end
end
