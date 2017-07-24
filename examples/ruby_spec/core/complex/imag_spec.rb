require File.expand_path('../../../shared/complex/image', __FILE__)

describe "Complex#imag" do
  it_behaves_like(:complex_image, :imag)
end
