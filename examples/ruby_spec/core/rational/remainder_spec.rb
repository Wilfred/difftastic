require File.expand_path('../../../shared/rational/remainder', __FILE__)

describe "Rational#remainder" do
  it_behaves_like(:rational_remainder, :remainder)
end
