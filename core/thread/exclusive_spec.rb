require File.expand_path('../../../spec_helper', __FILE__)

describe "Thread.exclusive" do
  before :each do
    ScratchPad.clear
  end

  it "yields to the block" do
    Thread.exclusive { ScratchPad.record true }
    ScratchPad.recorded.should == true
  end

  it "returns the result of yielding" do
    Thread.exclusive { :result }.should == :result
  end

  it "needs to be reviewed for spec completeness"
end
