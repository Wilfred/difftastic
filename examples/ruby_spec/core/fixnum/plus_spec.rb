require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#+" do
  it "returns self plus the given Integer" do
    (491 + 2).should == 493
    (90210 + 10).should == 90220

    (9 + bignum_value).should == 9223372036854775817
    (1001 + 5.219).should == 1006.219
  end

  it "raises a TypeError when given a non-Integer" do
    lambda {
      (obj = mock('10')).should_receive(:to_int).any_number_of_times.and_return(10)
      13 + obj
    }.should raise_error(TypeError)
    lambda { 13 + "10"    }.should raise_error(TypeError)
    lambda { 13 + :symbol }.should raise_error(TypeError)
  end

  it "overflows to Bignum when the result does not fit in Fixnum" do
    (5 + 10).should be_an_instance_of Fixnum
    (1 + bignum_value).should be_an_instance_of Bignum

    bignum_zero = bignum_value.coerce(0).first
    (1 + bignum_zero).should be_an_instance_of Fixnum
    (fixnum_max + 1).should be_an_instance_of(Bignum)
  end
end
