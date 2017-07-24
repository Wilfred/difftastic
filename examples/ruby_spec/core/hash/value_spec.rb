require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/value', __FILE__)

describe "Hash#value?" do
  it_behaves_like(:hash_value_p, :value?)
end

