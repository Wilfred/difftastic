require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/equal', __FILE__)

describe "Float#===" do
  it_behaves_like :float_equal, :===
end
