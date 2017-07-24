require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/modulo', __FILE__)

describe "BigDecimal#%" do
  it_behaves_like(:bigdecimal_modulo, :%)
  it_behaves_like(:bigdecimal_modulo_zerodivisionerror, :%)
end

describe "BigDecimal#modulo" do
  it_behaves_like(:bigdecimal_modulo, :modulo)
  it_behaves_like(:bigdecimal_modulo_zerodivisionerror, :modulo)
end
