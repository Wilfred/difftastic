require File.expand_path('../../../shared/rational/inspect', __FILE__)

describe "Rational#inspect" do
  it_behaves_like(:rational_inspect, :inspect)
end
