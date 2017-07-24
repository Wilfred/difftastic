require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/store', __FILE__)

describe "Hash#store" do
  it_behaves_like(:hash_store, :store)
end
