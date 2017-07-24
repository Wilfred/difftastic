require File.expand_path('../shared/abs', __FILE__)

describe "Numeric#magnitude" do
  it_behaves_like(:numeric_abs, :magnitude)
end
