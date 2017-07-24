require File.expand_path('../../../shared/rational/plus', __FILE__)

describe "Rational#+" do
  it_behaves_like(:rational_plus, :+)
end

describe "Rational#+ with a Rational" do
  it_behaves_like(:rational_plus_rat, :+)
end
describe "Rational#+ with a Float" do
  it_behaves_like(:rational_plus_float, :+)
end

describe "Rational#+ with an Integer" do
  it_behaves_like(:rational_plus_int, :+)
end
