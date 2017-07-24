require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/fileno', __FILE__)

describe "ARGF.fileno" do
  it_behaves_like :argf_fileno, :fileno
end
