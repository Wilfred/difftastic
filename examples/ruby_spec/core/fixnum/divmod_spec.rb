require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#divmod" do
  it "returns an Array containing quotient and modulus obtained from dividing self by the given argument" do
    13.divmod(4).should == [3, 1]
    4.divmod(13).should == [0, 4]

    13.divmod(4.0).should == [3, 1]
    4.divmod(13.0).should == [0, 4]

    1.divmod(2.0).should == [0, 1.0]
    200.divmod(bignum_value).should == [0, 200]
  end

  it "raises a ZeroDivisionError when the given argument is 0" do
    lambda { 13.divmod(0)  }.should raise_error(ZeroDivisionError)
    lambda { 0.divmod(0)   }.should raise_error(ZeroDivisionError)
    lambda { -10.divmod(0) }.should raise_error(ZeroDivisionError)
  end

  it "raises a ZeroDivisionError when the given argument is 0 and a Float" do
    lambda { 0.divmod(0.0)   }.should raise_error(ZeroDivisionError)
    lambda { 10.divmod(0.0)  }.should raise_error(ZeroDivisionError)
    lambda { -10.divmod(0.0) }.should raise_error(ZeroDivisionError)
  end

  it "raises a TypeError when given a non-Integer" do
    lambda {
      (obj = mock('10')).should_receive(:to_int).any_number_of_times.and_return(10)
      13.divmod(obj)
    }.should raise_error(TypeError)
    lambda { 13.divmod("10")    }.should raise_error(TypeError)
    lambda { 13.divmod(:symbol) }.should raise_error(TypeError)
  end
end
