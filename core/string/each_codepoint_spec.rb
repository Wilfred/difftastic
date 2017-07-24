require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/codepoints', __FILE__)
require File.expand_path('../shared/each_codepoint_without_block', __FILE__)

with_feature :encoding do
  describe "String#each_codepoint" do
    it_behaves_like(:string_codepoints, :each_codepoint)
    it_behaves_like(:string_each_codepoint_without_block, :each_codepoint)
  end
end
