require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/each_byte', __FILE__)

describe "ARGF.each_byte" do
  it_behaves_like :argf_each_byte, :each_byte
end
