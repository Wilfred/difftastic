require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#flush" do
  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.flush }.should raise_error(IOError)
  end
end
