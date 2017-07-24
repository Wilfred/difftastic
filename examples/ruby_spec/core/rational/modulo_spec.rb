require File.expand_path('../../../shared/rational/modulo', __FILE__)

describe "Rational#%" do
  it_behaves_like(:rational_modulo, :%)
end
