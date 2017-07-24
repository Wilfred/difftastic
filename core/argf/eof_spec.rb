require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/eof', __FILE__)

describe "ARGF.eof" do
  it_behaves_like :argf_eof, :eof
end

describe "ARGF.eof?" do
  it_behaves_like :argf_eof, :eof?
end
