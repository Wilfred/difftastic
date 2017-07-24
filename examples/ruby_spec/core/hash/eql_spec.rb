require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/eql', __FILE__)

describe "Hash#eql?" do
  it_behaves_like :hash_eql, :eql?
  it_behaves_like :hash_eql_additional, :eql?
  it_behaves_like :hash_eql_additional_more, :eql?
end
