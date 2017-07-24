require File.expand_path('../../../spec_helper', __FILE__)

describe "Random.new_seed" do
  it "returns a Bignum" do
    Random.new_seed.should be_an_instance_of(Bignum)
  end

  it "returns an arbitrary seed value each time" do
    bigs = 200.times.map { Random.new_seed }
    bigs.uniq.size.should == 200
  end

  it "is not affected by Kernel#srand" do
    begin
      srand 25
      a = Random.new_seed
      srand 25
      b = Random.new_seed
      a.should_not == b
    ensure
      srand Random.new_seed
    end
  end
end
