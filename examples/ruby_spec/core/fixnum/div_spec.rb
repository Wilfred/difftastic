require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#div with a Fixnum" do
  it "returns self divided by the given argument as an Integer" do
    2.div(2).should == 1
    1.div(2).should == 0
    5.div(2).should == 2
  end
end

describe "Fixnum#div" do
  it "rounds towards -inf" do
    8192.div(10).should == 819
    8192.div(-10).should == -820
    (-8192).div(10).should == -820
    (-8192).div(-10).should == 819
  end

  it "coerces self and the given argument to Floats and returns self divided by other as Fixnum" do
    1.div(0.2).should == 5
    1.div(0.16).should == 6
    1.div(0.169).should == 5
    -1.div(50.4).should == -1
    1.div(bignum_value).should == 0
  end

  it "raises a ZeroDivisionError when the given argument is 0 and a Float" do
    lambda { 0.div(0.0)   }.should raise_error(ZeroDivisionError)
    lambda { 10.div(0.0)  }.should raise_error(ZeroDivisionError)
    lambda { -10.div(0.0) }.should raise_error(ZeroDivisionError)
  end

  it "raises a ZeroDivisionError when the given argument is 0" do
    lambda { 13.div(0) }.should raise_error(ZeroDivisionError)
  end

  it "raises a TypeError when given a non-Integer" do
    lambda {
      (obj = mock('10')).should_receive(:to_int).any_number_of_times.and_return(10)
      13.div(obj)
    }.should raise_error(TypeError)
    lambda { 5.div("2") }.should raise_error(TypeError)
  end
end
