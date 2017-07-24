require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/readlines', __FILE__)

describe "ARGF.readlines" do
  it_behaves_like :argf_readlines, :readlines
end
