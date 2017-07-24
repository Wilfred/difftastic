require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/length', __FILE__)

describe "Symbol#length" do
  it_behaves_like :symbol_length, :length
end
