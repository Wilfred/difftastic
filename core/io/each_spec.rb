require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/each', __FILE__)

describe "IO#each" do
  it_behaves_like :io_each, :each
end

describe "IO#each" do
  it_behaves_like :io_each_default_separator, :each
end
