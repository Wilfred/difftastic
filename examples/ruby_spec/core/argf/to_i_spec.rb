require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/fileno', __FILE__)

describe "ARGF.to_i" do
  it_behaves_like :argf_fileno, :to_i
end
