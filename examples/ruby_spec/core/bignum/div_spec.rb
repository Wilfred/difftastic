require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/divide', __FILE__)

describe "Bignum#div" do
  it_behaves_like(:bignum_divide, :div)

  it "returns a result of integer division of self by a float argument" do
    bignum_value(88).div(4294967295.5).should eql(2147483648)
    not_supported_on :opal do
      bignum_value(88).div(4294967295.0).should eql(2147483648)
      bignum_value(88).div(bignum_value(88).to_f).should eql(1)
      bignum_value(88).div(-bignum_value(88).to_f).should eql(-1)
    end
  end

  # #5490
  it "raises ZeroDivisionError if the argument is Float zero" do
    lambda { bignum_value(88).div(0.0) }.should raise_error(ZeroDivisionError)
    lambda { bignum_value(88).div(-0.0) }.should raise_error(ZeroDivisionError)
  end
end
