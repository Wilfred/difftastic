require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'
require File.expand_path('../shared/collect', __FILE__)

describe "SortedSet#map!" do
  it_behaves_like :sorted_set_collect_bang, :map!
end
