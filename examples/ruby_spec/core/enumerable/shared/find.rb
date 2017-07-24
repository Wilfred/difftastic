require File.expand_path('../enumerable_enumeratorized', __FILE__)

describe :enumerable_find, shared: true do
  # #detect and #find are aliases, so we only need one function
  before :each do
    ScratchPad.record []
    @elements = [2, 4, 6, 8, 10]
    @numerous = EnumerableSpecs::Numerous.new(*@elements)
    @empty = []
  end

  it "passes each entry in enum to block while block when block is false" do
    visited_elements = []
    @numerous.send(@method) do |element|
      visited_elements << element
      false
    end
    visited_elements.should == @elements
  end

  it "returns nil when the block is false and there is no ifnone proc given" do
    @numerous.send(@method) {|e| false }.should == nil
  end

  it "returns the first element for which the block is not false" do
    @elements.each do |element|
      @numerous.send(@method) {|e| e > element - 1 }.should == element
    end
  end

  it "returns the value of the ifnone proc if the block is false" do
    fail_proc = lambda { "cheeseburgers" }
    @numerous.send(@method, fail_proc) {|e| false }.should == "cheeseburgers"
  end

  it "doesn't call the ifnone proc if an element is found" do
    fail_proc = lambda { raise "This shouldn't have been called" }
    @numerous.send(@method, fail_proc) {|e| e == @elements.first }.should == 2
  end

  it "calls the ifnone proc only once when the block is false" do
    times = 0
    fail_proc = lambda { times += 1; raise if times > 1; "cheeseburgers" }
    @numerous.send(@method, fail_proc) {|e| false }.should == "cheeseburgers"
  end

  it "calls the ifnone proc when there are no elements" do
    fail_proc = lambda { "yay" }
    @empty.send(@method, fail_proc) {|e| true}.should == "yay"
  end

  it "passes through the values yielded by #each_with_index" do
    [:a, :b].each_with_index.send(@method) { |x, i| ScratchPad << [x, i]; nil }
    ScratchPad.recorded.should == [[:a, 0], [:b, 1]]
  end

  it "returns an enumerator when no block given" do
    @numerous.send(@method).should be_an_instance_of(Enumerator)
  end

  it "passes the ifnone proc to the enumerator" do
    times = 0
    fail_proc = lambda { times += 1; raise if times > 1; "cheeseburgers" }
    @numerous.send(@method, fail_proc).each {|e| false }.should == "cheeseburgers"
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.send(@method) {|e| e == [1, 2] }.should == [1, 2]
  end

  it_should_behave_like :enumerable_enumeratorized_with_unknown_size
end
