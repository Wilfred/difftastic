require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/collect', __FILE__)

describe "Array#map" do
  it_behaves_like(:array_collect, :map)
end

describe "Array#map!" do
  it_behaves_like(:array_collect_b, :map!)
end
