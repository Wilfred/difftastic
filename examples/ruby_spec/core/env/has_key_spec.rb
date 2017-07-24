require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/include.rb', __FILE__)

describe "ENV.has_key?" do
  it_behaves_like(:env_include, :has_key?)
end
