require File.expand_path('../../../shared/complex/exponent', __FILE__)

describe "Complex#**" do
  it_behaves_like :complex_exponent, :**
end
