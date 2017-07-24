require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/divide', __FILE__)

describe "Bignum#/" do
  it_behaves_like(:bignum_divide, :/)

  it "returns self divided by float" do
    not_supported_on :opal do
      (bignum_value(88) / 4294967295.0).should be_close(2147483648.5, TOLERANCE)
    end
    (bignum_value(88) / 4294967295.5).should be_close(2147483648.25, TOLERANCE)
  end

  it "does NOT raise ZeroDivisionError if other is zero and is a Float" do
    (bignum_value / 0.0).to_s.should == 'Infinity'
    (bignum_value / -0.0).to_s.should == '-Infinity'
  end
end
