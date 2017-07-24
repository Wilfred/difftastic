require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/equal_value', __FILE__)

describe "Module#eql?" do
  it_behaves_like(:module_equal, :eql?)
end
