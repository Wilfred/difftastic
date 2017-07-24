require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/next', __FILE__)

describe "Integer#next" do
  it_behaves_like(:integer_next, :next)
end
