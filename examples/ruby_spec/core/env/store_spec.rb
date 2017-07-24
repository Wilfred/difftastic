require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/store.rb', __FILE__)

describe "ENV.store" do
  it_behaves_like(:env_store, :store)
end
