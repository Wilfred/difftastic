require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#eql?" do
  before :each do
    @obj = NumericSpecs::Subclass.new
  end

  it "returns false if self's and other's types don't match" do
    @obj.should_not eql(1)
    @obj.should_not eql(-1.5)
    @obj.should_not eql(bignum_value)
    @obj.should_not eql(:sym)
  end

  it "returns the result of calling self#== with other when self's and other's types match" do
    other = NumericSpecs::Subclass.new
    @obj.should_receive(:==).with(other).and_return("result", nil)
    @obj.should eql(other)
    @obj.should_not eql(other)
  end
end
