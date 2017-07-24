require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/enumerator/with_object', __FILE__)

describe "Enumerator#with_object" do
  it_behaves_like :enum_with_object, :with_object
end
