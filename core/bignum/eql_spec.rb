require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#eql? when given a Bignum" do
  it "returns true if the given argument has the same value" do
    a = bignum_value(13)
    a.should eql(bignum_value(13))
    (-a).should eql(-bignum_value(13))
  end
end

describe "Bignum#eql? when given a non-Bignum" do
  it "returns false" do
    a = bignum_value(13)
    a.should_not eql(a.to_f)

    a.should_not eql(2)
    a.should_not eql(3.14)
    a.should_not eql(:symbol)
    a.should_not eql("String")
    a.should_not eql(mock('str'))
  end
end
