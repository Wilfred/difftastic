require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/complex/conjugate', __FILE__)

describe "Complex#conj" do
  it_behaves_like(:complex_conjugate, :conj)
end
