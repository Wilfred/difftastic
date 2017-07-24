require File.expand_path('../../../../spec_helper', __FILE__)

describe "GC::Profiler.enable" do

  before do
    @status = GC::Profiler.enabled?
  end

  after do
    @status ? GC::Profiler.enable : GC::Profiler.disable
  end

  it "enables the profiler" do
    GC::Profiler.enable
    GC::Profiler.enabled?.should == true
  end
end
