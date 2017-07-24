require File.expand_path('../../../spec_helper', __FILE__)

describe "Range#min" do
  it "returns the minimum value in the range when called with no arguments" do
    (1..10).min.should == 1
    ('f'..'l').min.should == 'f'
  end

  it "returns the minimum value in the Float range when called with no arguments" do
    (303.20..908.1111).min.should == 303.20
  end

  it "returns nil when the start point is greater than the endpoint" do
    (100..10).min.should be_nil
    ('z'..'l').min.should be_nil
  end

  it "returns nil when the endpoint equals the start point and the range is exclusive" do
    (7...7).min.should be_nil
  end

  it "returns the start point when the endpoint equals the start point and the range is inclusive" do
    (7..7).min.should equal(7)
  end

  it "returns nil when the start point is greater than the endpoint in a Float range" do
    (3003.20..908.1111).min.should be_nil
  end

  it "returns start point when the range is Time..Time(included end point)" do
    time_start = Time.now
    time_end = Time.now + 1.0
    (time_start..time_end).min.should equal(time_start)
  end

  it "returns start point when the range is Time...Time(excluded end point)" do
    time_start = Time.now
    time_end = Time.now + 1.0
    (time_start...time_end).min.should equal(time_start)
  end
end

describe "Range#min given a block" do
  it "passes each pair of values in the range to the block" do
    acc = []
    (1..10).min {|a,b| acc << [a,b]; a }
    acc.flatten!
    (1..10).each do |value|
      acc.include?(value).should be_true
    end
  end

  it "passes each pair of elements to the block where the first argument is the current element, and the last is the first element" do
    acc = []
    (1..5).min {|a,b| acc << [a,b]; a }
    acc.should == [[2, 1], [3, 1], [4, 1], [5, 1]]
  end

  it "calls #> and #< on the return value of the block" do
    obj = mock('obj')
    obj.should_receive(:>).exactly(2).times
    obj.should_receive(:<).exactly(2).times
    (1..3).min {|a,b| obj }
  end

  it "returns the element the block determines to be the minimum" do
    (1..3).min {|a,b| -3 }.should == 3
  end

  it "returns nil when the start point is greater than the endpoint" do
    (100..10).min {|x,y| x <=> y}.should be_nil
    ('z'..'l').min {|x,y| x <=> y}.should be_nil
    (7...7).min {|x,y| x <=> y}.should be_nil
  end
end
