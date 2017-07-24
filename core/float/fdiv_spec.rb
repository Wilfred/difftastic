require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/quo', __FILE__)

describe "Float#fdiv" do
  it_behaves_like :float_quo, :fdiv
end
