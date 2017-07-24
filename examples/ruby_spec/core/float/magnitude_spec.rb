require File.expand_path('../shared/abs', __FILE__)

describe "Float#magnitude" do
  it_behaves_like(:float_abs, :magnitude)
end
