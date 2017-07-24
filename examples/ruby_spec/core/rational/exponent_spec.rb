require File.expand_path('../../../shared/rational/exponent', __FILE__)

describe "Rational#**" do
  it_behaves_like(:rational_exponent, :**)
end
