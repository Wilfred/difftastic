require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/conjugate', __FILE__)

describe "Matrix#conj" do
  it_behaves_like(:matrix_conjugate, :conj)
end
