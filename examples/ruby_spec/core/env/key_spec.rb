require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/include.rb', __FILE__)
require File.expand_path('../shared/key.rb', __FILE__)

describe "ENV.key?" do
  it_behaves_like(:env_include, :key?)
end

describe "ENV.key" do
  it_behaves_like(:env_key, :key)
end
