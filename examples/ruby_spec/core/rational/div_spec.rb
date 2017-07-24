require File.expand_path('../../../shared/rational/div', __FILE__)

describe "Rational#div" do
  it_behaves_like(:rational_div, :div)
end

describe "Rational#div passed a Rational" do
  it_behaves_like(:rational_div_rat, :div)
end

describe "Rational#div passed an Integer" do
  it_behaves_like(:rational_div_int, :div)
end

describe "Rational#div passed a Float" do
  it_behaves_like(:rational_div_float, :div)
end
