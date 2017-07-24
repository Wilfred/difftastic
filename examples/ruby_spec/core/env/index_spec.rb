require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/key.rb', __FILE__)

describe "ENV.index" do
  it_behaves_like(:env_key, :index)
end
