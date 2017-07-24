require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/value.rb', __FILE__)

describe "ENV.has_value?" do
  it_behaves_like(:env_value, :has_value?)
end
