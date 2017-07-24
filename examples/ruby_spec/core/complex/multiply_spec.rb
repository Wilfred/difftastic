require File.expand_path('../../../shared/complex/multiply', __FILE__)

describe "Complex#*" do
  it_behaves_like :complex_multiply, :*
end
