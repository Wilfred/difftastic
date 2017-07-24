require File.expand_path('../../../spec_helper', __FILE__)
require 'set'
require File.expand_path('../shared/collect', __FILE__)

describe "Set#map!" do
  it_behaves_like :set_collect_bang, :map!
end
