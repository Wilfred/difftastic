require File.expand_path('../../../spec_helper', __FILE__)

describe "GC.enable" do

  it "returns true iff the garbage collection was already disabled" do
    GC.enable
    GC.enable.should == false
    GC.disable
    GC.enable.should == true
    GC.enable.should == false
  end

end
