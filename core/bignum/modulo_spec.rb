require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/modulo', __FILE__)

describe "Bignum#%" do
  it_behaves_like(:bignum_modulo, :%)
end

describe "Bignum#modulo" do
  it_behaves_like(:bignum_modulo, :modulo)
end
