require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/modulo', __FILE__)

describe "Float#%" do
  it_behaves_like(:float_modulo, :%)
end

describe "Float#modulo" do
  it_behaves_like(:float_modulo, :modulo)
end
