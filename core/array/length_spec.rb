require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/length', __FILE__)

describe "Array#length" do
  it_behaves_like(:array_length, :length)
end
