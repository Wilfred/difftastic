require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/each_codepoint', __FILE__)

describe "ARGF.codepoints" do
  it_behaves_like :argf_each_codepoint, :codepoints
end
