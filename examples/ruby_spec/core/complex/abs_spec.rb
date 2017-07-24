require File.expand_path('../../../shared/complex/abs', __FILE__)

describe "Complex#abs" do
  it_behaves_like(:complex_abs, :abs)
end
