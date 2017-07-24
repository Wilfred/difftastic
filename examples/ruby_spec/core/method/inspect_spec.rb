require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_s', __FILE__)

describe "Method#inspect" do
  it_behaves_like(:method_to_s, :inspect)
end
