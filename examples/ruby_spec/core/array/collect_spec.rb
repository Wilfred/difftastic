require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/collect', __FILE__)

describe "Array#collect" do
  it_behaves_like(:array_collect, :collect)
end

describe "Array#collect!" do
  it_behaves_like(:array_collect_b, :collect!)
end
