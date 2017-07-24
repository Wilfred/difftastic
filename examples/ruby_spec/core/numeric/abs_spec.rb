require File.expand_path('../shared/abs', __FILE__)

describe "Numeric#abs" do
  it_behaves_like(:numeric_abs, :abs)
end
