require File.expand_path('../../../shared/rational/multiply', __FILE__)

describe "Rational#*" do
  it_behaves_like(:rational_multiply, :*)
end

describe "Rational#* passed a Rational" do
  it_behaves_like(:rational_multiply_rat, :*)
end

describe "Rational#* passed a Float" do
  it_behaves_like(:rational_multiply_float, :*)
end

describe "Rational#* passed an Integer" do
  it_behaves_like(:rational_multiply_int, :*)
end
