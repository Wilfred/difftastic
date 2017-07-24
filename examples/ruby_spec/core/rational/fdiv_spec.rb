require File.expand_path('../../../shared/rational/fdiv', __FILE__)

describe "Rational#fdiv" do
  it_behaves_like(:rational_fdiv, :fdiv)
end
