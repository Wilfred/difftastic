require File.expand_path('../../../shared/complex/to_s', __FILE__)

describe "Complex#to_s" do
  it_behaves_like(:complex_to_s, :to_s)
end
