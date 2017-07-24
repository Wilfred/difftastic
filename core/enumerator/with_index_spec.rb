require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/enumerator/with_index', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "Enumerator#with_index" do
  it_behaves_like(:enum_with_index, :with_index)
  it_behaves_like(:enumeratorized_with_origin_size, :with_index, [1,2,3].select)

  it "returns a new Enumerator when no block is given" do
    enum1 = [1,2,3].select
    enum2 = enum1.with_index
    enum2.should be_an_instance_of(Enumerator)
    enum1.should_not === enum2
  end

  it "accepts an optional argument when given a block" do
    lambda do
      @enum.with_index(1) { |f| f}
    end.should_not raise_error(ArgumentError)
  end

  it "accepts an optional argument when not given a block" do
    lambda do
      @enum.with_index(1)
    end.should_not raise_error(ArgumentError)
  end

  it "numbers indices from the given index when given an offset but no block" do
    @enum.with_index(1).to_a.should == [[1,1], [2,2], [3,3], [4,4]]
  end

  it "numbers indices from the given index when given an offset and block" do
    acc = []
    @enum.with_index(1) {|e,i| acc << [e,i] }
    acc.should == [[1,1], [2,2], [3,3], [4,4]]
  end

  it "raises a TypeError when the argument cannot be converted to numeric" do
    lambda do
      @enum.with_index('1') {|*i| i}
    end.should raise_error(TypeError)
  end

  it "converts non-numeric arguments to Integer via #to_int" do
    (o = mock('1')).should_receive(:to_int).and_return(1)
    @enum.with_index(o).to_a.should == [[1,1], [2,2], [3,3], [4,4]]
  end

  it "coerces the given numeric argument to an Integer" do
    @enum.with_index(1.678).to_a.should == [[1,1], [2,2], [3,3], [4,4]]

    res = []
    @enum.with_index(1.001) { |*x| res << x}
    res.should == [[1,1], [2,2], [3,3], [4,4]]
  end

  it "treats nil argument as no argument" do
    @enum.with_index(nil).to_a.should == [[1,0], [2,1], [3,2], [4,3]]

    res = []
    @enum.with_index(nil) { |*x| res << x}
    res.should == [[1,0], [2,1], [3,2], [4,3]]
  end

  it "accepts negative argument" do
    @enum.with_index(-1).to_a.should == [[1,-1], [2,0], [3,1], [4,2]]

    res = []
    @enum.with_index(-1) { |*x| res << x}
    res.should == [[1,-1], [2,0], [3,1], [4,2]]
  end
end
