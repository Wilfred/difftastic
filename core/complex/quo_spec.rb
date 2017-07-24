require File.expand_path('../../../shared/complex/divide', __FILE__)

describe "Complex#quo" do
  it_behaves_like :complex_divide, :quo
end
