require File.expand_path('../shared/abs', __FILE__)

describe "Float#abs" do
  it_behaves_like(:float_abs, :abs)
end
