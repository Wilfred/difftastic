require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/length', __FILE__)
require 'set'

describe "SortedSet#size" do
  it_behaves_like :sorted_set_length, :size
end
