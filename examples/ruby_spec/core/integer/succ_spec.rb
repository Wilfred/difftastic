require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/next', __FILE__)

describe "Integer#succ" do
  it_behaves_like(:integer_next, :succ)
end
