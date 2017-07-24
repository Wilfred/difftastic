require File.expand_path('../../../spec_helper', __FILE__)

describe "Random.srand" do
  it "returns an arbitrary seed if .srand wasn't called previously with an argument and no argument is supplied this time" do
    Random.srand # Reset to random seed in case .srand was called previously
    Random.srand.should_not == Random.srand
  end

  it "returns the previous argument to .srand if one was given and no argument is supplied" do
    Random.srand 34
    Random.srand.should == 34
  end

  it "returns an arbitrary seed if .srand wasn't called previously with an argument and 0 is supplied this time" do
    Random.srand # Reset to random seed in case .srand was called previously
    Random.srand(0).should_not == Random.srand(0)
  end

  it "returns the previous argument to .srand if one was given and 0 is supplied" do
    Random.srand 34
    Random.srand(0).should == 34
  end

  it "seeds Random.rand such that its return value is deterministic" do
    Random.srand 176542
    a = 20.times.map { Random.rand }
    Random.srand 176542
    b = 20.times.map { Random.rand }
    a.should == b
  end

  it "seeds Kernel.rand such that its return value is deterministic" do
    Random.srand 176542
    a = 20.times.map { Kernel.rand }
    Random.srand 176542
    b = 20.times.map { Kernel.rand }
    a.should == b
  end
end
