require File.expand_path('../../../shared/complex/image', __FILE__)

describe "Complex#imaginary" do
  it_behaves_like :complex_image, :imaginary
end
