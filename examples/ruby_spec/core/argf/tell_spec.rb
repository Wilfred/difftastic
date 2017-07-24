require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/pos', __FILE__)

describe "ARGF.tell" do
  it_behaves_like :argf_pos, :tell
end
