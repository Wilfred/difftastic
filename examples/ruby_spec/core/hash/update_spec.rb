require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/update', __FILE__)

describe "Hash#update" do
  it_behaves_like(:hash_update, :update)
end
