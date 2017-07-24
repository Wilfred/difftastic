require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/equal_value', __FILE__)

describe "Regexp#==" do
  it_behaves_like :regexp_eql, :==
end
