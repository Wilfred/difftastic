require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/to_s', __FILE__)

describe "Hash#to_s" do
  it_behaves_like :hash_to_s, :to_s
end
