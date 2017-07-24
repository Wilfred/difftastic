require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#to_i" do
  it "returns the numeric file descriptor of the given IO object" do
    $stdout.to_i.should == 1
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.to_i }.should raise_error(IOError)
  end
end
