# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/collect_concat', __FILE__)

describe "Enumerator::Lazy#collect_concat" do
  it_behaves_like :enumerator_lazy_collect_concat, :collect_concat
end
