require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/collect', __FILE__)

describe "Matrix#collect" do
  it_behaves_like(:collect, :collect)
end
