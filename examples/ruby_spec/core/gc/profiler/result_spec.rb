require File.expand_path('../../../../spec_helper', __FILE__)

describe "GC::Profiler.result" do
  it "returns a string" do
    GC::Profiler.result.should be_kind_of(String)
  end
end
