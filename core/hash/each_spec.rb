require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/iteration', __FILE__)
require File.expand_path('../shared/each', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "Hash#each" do
  it_behaves_like(:hash_each, :each)
  it_behaves_like(:hash_iteration_no_block, :each)
  it_behaves_like(:enumeratorized_with_origin_size, :each, { 1 => 2, 3 => 4, 5 => 6 })
end
