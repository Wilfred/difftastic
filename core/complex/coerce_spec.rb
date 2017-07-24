require File.expand_path('../../../shared/complex/coerce', __FILE__)

describe "Complex#coerce" do
  it_behaves_like(:complex_coerce, :coerce)
end
