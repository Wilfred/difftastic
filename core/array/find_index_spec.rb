require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/index', __FILE__)

describe "Array#find_index" do
  it_behaves_like :array_index, :find_index
end
