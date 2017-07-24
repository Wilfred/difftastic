# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/collect', __FILE__)

describe "Enumerator::Lazy#collect" do
  it_behaves_like :enumerator_lazy_collect, :collect
end
