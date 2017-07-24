require File.expand_path('../../../spec_helper', __FILE__)

describe "Kernel#<=>" do
  it "returns 0 if self" do
    obj = Object.new
    obj.<=>(obj).should == 0
  end

  it "returns 0 if self is == to the argument" do
    obj = mock('has ==')
    obj.should_receive(:==).and_return(true)
    obj.<=>(Object.new).should == 0
  end

  it "returns nil if self is eql? but not == to the argument" do
    obj = mock('has eql?')
    obj.should_not_receive(:eql?)
    obj.<=>(Object.new).should be_nil
  end

  it "returns nil if self.==(arg) returns nil" do
    obj = mock('wrong ==')
    obj.should_receive(:==).and_return(nil)
    obj.<=>(Object.new).should be_nil
  end

  it "returns nil if self is not == to the argument" do
    obj = Object.new
    obj.<=>(3.14).should be_nil
  end
end
