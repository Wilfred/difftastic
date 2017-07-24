require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/complex/numeric/conj', __FILE__)

describe "Numeric#conjugate" do
  it_behaves_like(:numeric_conj, :conjugate)
end
