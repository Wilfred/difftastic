require File.expand_path('../../../spec_helper', __FILE__)

describe "Array#combination" do
  before :each do
    @array = [1, 2, 3, 4]
  end

  it "returns an enumerator when no block is provided" do
    @array.combination(2).should be_an_instance_of(Enumerator)
  end

  it "returns self when a block is given" do
    @array.combination(2){}.should equal(@array)
  end

  it "yields nothing for out of bounds length and return self" do
    @array.combination(5).to_a.should == []
    @array.combination(-1).to_a.should == []
  end

  it "yields the expected combinations" do
    @array.combination(3).to_a.sort.should == [[1,2,3],[1,2,4],[1,3,4],[2,3,4]]
  end

  it "yields nothing if the argument is out of bounds" do
    @array.combination(-1).to_a.should == []
    @array.combination(5).to_a.should == []
  end

  it "yields a copy of self if the argument is the size of the receiver" do
    r = @array.combination(4).to_a
    r.should == [@array]
    r[0].should_not equal(@array)
  end

  it "yields [] when length is 0" do
    @array.combination(0).to_a.should == [[]] # one combination of length 0
    [].combination(0).to_a.should == [[]] # one combination of length 0
  end

  it "yields a partition consisting of only singletons" do
    @array.combination(1).to_a.sort.should == [[1],[2],[3],[4]]
  end

  it "generates from a defensive copy, ignoring mutations" do
    accum = []
    @array.combination(2) do |x|
      accum << x
      @array[0] = 1
    end
    accum.should == [[1, 2], [1, 3], [1, 4], [2, 3], [2, 4], [3, 4]]
  end

  describe "when no block is given" do
    describe "returned Enumerator" do
      describe "size" do
        it "returns 0 when the number of combinations is < 0" do
          @array.combination(-1).size.should == 0
          [].combination(-2).size.should == 0
        end
        it "returns the binomial coeficient between the array size the number of combinations" do
          @array.combination(5).size.should == 0
          @array.combination(4).size.should == 1
          @array.combination(3).size.should == 4
          @array.combination(2).size.should == 6
          @array.combination(1).size.should == 4
          @array.combination(0).size.should == 1
          [].combination(0).size.should == 1
          [].combination(1).size.should == 0
        end
      end
    end
  end
end
