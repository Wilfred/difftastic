require File.expand_path('../../../shared/rational/hash', __FILE__)

describe "Rational#hash" do
  it_behaves_like(:rational_hash, :hash)
end
