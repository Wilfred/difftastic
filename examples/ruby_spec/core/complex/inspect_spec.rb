require File.expand_path('../../../shared/complex/inspect', __FILE__)

describe "Complex#inspect" do
  it_behaves_like(:complex_inspect, :inspect)
end
