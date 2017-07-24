require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/enumerator/new', __FILE__)

describe "Enumerator.new" do
  it_behaves_like(:enum_new, :new)
end
