require File.expand_path('../../../shared/rational/coerce', __FILE__)

describe "Rational#coerce" do
  it_behaves_like(:rational_coerce, :coerce)
end
