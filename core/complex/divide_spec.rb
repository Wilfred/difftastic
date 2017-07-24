require File.expand_path('../../../shared/complex/divide', __FILE__)

describe "Complex#/" do
  it_behaves_like :complex_divide, :/
end
