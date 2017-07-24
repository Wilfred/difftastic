require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#<=>" do
  it "returns -1 when self is less than the given argument" do
    (-3 <=> -1).should == -1
    (-5 <=> 10).should == -1
    (-5 <=> -4.5).should == -1
  end

  it "returns 0 when self is equal to the given argument" do
    (0 <=> 0).should == 0
    (954 <=> 954).should == 0
    (954 <=> 954.0).should == 0
  end

  it "returns 1 when self is greater than the given argument" do
    (496 <=> 5).should == 1
    (200 <=> 100).should == 1
    (51 <=> 50.5).should == 1
  end

  it "returns nil when the given argument is not an Integer" do
    (3 <=> mock('x')).should == nil
    (3 <=> 'test').should == nil
  end
end
