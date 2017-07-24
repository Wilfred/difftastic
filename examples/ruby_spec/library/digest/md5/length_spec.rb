require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)
require File.expand_path('../shared/length', __FILE__)

describe "Digest::MD5#length" do
  it_behaves_like :md5_length, :length
end

