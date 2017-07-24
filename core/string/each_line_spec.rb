require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/each_line', __FILE__)
require File.expand_path('../shared/each_line_without_block', __FILE__)

describe "String#each_line" do
  it_behaves_like(:string_each_line, :each_line)
  it_behaves_like(:string_each_line_without_block, :each_line)
end
