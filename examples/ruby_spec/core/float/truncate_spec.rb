require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_i', __FILE__)

describe "Float#truncate" do
  it_behaves_like(:float_to_i, :truncate)
end
