require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/clone', __FILE__)

describe "Binding#dup" do
  it_behaves_like(:binding_clone, :dup)
end
