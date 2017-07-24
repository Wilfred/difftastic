require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/complex/numeric/arg', __FILE__)

describe "Numeric#angle" do
  it_behaves_like(:numeric_arg, :angle)
end
