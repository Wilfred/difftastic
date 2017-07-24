require File.expand_path('../../../shared/enumerator/each', __FILE__)

describe "Enumerator#each" do
  it_behaves_like(:enum_each, :each)
end
