require File.expand_path('../../../shared/complex/equal_value', __FILE__)

describe "Complex#==" do
  it_behaves_like :complex_equal_value, :==
end
