require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'
require File.expand_path('../shared/add', __FILE__)

describe "SortedSet#add" do
  it_behaves_like :sorted_set_add, :add

  it "takes only values which responds <=>" do
    obj = mock('no_comparison_operator')
    obj.should_receive(:respond_to?).with(:<=>).and_return(false)
    lambda { SortedSet["hello"].add(obj) }.should raise_error(ArgumentError)
  end
end

describe "SortedSet#add?" do
  before :each do
    @set = SortedSet.new
  end

  it "adds the passed Object to self" do
    @set.add?("cat")
    @set.should include("cat")
  end

  it "returns self when the Object has not yet been added to self" do
    @set.add?("cat").should equal(@set)
  end

  it "returns nil when the Object has already been added to self" do
    @set.add?("cat")
    @set.add?("cat").should be_nil
  end
end
