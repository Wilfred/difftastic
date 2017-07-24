require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/complex/hash', __FILE__)

describe "Complex#hash" do
  it_behaves_like(:complex_hash, :hash)
end
