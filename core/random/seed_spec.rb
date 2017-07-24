require File.expand_path('../../../spec_helper', __FILE__)

describe "Random#seed" do
  it "returns an Integer" do
    Random.new.seed.should be_kind_of(Integer)
  end

  it "returns an arbitrary seed if the constructor was called without arguments" do
    Random.new.seed.should_not == Random.new.seed
  end

  it "returns the same generated seed when repeatedly called on the same object" do
    prng = Random.new
    prng.seed.should == prng.seed
  end

  it "returns the seed given in the constructor" do
    prng = Random.new(36788)
    prng.seed.should == prng.seed
    prng.seed.should == 36788
  end

  it "returns the given seed coerced with #to_int" do
    obj = mock_numeric('int')
    obj.should_receive(:to_int).and_return(34)
    prng = Random.new(obj)
    prng.seed.should == 34
  end
end
