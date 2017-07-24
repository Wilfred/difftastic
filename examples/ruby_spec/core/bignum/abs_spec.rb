require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/abs', __FILE__)

describe "Bignum#abs" do
  it_behaves_like(:bignum_abs, :abs)
end

