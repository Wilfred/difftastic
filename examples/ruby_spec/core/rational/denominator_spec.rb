require File.expand_path('../../../shared/rational/denominator', __FILE__)

describe "Rational#denominator" do
  it_behaves_like(:rational_denominator, :denominator)
end
