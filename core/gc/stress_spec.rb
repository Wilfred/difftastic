require File.expand_path('../../../spec_helper', __FILE__)

describe "GC.stress" do
  after :each do
    # make sure that we never leave these tests in stress enabled GC!
    GC.stress = false
  end

  it "returns current status of GC stress mode" do
    GC.stress.should be_false
    GC.stress = true
    GC.stress.should be_true
    GC.stress = false
    GC.stress.should be_false
  end
end

describe "GC.stress=" do
  after :each do
    GC.stress = false
  end

  it "sets the stress mode" do
    GC.stress = true
    GC.stress.should be_true
  end
end
