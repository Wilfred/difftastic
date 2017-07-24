require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/tell', __FILE__)

describe "StringIO#pos" do
  it_behaves_like :stringio_tell, :pos
end

describe "StringIO#pos=" do
  before :each do
    @io = StringIOSpecs.build
  end

  it "updates the current byte offset" do
    @io.pos = 26
    @io.read(1).should == "r"
  end

  it "raises an EINVAL if given a negative argument" do
    lambda { @io.pos = -10 }.should  raise_error(Errno::EINVAL)
  end

  it "updates the current byte offset after reaching EOF" do
    @io.read
    @io.pos = 26
    @io.read(1).should == "r"
  end
end
