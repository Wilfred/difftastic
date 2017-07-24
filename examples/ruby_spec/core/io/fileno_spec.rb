require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#fileno" do
  it "returns the numeric file descriptor of the given IO object" do
    $stdout.fileno.should == 1
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.fileno }.should raise_error(IOError)
  end
end
