require File.expand_path('../shared/each', __FILE__)

describe "GzipReader#each" do
  it_behaves_like :gzipreader_each, :each
end
