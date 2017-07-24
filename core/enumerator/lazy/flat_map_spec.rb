# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/collect_concat', __FILE__)

describe "Enumerator::Lazy#flat_map" do
  it_behaves_like :enumerator_lazy_collect_concat, :flat_map
end
