require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_i', __FILE__)

describe "Integer#to_int" do
  it_behaves_like(:integer_to_i, :to_int)
end
