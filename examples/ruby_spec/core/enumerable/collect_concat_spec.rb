require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/collect_concat', __FILE__)

describe "Enumerable#collect_concat" do
  it_behaves_like(:enumerable_collect_concat , :collect_concat)
end
