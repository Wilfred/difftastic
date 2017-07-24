require File.expand_path('../../../spec_helper', __FILE__)

describe "GC#garbage_collect" do

  before :each do
    @obj = Object.new
    @obj.extend(GC)
  end

  it "always returns nil" do
    @obj.garbage_collect.should == nil
    @obj.garbage_collect.should == nil
  end

end
