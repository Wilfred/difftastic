require File.expand_path('../../../shared/rational/round', __FILE__)

describe "Rational#round" do
  it_behaves_like(:rational_round, :round)
end
