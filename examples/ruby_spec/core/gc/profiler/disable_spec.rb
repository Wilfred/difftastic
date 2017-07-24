require File.expand_path('../../../../spec_helper', __FILE__)

describe "GC::Profiler.disable" do
  before do
    @status = GC::Profiler.enabled?
  end

  after do
    @status ? GC::Profiler.enable : GC::Profiler.disable
  end

  it "disables the profiler" do
    GC::Profiler.disable
    GC::Profiler.enabled?.should == false
  end
end
