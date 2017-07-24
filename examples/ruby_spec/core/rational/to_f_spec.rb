require File.expand_path('../../../shared/rational/to_f', __FILE__)

describe "Rational#to_f" do
  it_behaves_like(:rational_to_f, :to_f)
end
