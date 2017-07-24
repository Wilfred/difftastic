require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/complex/numeric/polar', __FILE__)

describe "Numeric#polar" do
  it_behaves_like(:numeric_polar, :polar)
end
