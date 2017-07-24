require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#+" do
  it "returns self plus other" do
    (491.213 + 2).should be_close(493.213, TOLERANCE)
    (9.99 + bignum_value).should be_close(9223372036854775808.000, TOLERANCE)
    (1001.99 + 5.219).should be_close(1007.209, TOLERANCE)
  end
end
