require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/value', __FILE__)

describe "Hash#has_value?" do
  it_behaves_like(:hash_value_p, :has_value?)
end

