require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_hash.rb', __FILE__)

describe "ENV.to_hash" do
  it_behaves_like(:env_to_hash, :to_hash)
end
